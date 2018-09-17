#include <iostream>

using std::cout;
using std::cout;

namespace edu { namespace vcccd { namespace vc {namespace csv15 {
	template <class Alpaca>
	int64_t binarysearch(Alpaca value, Alpaca array[], size_t size) {

		if (array == NULL) return -1;
		if (size == 0) return -1;

		size_t guess = size / 2;

		if (value == array[guess]) {
			return guess;
		}

		if (value < array[guess]) {
			return binarysearch(value, array, guess);
		}

		else if (value > array[guess]) {
			return binarysearch(value, array + guess + 1, guess);
		}
		return -1;
	}
}}}}