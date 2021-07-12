#pragma once
#include <iostream>
#include <unordered_map>
using std::string;

#define DEFINE_LANG_PACK LangPack LangP;
#define _TRS(x) (LangP.trans<do_hash((x))>(x))
#define _TR(x) (LangP.trans<do_hash((x))>(x).c_str())

struct LangPack
{
    std::unordered_map<CHash, string> TMAP;
    const string EMPTY;
    string path;

    LangPack() = default;
    LangPack(const string &fn);
    LangPack(std::unordered_map<string, string>& mp);

    void load(const string &fn);
    void load(std::unordered_map<string, string>& mp);
    
    template <CHash HASH>
    const string& trans(string_view x);
};



#ifdef LP
#    pragma message( \
        "Warn: Please Consider Using LangPack Instead of LP Cause windows.h has already define it")
#endif