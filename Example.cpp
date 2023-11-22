#include "Example.h"

Example::Example() {

}

Example::Example(int value1, int value2) {
	Value1 = value1;
	Value2 = value2;
}

int Example::Addition() {
	int result = Value1 + Value2;
	InternalResult = result;
	return result;
}