#pragma once
#include <leveldb/c.h>
#include <leveldb/cache.h>
#include <leveldb/db.h>
#include <leveldb/filter_policy.h>
#include <leveldb/iterator.h>
#include "liteloader/api/Global.h"
#include <functional>
#include <string_view>
#include <unordered_map>

class KVDB {
    leveldb::DB* db;
    leveldb::ReadOptions rdopt;
    leveldb::WriteOptions wropt;
    leveldb::Options options;
    leveldb::Status status;
    std::string dbpath;

    void _init(const char* path, bool create, bool read_cache, int cache_sz, int Bfilter_bit);

public:
    LLAPI static std::unique_ptr<KVDB> create(const std::string& path, bool read_cache = true, int cache_sz = 0, int Bfilter_bit = 0);
    LLAPI static std::unique_ptr<KVDB> open(const std::string& path, bool create = true, bool read_cache = true, int cache_sz = 0, int Bfilter_bit = 0);
    LLAPI ~KVDB();

    KVDB() = default;
    KVDB(KVDB const&) = delete;
    KVDB& operator=(KVDB const&) = delete;

    LLAPI bool get(std::string_view key, std::string& val);
    LLAPI std::optional<std::string> get(std::string_view key);
    LLAPI bool set(std::string_view key, std::string_view val);
    LLAPI bool del(std::string_view key);
    LLAPI void iter(std::function<bool(std::string_view key, std::string_view val)> const& fn);
    LLAPI void iter(std::function<bool(std::string_view key)> const&);
    LLAPI std::string error(leveldb::Status status);
    LLAPI std::vector<std::string> getAllKeys();
    LLAPI bool isValid();
    LLAPI operator bool();

    // For Compatibility
    inline bool put(std::string_view key, std::string_view val) {
        return set(key, val);
    }
};