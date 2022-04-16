#pragma once
#include <iostream>
#include <stdio.h>
#undef void

constexpr auto nothing = 0;

using namespace std;

namespace Delta {
	
	// Aliases	
	typedef string str;
	typedef int num;
	typedef float fl;
	
	//TYPE COMPLETION [MIGHT BE BUGGY AND IS UNTESTED]
	typedef str var;
	typedef num var;
	typedef char var;
	typedef float var;
	typedef bool var;
	typedef volatile var;
	typedef auto var;

	typedef void fn;
	typedef string fn;
	typedef num fn;
	typedef char fn;
	typedef fl fn;
	typedef bool fn;

	const bool yes = true;
	const bool no = false;

	fn emit(var value) {
		return value;
	}

  	fn echo(str input) {
		cout << input << endl;
	}
	fn echo(num input) {
		cout << input << endl;
  	}
	fn echo(char input) {
		cout << input << endl;
	}
	fn echo(fl input) {
		cout << input << endl;
	}
	fn echo(bool input) {
		cout << input << endl;
	}
	fn echo(const char* input) {
		cout << input << endl;
	}

	fn read(str input) {
		cin >> input >> endl;
	}
	fn read(num input) {
		cin >> input >> endl;
	}
	fn read(char input) {
		cin >> input >> endl;
	}
	fn read(fl input) {
		cin >> input >> endl;
	}
	fn read(bool input) {
		cin >> input >> endl;
	}
	fn read(char* input) {
		cin >> input >> endl;
	}

	fn err(str input) {
		cout << "[ERROR] " << input << endl;
	}

	fn err(str input) {
		cout << "[ERROR] " << input << endl;
	}

	fn log(const input) {
		cout << "[LOG] " << input << endl;
	}
}

