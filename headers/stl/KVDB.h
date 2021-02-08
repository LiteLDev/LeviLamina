#pragma once
#include <api/lightbase.h>
#include <functional>
#include <string_view>
#include <unordered_map>
#ifdef LIGHTBASE_EXPORTS
#include <leveldb\db.h>
#include <leveldb\cache.h>
#include <leveldb\c.h>
#include <leveldb\iterator.h>
#include <leveldb\filter_policy.h>
#endif
using std::string_view, std::string;
class KVDBImpl {
#ifdef LIGHTBASE_EXPORTS
	leveldb::DB* db;
	leveldb::ReadOptions rdopt;
	leveldb::WriteOptions wropt;
	leveldb::Options options;
	string dpath;
#else
#endif
public:
	#ifdef LIGHTBASE_EXPORTS
	void __init(const char* path, bool read_cache, int cache_sz, int Bfilter_bit);
	#endif
	LIGHTBASE_API ~KVDBImpl();
	KVDBImpl() {}
	KVDBImpl(KVDBImpl const&) = delete;
	KVDBImpl& operator = (KVDBImpl const&) = delete;
	
	LIGHTBASE_API bool get(string_view key, string& val);
	LIGHTBASE_API void put(string_view key, string_view val);
	LIGHTBASE_API void del(string_view key);
	LIGHTBASE_API void iter(std::function<bool(string_view key, string_view val)> const& fn);
	LIGHTBASE_API void iter(std::function<bool(string_view key)> const&);
};
LIGHTBASE_API std::unique_ptr <KVDBImpl> MakeKVDB(const string& path, bool read_cache = true, int cache_sz = 0, int Bfilter_bit = 0);