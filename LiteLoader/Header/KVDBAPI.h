#pragma once
#include "third-party/leveldb/c.h"
#include "third-party/leveldb/cache.h"
#include "third-party/leveldb/db.h"
#include "third-party/leveldb/filter_policy.h"
#include "third-party/leveldb/iterator.h"
#include <Global.h>
#include <functional>
#include <string_view>
#include <unordered_map>
using std::string_view, std::string;

class KVDB
{
    leveldb::DB* db;
    leveldb::ReadOptions rdopt;
    leveldb::WriteOptions wropt;
    leveldb::Options options;
    leveldb::Status status;
    string dbpath;

    void __init(const char* path, bool read_cache, int cache_sz, int Bfilter_bit);

public:

    LIAPI static std::unique_ptr<KVDB> create(const std::string& path,bool read_cache = true,int cache_sz = 0,int Bfilter_bit = 0);
    LIAPI ~KVDB();
    
    KVDB() = default;
    KVDB(KVDB const&) = delete;
    KVDB& operator=(KVDB const&) = delete;

    LIAPI bool get(std::string_view key, std::string& val);
    LIAPI bool set(std::string_view key, std::string_view val);
    LIAPI bool del(std::string_view key);
    LIAPI void iter(std::function<bool(std::string_view key, std::string_view val)> const& fn);
    LIAPI void iter(std::function<bool(std::string_view key)> const&);
    LIAPI std::string error(leveldb::Status status);
    LIAPI std::vector<std::string> getAllKeys();
    LIAPI bool isValid();
    LIAPI operator bool();

    //For Compatibility
    inline bool put(std::string_view key, std::string_view val) { return set(key, val); }
};