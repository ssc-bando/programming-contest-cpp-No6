#include <string>
#include "fizzbuzz.h"

/*
 * 行数少な目
 */
const std::string& fizzbuzz(int n){
	static std::string sRet;
	sRet = (n%15 ? (n%5 ? (n%3 ? std::to_string(n) : "fizz") : "buzz") : "fizzbuzz");
	return sRet;
}
