#pragma once
#include <iostream>
#include <string>
#include <stdio.h>

constexpr auto Null = 0;

using namespace std;

namespace Alpha {
	// ------------------------------------------------------------------------------------------------------------------------------------
		// Types
	typedef string String;
	typedef int Integer;
	typedef char Character;
	typedef float Float;
	typedef bool Boolean;
	typedef const char* CString;
	typedef void Variable;

	typedef void Func;
	typedef string StrFunc;
	typedef int IntFunc;
	typedef char CharFunc;
	typedef float FloatFunc;
	typedef bool BoolFunc;
	typedef const char* CStrFunc;

	// ------------------------------------------------------------------------------------------------------------------------------------
		// Variables
	bool True = true;
	bool False = false;

	// ------------------------------------------------------------------------------------------------------------------------------------
		// Output
	void SPrint(string input) {
		cout << input;
	}
	void IPrint(int input) {
		cout << input;
	}
	void CPrint(char input) {
		cout << input;
	}
	void FPrint(float input) {
		cout << input;
	}
	void BPrint(bool input) {
		cout << input;
	}
	void CSPrint(const char* input) {
		cout << input;
	}

  void SPrintln(string input) {
		cout << input << endl;
	}
	void IPrintln(int input) {
		cout << input << endl;
  }
	void CPrintln(char input) {
		cout << input << endl;
	}
	void FPrintln(float input) {
		cout << input << endl;
	}
	void BPrintln(bool input) {
		cout << input << endl;
	}
	void CSPrintln(const char* input) {
		cout << input << endl;
	}


	// ------------------------------------------------------------------------------------------------------------------------------------
		// Input
	void SInput(string input) {
		cin >> input;
	}
	void IInput(int input) {
		cin >> input;
	}
	void CInput(char input) {
		cin >> input;
	}
	void FInput(float input) {
		cin >> input;
	}
	void BInput(bool input) {
		cin >> input;
	}
	void CSInput(char* input) {
		cin >> input;
	}

	// Colors
	

}