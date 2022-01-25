#pragma once
#pragma message("[LOG] Using Alpha\n")
#include <iostream>
#include <string>
#include <stdio.h>

constexpr auto Null = 0;

using namespace std;

namespace AlphaLang {

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

	bool True = true;
	bool False = false;

	class Console {
		void print(string input) {
			cout << input;
		}
		void print(int input) {
			cout << input;
		}
		void print(char input) {
			cout << input;
		}
		void print(float input) {
			cout << input;
		}
		void print(bool input) {
			cout << input;
		}
		void print(const char* input) {
			cout << input;
		}

  		void println(string input) {
			cout << input << endl;
		}
		void println(int input) {
			cout << input << endl;
  		}
		void println(char input) {
			cout << input << endl;
		}
		void println(float input) {
			cout << input << endl;
		}
		void println(bool input) {
			cout << input << endl;
		}
		void println(const char* input) {
			cout << input << endl;
		}

		void input(string input) {
			cin >> input;
		}
		void input(int input) {
			cin >> input;
		}
		void input(char input) {
			cin >> input;
		}
		void input(float input) {
			cin >> input;
		}
		void input(bool input) {
			cin >> input;
		}
		void input(char* input) {
			cin >> input;
		}
		void inputln(string input) {
			cin >> input >> endl;
		}
		void inputln(int input) {
			cin >> input >> endl;
		}
		void inputln(char input) {
			cin >> input >> endl;
		}
		void inputln(float input) {
			cin >> input >> endl;
		}
		void inputln(bool input) {
			cin >> input >> endl;
		}
		void inputln(char* input) {
			cin >> input >> endl;
		}

		void printError(string input) {
			cout << "[ERROR] " << input << endl;
		}

		void printError(string input) {
			cout << "[ERROR] " << input << endl;
		}

		void printError(string input) {
			cout << "[ERROR] " << input << endl;
		}

		void printLog(const input) {
			cout << "[LOG] " << input << endl;
		}
	}

	class RocketUI {
		void Start() {
			// TODO complete that			
		}
	}

	void printError(string input) {
		cout << "[ERROR] " << input << endl;
	}

	void printLog(const input) {
		cout << "[LOG] " << input << endl;
	}

	// Colors
	

}
