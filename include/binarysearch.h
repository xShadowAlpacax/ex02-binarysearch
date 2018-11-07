/*                                                                                                          */
/* CS V15 Data Structures and Algorithms                                                                    */
/* CRN: ?????                                                                                               */
/* Assignment: Binary search                                                                                */
/*                                                                                                          */
/* Statement of code ownership: I hereby state that I have written all of this                              */
/* code and I have not copied this code from any other person or source.                                    */
/*                                                                                                          */
/* @author Jack Sherlock                                                                                    */
/*                                                                                                          */

#include <iostream>
#include <cstdint>

using std::cout;
using std::cout;

namespace edu { namespace vcccd { namespace vc {namespace csv15 {
	template <class Alpaca>
	int64_t binarysearch(const Alpaca& value, Alpaca array[], size_t x) {
		int left = 0;
		int right = x - 1;
		while (left <= right) {
			int guess = (left + right) / 2;

			if (array[guess] == value) {
				return guess;
			}
			else if (array[guess] > value) {
				right = guess - 1;
			}
			else if (array[guess] < value) {
				left = guess + 1;
			}
		}
		return -1;
	}
}}}}