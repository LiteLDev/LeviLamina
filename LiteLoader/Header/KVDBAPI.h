#pragma once
#include <Global.h>
#include <functional>
#include <leveldb\c.h>
#include <leveldb\cache.h>
#include <leveldb\db.h>
#include <leveldb\filter_policy.h>
#include <leveldb\iterator.h>
#include <string_view>
#include <unordered_map>
using std::string_view, std::string;

class KVDB {
    leveldb::DB* db;
    leveldb::ReadOptions rdopt;
    leveldb::WriteOptions wropt;
    leveldb::Options options;
    string dpath;

public:
    void __init(const char* path, bool read_cache, int cache_sz, int Bfilter_bit);

    LIAPI ~KVDB();
    KVDB() {
    }
    KVDB(KVDB const&) = delete;
    KVDB& operator=(KVDB const&) = delete;

    LIAPI bool get(string_view key, string& val);
    LIAPI void put(string_view key, string_view val);
    LIAPI void del(string_view key);
    LIAPI void iter(std::function<bool(string_view key, string_view val)> const& fn);
    LIAPI void iter(std::function<bool(string_view key)> const&);
    LIAPI std::string error(leveldb::Status status);
};

LIAPI std::unique_ptr<KVDB> MakeKVDB(const string& path,
                                         bool read_cache = true,
                                         int cache_sz = 0,
                                         int Bfilter_bit = 0);