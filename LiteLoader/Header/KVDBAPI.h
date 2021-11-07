#pragma once
#include <Global.h>
#include <functional>
#include <string_view>
#include <unordered_map>
#include <leveldb/c.h>
#include <leveldb/cache.h>
#include <leveldb/db.h>
#include <leveldb/filter_policy.h>
#include <leveldb/iterator.h>

class KVDB
{
    leveldb::DB *db;
    leveldb::ReadOptions rdopt;
    leveldb::WriteOptions wropt;
    leveldb::Options options;
    leveldb::Status status;
    std::string dbPath;

  public:
    LIAPI explicit KVDB(const std::string &path, bool read_cache = true, int cache_sz = 0, int Bfilter_bit = 0);
    LIAPI ~KVDB();
    KVDB(KVDB const &) = delete;
    KVDB& operator=(KVDB const &) = delete;

    LIAPI bool get(std::string_view key, std::string &val);
    LIAPI bool put(std::string_view key, std::string_view val);
    LIAPI bool remove(std::string_view key);
    LIAPI void iter(std::function<bool(std::string_view key, std::string_view val)> const &fn);
    LIAPI void iter(std::function<bool(std::string_view key)> const &);

    LIAPI bool isValid();
    LIAPI operator bool();
    LIAPI std::string error();


    //For compatibility
    inline bool del(std::string_view key)
    {
        return remove(key);
    }
};




