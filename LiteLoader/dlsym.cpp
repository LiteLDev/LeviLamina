//#include<lbpch.h>
#include <detours/detours.h>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <list>
#include <string>
#include <string_view>
#include <thread>
#include <unordered_map>
#include <vector>
#include "framework.h"
#include "pch.h"
using std::list;
using std::string, std::string_view;
using std::unordered_map, std::vector;

typedef unsigned long long hash_t;
hash_t BKDR(const char *_ch, size_t sz) {
    unsigned char *ch = (unsigned char *)_ch;
    hash_t rv         = 0;
    for (int i = 0; i < sz; ++i) {
        rv = rv * 127 - 36 + ch[i];
    }
    return rv;
}
struct hashval {
    string key;
    hash_t hash;
    string data;
    hashval() { hash = 0; }
    hashval(string &&a, hash_t b, string &&c)
        : key(std::forward<string>(a)), hash(b), data(std::forward<string>(c)) {}
};
struct RoDB_R {
    std::ifstream fp;
    unsigned int cnt_bucket;
    unsigned int bucket[4096];  // offset
    unsigned int data_off;
    RoDB_R(const char *path) {
        fp.open(path, std::ios::binary);
#define ppch(x) ((char *)&x)
        fp.read(ppch(cnt_bucket), 4);
        fp.read(ppch(data_off), 4);
        fp.read(ppch(bucket[0]), 4 * (size_t)cnt_bucket);
    }
    void read(void *buf, unsigned int off, size_t sz) {
        fp.seekg(std::streampos(off));
        fp.read((char *)buf, sz);
    }
    void getstr(string &buf, unsigned int off) {
        if (off != 0) {
            fp.seekg(std::streampos(off));
        }
        char ch;
        while ((ch = fp.get()) != 0)
            buf.append(1, ch);
    }
    string val2key(unsigned int rva) {
        fp.seekg(std::streampos(data_off));
        string name;
        name.reserve(8192);
        while (!fp.eof()) {
            int ch = fp.get();
            if (ch == 0) {
                unsigned int dst;
                fp.read((char *)&dst, 4);
                if (dst == rva) {
                    return name;
                } else {
                    name.clear();
                }
            } else {
                name.push_back(ch);
            }
        }
        return "(nil)";
    }
    bool _cmp(string_view key) {
        for (uint32_t i = 0; i < key.size(); ++i) {
            int ch = fp.get();
            if (ch != key[i]) {
                return false;
            }
        }
        return fp.get() == 0;
    }
    unsigned int get(string_view key) {  // return file offset
        auto hash  = BKDR(key.data(), key.size());
        auto bkoff = bucket[hash % cnt_bucket];
        fp.seekg(std::streampos(bkoff));
        vector<unsigned int> tolookup;
        tolookup.reserve(512);
        while (1) {
            hash_t hs;
            unsigned int off;
            fp.read(ppch(hs), 8);
            fp.read(ppch(off), 4);
            if (off == 0xffffffff)
                break;
            if (hs == hash)
                tolookup.push_back(off + data_off);
            /*
            if (hs == hash) {
                    off += data_off;
                    auto pos = fp.tellg();
                    string key_now;
                    getstr(key_now, off);
                    if (key == key_now) {
                            return off + (unsigned int)key.size() + 1;
                    }
                    fp.seekg(pos);
            }*/
        }
        for (auto off : tolookup) {
            fp.seekg({off});
            if (_cmp(key)) {
                return off + (uint32_t)key.size() + 1;
            }
        }
        return 0;
    }
};
static RoDB_R *pdb;
static uintptr_t BaseAdr;
string ptr2name(void *ptr) {
    unsigned int va = uint32_t(((uintptr_t)ptr - BaseAdr));
    return pdb->val2key(va);
}
void *dlsym_real(const char *x) {
    if (pdb == nullptr) {
        if (!std::filesystem::exists("bedrock_server.symdb")) {
            printf("SymDB not found\ntry to run RoDB.exe\n");
            std::this_thread::sleep_for(std::chrono::seconds(10));
            exit(1);
        }
        pdb     = new RoDB_R("bedrock_server.symdb");
        BaseAdr = (uintptr_t)GetModuleHandle(NULL);
        static_assert(sizeof(GetModuleHandle(NULL)) == 8);
    }
    auto rv = pdb->get(x);
    if (!rv)
        return nullptr;
    unsigned int rva;
    pdb->read(&rva, rv, 4);
    return (void *)(BaseAdr + rva);
}
inline static void HookFunction__begin() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
}
inline static long HookFunction__finalize() {
    return DetourTransactionCommit();
}
static inline int realHook(void *oldfunc, void **poutold, void *newfunc) {
    void *target = oldfunc;
    HookFunction__begin();
    int rv = DetourAttach(&target, newfunc);
    HookFunction__finalize();
    *poutold = target;
    return rv;
}
int HookFunction(void *oldfunc, void **poutold, void *newfunc) {
    static unordered_map<void *, void **> ptr_pori;
    auto it = ptr_pori.find(oldfunc);
    if (it == ptr_pori.end()) {
        int rv = realHook(oldfunc, poutold, newfunc);
        if (rv != 0)
            return rv;
        ptr_pori[oldfunc] = poutold;
        return 0;
    } else {
        *poutold    = *it->second;
        *it->second = newfunc;
        return 0;
    }
}