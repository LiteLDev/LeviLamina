#include <lbpch.h>
#include <stl/LangPack.h>
#include <JsonLoader.h>
#include <loader/hash.h>

LangPack::LangPack(const char* fn)
{
    try {
        ConfigJReader jr(fn);
        std::unordered_map<string, string> m;
        jr.bind(m);
        load(m);
    }
    catch (string e) {
        std::cerr << "[ERROR] Json Error " << fn << " " << e << std::endl;
    }
}

void LangPack::load(std::unordered_map<string, string>& mp)
{
    for (auto& i : mp) {
        if (TMAP.count(do_hash(i.first.c_str()))) {
            std::cerr << "[LANGPACK/ERROR] !!! hash coll detected for " << i.first << std::endl;
        }
        TMAP.emplace(do_hash(i.first.c_str()), i.second);
    }
}

LangPack::LangPack(std::unordered_map<string, string>& mp)
{
    load(mp);
}

template <CHash HASH>
const string& LangPack::trans(string_view x)
{
    static string* cache = NULL;
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