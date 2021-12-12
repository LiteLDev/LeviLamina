#include <KVDBAPI.h>
#include <LoggerAPI.h>
#include <memory>
#include <thread>
using namespace std;

Logger levelDBLogger("LevelDB");

KVDB::KVDB(const string& path, bool read_cache, int cache_sz, int Bfilter_bit)
{
    rdopt = leveldb::ReadOptions();
    wropt = leveldb::WriteOptions();
    options = leveldb::Options();

    rdopt.fill_cache = read_cache;
    rdopt.verify_checksums = false;
    wropt.sync = false;

    if (cache_sz)
        options.block_cache = leveldb::NewLRUCache(cache_sz);
    if (Bfilter_bit)
        options.filter_policy = leveldb::NewBloomFilterPolicy(Bfilter_bit);
    options.reuse_logs = true; // WARN:EXPERIMENTAL
    options.create_if_missing = true;

    dbPath = path;
    status = leveldb::DB::Open(options, path, &db);
    if (!status.ok())
    {
        levelDBLogger.error("Fail to load KVDB <{}>", path);
        levelDBLogger.error("{}", error());
    }
}

KVDB::~KVDB()
{
    if (options.filter_policy)
        delete options.filter_policy;
    delete db;
}

bool KVDB::get(std::string_view key, std::string& val)
{
    auto s = db->Get(rdopt, leveldb::Slice(key.data(), key.size()), &val);
    return s.ok();
}

bool KVDB::put(std::string_view key, std::string_view val)
{
    // WATCH_ME("put kvdb " + dpath);
    auto s = db->Put(wropt, leveldb::Slice(key.data(), key.size()),
                     leveldb::Slice(val.data(), val.size()));
    return s.ok();
}

bool KVDB::remove(std::string_view key)
{
    // WATCH_ME("del kvdb " + dpath);
    auto s = db->Delete(wropt, leveldb::Slice(key.data(), key.size()));
    return s.ok();
}

void KVDB::iter(std::function<bool(std::string_view key)> const& fn)
{
    leveldb::Iterator* it = db->NewIterator(rdopt);
    for (it->SeekToFirst(); it->Valid(); it->Next())
    {
        auto k = it->key();
        if (!fn({k.data(), k.size()}))
            break;
    }
    delete it;
}

void KVDB::iter(std::function<bool(std::string_view key, std::string_view val)> const& fn)
{
    leveldb::Iterator* it = db->NewIterator(rdopt);
    for (it->SeekToFirst(); it->Valid(); it->Next())
    {
        auto k = it->key();
        auto v = it->value();
        if (!fn({k.data(), k.size()}, {v.data(), v.size()}))
            break;
    }
    delete it;
}

LIAPI bool KVDB::isValid()
{
    return status.ok();
}

LIAPI KVDB::operator bool()
{
    return isValid();
}

LIAPI std::string KVDB::error()
{
    return status.ToString();
}