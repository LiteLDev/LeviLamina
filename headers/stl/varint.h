#pragma once
#include "Bstream.h"
template <typename T>
struct VarInts {
    T v;
    operator T() { return v; }
    VarInts() {}
    VarInts(T x) { v = x; }
    template <typename _TP>
    void pack(WBStreamImpl<_TP> &ws) const {
        unsigned char buf[16];
        int ptr = 0;
        T enc   = v;
        do {
            buf[ptr++] = enc & 0x7f;
            enc >>= 7;
        } while (enc);
        for (int i = 0; i < ptr - 1; ++i) {
            buf[i] |= 0x80;
        }
        ws.write(buf, ptr);
    }
    void unpack(RBStream &rs) {
        unsigned char buf[16];
        v       = 0;
        int ptr = 0;
        for (; ptr < 16; ++ptr) {
            rs.apply(buf[ptr]);
            if (!(buf[ptr] & 0x80)) {
                ++ptr;
                break;
            }
            buf[ptr] &= 0x7f;
        }
        for (ptr = ptr - 1; ptr >= 0; --ptr) {
            v <<= 7;
            v |= buf[ptr];
        }
    }
};
using VarUInt  = VarInts<unsigned int>;
using VarULong = VarInts<unsigned long long>;
using VarUShort = VarInts<unsigned short>;

struct MCString {
    string_view view;
    MCString() {}
    MCString(string_view sv) : view(sv) {}
    template <typename T>
    void pack(T &ws) const {
        ws.apply(VarUInt((unsigned int)view.size()));
        ws.write(view.data(), view.size());
    }
    void unpack(RBStream &rs) {
        VarUInt sz;
        rs.apply(sz);
        view = string_view((const char *)rs.data, sz.v);
        rs.data += sz.v;
    }
};