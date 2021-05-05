#pragma once
#include <string_view>
using std::string_view;
#define BKDR_MUL 131
#define BKDR_ADD 0
typedef unsigned long long CHash;
constexpr CHash do_hash(string_view x) {
    CHash rval = 0;
    for (size_t i = 0; i < x.size(); ++i) {
        rval *= BKDR_MUL;
        rval += x[i];
        rval += BKDR_ADD;
    }
    return rval;
}
constexpr CHash do_hash2(string_view x) {
    // ap hash
    CHash rval = 0;
    for (size_t i = 0; i < x.size(); ++i) {
        if (i & 1) {
            rval ^= (~((rval << 11) ^ x[i] ^ (rval >> 5)));
        } else {
            rval ^= (~((rval << 7) ^ x[i] ^ (rval >> 3)));
        }
    }
    return rval;
}