#pragma once
#include <liteloader.h>
#include <functional>
#include <string_view>
#include <unordered_map>
#ifdef LITELOADER_EXPORTS
#    include <leveldb\c.h>
#    include <leveldb\cache.h>
#    include <leveldb\db.h>
#    include <leveldb\filter_policy.h>
#    include <leveldb\iterator.h>
#endif
using std::string_view, std::string;
class KVDBImpl {
#ifdef LITELOADER_EXPORTS
    leveldb::DB *db;
    leveldb::ReadOptions rdopt;
    leveldb::WriteOptions wropt;
    leveldb::Options options;
    string dpath;
#else
#endif
  public:
#ifdef LITELOADER_EXPORTS
    void __init(const char *path, bool read_cache, int cache_sz, int Bfilter_bit);
#endif
    LIAPI ~KVDBImpl();
    KVDBImpl() {}
    KVDBImpl(KVDBImpl const &) = delete;
    KVDBImpl &operator=(KVDBImpl const &) = delete;

    LIAPI bool get(string_view key, string &val);
    LIAPI void put(string_view key, string_view val);
    LIAPI void del(string_view key);
    LIAPI void iter(std::function<bool(string_view key, string_view val)> const &fn);
    LIAPI void iter(std::function<bool(string_view key)> const &);
};
LIAPI std::unique_ptr<KVDBImpl> MakeKVDB(const string &path,
                                         bool read_cache = true,
                                         int cache_sz    = 0,
                                         int Bfilter_bit = 0);