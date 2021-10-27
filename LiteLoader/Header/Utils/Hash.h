#pragma once
#include <string_view>
using std::string_view;


typedef unsigned long long CHash;

constexpr uint64_t do_hash(const char* x);
constexpr uint64_t do_hash(const char* x, int len);
constexpr uint64_t do_hash2(string_view x);

















constexpr uint64_t do_hash(const char* x) {
    // ap hash
    uint64_t rval = 0;
    for (size_t i = 0; x[i]; ++i) {
        if (i & 1) {
            rval ^= (~((rval << 11) ^ x[i] ^ (rval >> 5)));
        } else {
            rval ^= (~((rval << 7) ^ x[i] ^ (rval >> 3)));
        }
    }
    return rval;
}
constexpr uint64_t do_hash(const char* x, int len) {
    // ap hash
    uint64_t rval = 0;
    for (size_t i = 0; i < len; ++i) {
        if (i & 1) {
            rval ^= (~((rval << 11) ^ x[i] ^ (rval >> 5)));
        } else {
            rval ^= (~((rval << 7) ^ x[i] ^ (rval >> 3)));
        }
    }
    return rval;
}
constexpr uint64_t do_hash2(string_view x) {
    // ap hash
    uint64_t rval = 0;
    for (size_t i = 0; i < x.size(); ++i) {
        if (i & 1) {
            rval ^= (~((rval << 11) ^ x[i] ^ (rval >> 5)));
        } else {
            rval ^= (~((rval << 7) ^ x[i] ^ (rval >> 3)));
        }
    }
    return rval;
}