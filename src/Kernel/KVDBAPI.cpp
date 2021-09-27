#include <Utils/KVDB.h>
#include <lbpch.h>

LIAPI std::unique_ptr<KVDBImpl> MakeKVDB(const std::string &path,
                                         bool read_cache,
                                         int cache_sz,
                                         int Bfilter_bit) {
    auto db = make_unique<KVDBImpl>();
    db->__init(path.c_str(), read_cache, cache_sz, Bfilter_bit);
    return db;
}
void KVDBImpl::__init(const char *path, bool read_cache, int cache_sz, int Bfilter_bit) {
    rdopt                  = leveldb::ReadOptions();
    wropt                  = leveldb::WriteOptions();
    options                = leveldb::Options();
    rdopt.fill_cache       = read_cache;
    rdopt.verify_checksums = false;
    wropt.sync             = false;
    if (cache_sz) {
        options.block_cache = leveldb::NewLRUCache(cache_sz);
    }
    options.reuse_logs = true;  // WARN:EXPERIMENTAL
    if (Bfilter_bit)
        options.filter_policy = leveldb::NewBloomFilterPolicy(Bfilter_bit);
    options.create_if_missing = true;
    dpath                     = path;
    leveldb::Status status    = leveldb::DB::Open(options, path, &db);
    if (!status.ok()) {
        printf("cannot load %s reason: %s", path, status.ToString().c_str());
        std::this_thread::sleep_for(std::chrono::seconds(10));
        throw "Cannot open kvdb!";
    }
}
KVDBImpl::~KVDBImpl() {
    if (options.filter_policy)
        delete options.filter_policy;
    delete db;
}
bool KVDBImpl::get(std::string_view key, std::string& val) {
    auto s = db->Get(rdopt, leveldb::Slice(key.data(), key.size()), &val);
    if (!s.ok()) {
        if (s.IsNotFound())
            return false;
        printf("[DB Error]get %s %s\n", dpath.c_str(), s.ToString().c_str());
    }
    return true;
}
void KVDBImpl::put(std::string_view key, std::string_view val) {
    // WATCH_ME("put kvdb " + dpath);
    auto s = db->Put(wropt, leveldb::Slice(key.data(), key.size()),
                     leveldb::Slice(val.data(), val.size()));
    if (!s.ok()) {
        printf("[DB Error]put %s %s\n", dpath.c_str(), s.ToString().c_str());
    }
}
void KVDBImpl::del(std::string_view key) {
    // WATCH_ME("del kvdb " + dpath);
    auto s = db->Delete(wropt, leveldb::Slice(key.data(), key.size()));
    if (!s.ok()) {
        printf("[DB Error]del %s %s\n", dpath.c_str(), s.ToString().c_str());
    }
}
void KVDBImpl::iter(std::function<bool(std::string_view key)> const& fn) {
    leveldb::Iterator *it = db->NewIterator(rdopt);
    for (it->SeekToFirst(); it->Valid(); it->Next()) {
        auto k = it->key();
        if (!fn({k.data(), k.size()}))
            break;
    }
    delete it;
}
void KVDBImpl::iter(std::function<bool(std::string_view key, std::string_view val)> const& fn) {
    leveldb::Iterator *it = db->NewIterator(rdopt);
    for (it->SeekToFirst(); it->Valid(); it->Next()) {
        auto k = it->key();
        auto v = it->value();
        if (!fn({k.data(), k.size()}, {v.data(), v.size()}))
            break;
    }
    delete it;
}