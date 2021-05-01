#include <stdlib.h>
#include <cstring>

class N {
	public:
		char annotation[100];
		int nb;

		virtual int operator+(N &n) {
			return (nb + n.nb);
		}
		virtual int operator-(N &n) {
			return (nb - n.nb);
		}
		N(int n) {
			nb = n;
		}
		void setAnnotation(char *str) {
			memcpy(annotation, str, strlen(str));
		}
};

int main(int argc, char **argv) {
	if (argc < 2)
	{
		exit(1);
	}

	N *n1 = new N(5);
	N *n2 = new N(6);

	N *n1_p = n1;
	N *n2_p = n2;

	n1_p->setAnnotation(argv[1]);
	return (*n2_p + *n1_p);
}
