// -*- mode: c++ -*-
// $Id$
// http://www.bagley.org/~doug/shootout/

#include <iostream>
#include <vector>

int
main(int argc, char *argv[]) {
    int i, n = 10*((argc == 2) ? atoi(argv[1]) : 900000);
    typedef std::vector<int> ARY;
    ARY x(n);
    ARY y(n);

    for (i=0; i<n;) {
	x[i] = i; ++i;
	x[i] = i; ++i;
	x[i] = i; ++i;
	x[i] = i; ++i;
	x[i] = i; ++i;

	x[i] = i; ++i;
	x[i] = i; ++i;
	x[i] = i; ++i;
	x[i] = i; ++i;
	x[i] = i; ++i;
    }
    for (int i = n - 1; i >= 0;) {
        y[i] = x[i]; --i;
        y[i] = x[i]; --i;
        y[i] = x[i]; --i;
        y[i] = x[i]; --i;
        y[i] = x[i]; --i;

        y[i] = x[i]; --i;
        y[i] = x[i]; --i;
        y[i] = x[i]; --i;
        y[i] = x[i]; --i;
        y[i] = x[i]; --i;
    }

    std::cout << y.back() << std::endl;
}
