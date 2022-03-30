#pragma once
#include <iostream>
#include <string>
#include <stdio.h>

constexpr auto nothing = 0;

using namespace std;

namespace Delta {
	
	// Aliases	
	typedef string str;
	typedef int num;
	typedef float fl;
	
	//TYPE COMPLETION [MIGHT BE BUGGY AND UNTESTED]
	typedef string var;
	typedef int var;
	typedef char var;
	typedef float var;
	typedef bool var;

	typedef void fn;

	bool True = true;
	bool False = false;

	class Console {
		void echo(string input) {
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

	

	// Colors
	// TODO: complete that

}
