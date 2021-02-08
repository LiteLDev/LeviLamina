#pragma once
#include<unordered_map>
#include<api/hash.h>
#include<JsonLoader.h>
#include<iostream>
using std::string;
struct LangPack {
	std::unordered_map<CHash, string> TMAP;
#if 0	
static void load(const string& path) {
		config = YAML::LoadFile(path);
		for (const auto& i : config) {
			TMAP[hash(i.first.as<string>())] = i.second.as<string>();
		}
	}
#endif
	const string EMPTY;
	LangPack(const char* fn) {
		try {
			ConfigJReader jr(fn);
			std::unordered_map<string, string> m;
			jr.bind(m);
			load2(m);
		}
		catch (string e) {
			std::cerr << "[ERROR] Json Error " << fn << " " << e << std::endl;
		}
	}
	LangPack(std::unordered_map<string, string>& mp) {
		load2(mp);
	}
	void load2(std::unordered_map<string, string>& mp) {
		for (auto& i : mp) {
			if (TMAP.count(do_hash(i.first))) {
				std::cerr << "[LANGPACK/ERROR] !!! hash coll detected for " << i.first<<std::endl;
			}
			TMAP.emplace(do_hash(i.first), i.second);
		}
	}
	template<CHash HASH>
	const string& trans(string_view x) {
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
};
#define _TRS(x) (LP.trans<do_hash((x))>(x))
#define _TR(x) (LP.trans<do_hash((x))>(x).c_str())