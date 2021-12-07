#include <Global.h>
#include <KVDBAPI.h>
#include <LoggerAPI.h>
LIAPI std::unique_ptr<KVDB> MakeKVDB(const string& path,
                                         bool read_cache,
                                         int cache_sz,
                                         int Bfilter_bit) {
    auto db = std::make_unique<KVDB>();
    db->__init(path.c_str(), read_cache, cache_sz, Bfilter_bit);
    return db;
}
void KVDB::__init(const char* path, bool read_cache, int cache_sz, int Bfilter_bit) {
    rdopt = leveldb::ReadOptions();
    wropt = leveldb::WriteOptions();
    options = leveldb::Options();
    rdopt.fill_cache = read_cache;
    rdopt.verify_checksums = false;
    wropt.sync = false;
    if (cache_sz) {
        options.block_cache = leveldb::NewLRUCache(cache_sz);
    }
    options.reuse_logs = true; // WARN:EXPERIMENTAL
    if (Bfilter_bit)
        options.filter_policy = leveldb::NewBloomFilterPolicy(Bfilter_bit);
    options.create_if_missing = true;
    dpath = path;
    leveldb::Status status = leveldb::DB::Open(options, path, &db);
    if (!status.ok()) {

        Logger::setTitle("LevelDB");
        Logger::Error("Fail to load KVDB <{}>", path);
        auto output = error(status);
        output.erase(std::remove(output.begin(), output.end(), '\n'), output.end());
        Logger::Error("{}", output);
        Logger::setTitle("LiteLoader");
    }
}
KVDB::~KVDB() {
    if (options.filter_policy)
        delete options.filter_policy;
    delete db;
}
bool KVDB::get(string_view key, string& val) {
    auto s = db->Get(rdopt, leveldb::Slice(key.data(), key.size()), &val);
    if (!s.ok()) {
        if (s.IsNotFound())
            return false;
        Logger::setTitle("LevelDB");
        Logger::Error("[DB Error]get %s %s\n", dpath.c_str(), s.ToString().c_str());
        Logger::setTitle("LiteLoader");
    }
    return true;
}
void KVDB::put(string_view key, string_view val) {
    // WATCH_ME("put kvdb " + dpath);
    auto s = db->Put(wropt, leveldb::Slice(key.data(), key.size()),
                     leveldb::Slice(val.data(), val.size()));
    if (!s.ok()) {
        Logger::setTitle("LevelDB");
        Logger::Error("[DB Error]put %s %s\n", dpath.c_str(), s.ToString().c_str());
        Logger::setTitle("LiteLoader");
    }
}
void KVDB::del(string_view key) {
    // WATCH_ME("del kvdb " + dpath);
    auto s = db->Delete(wropt, leveldb::Slice(key.data(), key.size()));
    if (!s.ok()) {
        Logger::setTitle("LevelDB");
        Logger::Error("del %s %s\n", dpath.c_str(), s.ToString().c_str());
        Logger::setTitle("LiteLoader");
    }
}
void KVDB::iter(std::function<bool(string_view key)> const& fn) {
    leveldb::Iterator* it = db->NewIterator(rdopt);
    for (it->SeekToFirst(); it->Valid(); it->Next()) {
        auto k = it->key();
        if (!fn({k.data(), k.size()}))
            break;
    }
    delete it;
}
void KVDB::iter(std::function<bool(string_view key, string_view val)> const& fn) {
    leveldb::Iterator* it = db->NewIterator(rdopt);
    for (it->SeekToFirst(); it->Valid(); it->Next()) {
        auto k = it->key();
        auto v = it->value();
        if (!fn({k.data(), k.size()}, {v.data(), v.size()}))
            break;
    }
    delete it;
}


LIAPI std::string KVDB::error(leveldb::Status status) {
    return status.ToString();
}
