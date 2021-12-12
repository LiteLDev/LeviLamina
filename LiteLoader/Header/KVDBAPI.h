#pragma once
#include "Global.h"
#include "third-party/leveldb/c.h"
#include "third-party/leveldb/cache.h"
#include "third-party/leveldb/db.h"
#include "third-party/leveldb/filter_policy.h"
#include "third-party/leveldb/iterator.h"
#include <functional>
#include <string_view>
#include <unordered_map>

class KVDB
{
    leveldb::DB* db;
    leveldb::ReadOptions rdopt;
    leveldb::WriteOptions wropt;
    leveldb::Options options;
    leveldb::Status status;
    std::string dbPath;

public:
    LIAPI explicit KVDB(const std::string& path, bool read_cache = true, int cache_sz = 0, int Bfilter_bit = 0);
    LIAPI ~KVDB();
    KVDB(KVDB const&) = delete;
    KVDB& operator=(KVDB const&) = delete;

    LIAPI bool get(std::string_view key, std::string& val);
    LIAPI bool set(std::string_view key, std::string_view val);
    LIAPI bool remove(std::string_view key);
    LIAPI void iter(std::function<bool(std::string_view key, std::string_view val)> const& fn);
    LIAPI void iter(std::function<bool(std::string_view key)> const&);
    LIAPI std::vector<std::string> getAllKeys();

    LIAPI bool isValid();
    LIAPI operator bool();
    LIAPI std::string error();
};
