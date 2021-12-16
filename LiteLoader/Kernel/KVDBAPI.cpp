#include <Global.h>
#include <KVDBAPI.h>
#include <LoggerAPI.h>
#include <Utils/FileHelper.h>

Logger levelDBLogger("LevelDB");

std::unique_ptr<KVDB> KVDB::create(const string& path, bool read_cache, int cache_sz,int Bfilter_bit)
{
    CreateDirs(path);
    auto db = std::make_unique<KVDB>();
    db->__init(path.c_str(), read_cache, cache_sz, Bfilter_bit);
    return db;
}

void KVDB::__init(const char* path, bool read_cache, int cache_sz, int Bfilter_bit)
{
    rdopt = leveldb::ReadOptions();
    wropt = leveldb::WriteOptions();
    options = leveldb::Options();
    rdopt.fill_cache = read_cache;
    rdopt.verify_checksums = false;
    wropt.sync = false;
    if (cache_sz)
    {
        options.block_cache = leveldb::NewLRUCache(cache_sz);
    }
    options.reuse_logs = true; // WARN:EXPERIMENTAL
    if (Bfilter_bit)
        options.filter_policy = leveldb::NewBloomFilterPolicy(Bfilter_bit);
    options.create_if_missing = true;
    dbpath = path;
    status = leveldb::DB::Open(options, path, &db);
    if (!status.ok())
    {
        levelDBLogger.error("Fail to load KVDB <{}>", path);
        auto output = error(status);
        output.erase(std::remove(output.begin(), output.end(), '\n'), output.end());
        levelDBLogger.error("{}", output);
    }
}

KVDB::~KVDB()
{
    if (options.filter_policy)
        delete options.filter_policy;
    delete db;
}

bool KVDB::get(string_view key, string& val)
{
    auto s = db->Get(rdopt, leveldb::Slice(key.data(), key.size()), &val);
    if (!s.ok())
    {
        if (s.IsNotFound())
            return false;
        levelDBLogger.error("[DB Error]get %s %s\n", dbpath.c_str(), s.ToString().c_str());
    }
    return true;
}

bool KVDB::set(string_view key, string_view val)
{
    // WATCH_ME("put kvdb " + dpath);
    auto s = db->Put(wropt, leveldb::Slice(key.data(), key.size()),
                     leveldb::Slice(val.data(), val.size()));
    if (!s.ok())
    {
        levelDBLogger.error("[DB Error]put %s %s\n", dbpath.c_str(), s.ToString().c_str());
    }
    return true;
}

bool KVDB::del(string_view key)
{
    // WATCH_ME("del kvdb " + dpath);
    auto s = db->Delete(wropt, leveldb::Slice(key.data(), key.size()));
    if (!s.ok())
    {
        levelDBLogger.error("del %s %s\n", dbpath.c_str(), s.ToString().c_str());
    }
    return true;
}

void KVDB::iter(std::function<bool(string_view key)> const& fn)
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

void KVDB::iter(std::function<bool(string_view key, string_view val)> const& fn)
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

vector<string> KVDB::getAllKeys() {
    vector<string> keyList;
    iter([&keyList](const string_view& key)
        {
            keyList.push_back(string(key));
            return true;
        });
    return keyList;
}

bool KVDB::isValid()
{
    return status.ok();
}

KVDB::operator bool()
{
    return isValid();
}


LIAPI std::string KVDB::error(leveldb::Status status)
{
    return status.ToString();
}