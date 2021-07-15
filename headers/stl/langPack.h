#pragma once
#pragma warning(disable : 4251)
#include <JsonLoader.h>
#include <loader/hash.h>
#include <iostream>
#include <unordered_map>
using std::string;

#define DEFINE_LANG_PACK LangPack LangP;
#define _TRS(x) (LangP.trans<do_hash((x))>(x))
#define _TR(x) (LangP.trans<do_hash((x))>(x).c_str())

struct LangPack {
    std::unordered_map<CHash, string> TMAP;
    const string EMPTY;
    string path;

    LangPack() = default;
    LangPack(const string &fn) { load(fn); }
    LangPack(std::unordered_map<string, string> &mp) { load(mp); }

    void load(std::unordered_map<string, string> &mp) {
        TMAP.clear();
        for (auto &i : mp) {
            if (TMAP.count(do_hash(i.first.c_str()))) {
                std::cerr << "[LANGPACK/ERROR] !!! hash coll detected for " << i.first << std::endl;
            }
            TMAP.emplace(do_hash(i.first.c_str()), i.second);
        }
    }

    void load(const string &fn) {
        try {
            path = fn;
            ConfigJReader jr(path.c_str());
            std::unordered_map<string, string> m;
            jr.bind(m);
            load(m);
        } catch (string e) {
            std::cerr << "[ERROR] Json Error " << fn << " " << e << std::endl;
        }
    }

    template <CHash HASH>
    const string &trans(string_view x) {
        static string *cache = NULL;
        if (cache == NULL) {
            auto it = TMAP.find(HASH);
            if (it == TMAP.end()) {
                std::cerr << "[LANGPACK/ERROR] Cannot find trans for " << x << "!!!\n";
                return EMPTY;
            }
            cache = &TMAP[HASH];
        }
        return *cache;
    }
};

#ifdef LP
#    pragma message( \
        "Warn: Please Consider Using LangPack Instead of LP Cause windows.h has already define it")
#endif
