#pragma once
#include <../Global.h>
#include <string>
using namespace std;

namespace TCHelper {
string uto_string(uintptr_t x) {
    stringstream ss;
    ss << hex << x;
    return ss.str();
}

uintptr_t string_tohex(const string& str) {
    stringstream ss;
    ss << hex << str;
    uintptr_t res;
    ss >> res;
    return res;
}

vector<uint8_t> splitHex8(const string& str) {
    vector<uint8_t> res;
    stringstream ss(str);
    string item;
    while (getline(ss, item, ' ')) {
        if (item == "?") {
            res.push_back(ModUtils::MASKED);
        } else {
            res.push_back(stoul(item, nullptr, 16));
        }
    }
    return res;
}

string uto_string(uint8_t x) {
    stringstream ss;
    ss << hex << x;
    return ss.str();
}


vector<uint16_t> splitHex(const string& str) {
    vector<uint16_t> res;
	stringstream ss(str);
	string item;
    while (getline(ss, item, ' ')) {
        if (item == "?") {
            res.push_back(ModUtils::MASKED);
        } else {
            res.push_back(stoul(item, nullptr, 16));
        }

	}
	return res;
}
}