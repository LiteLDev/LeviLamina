#include "llapi/Global.h"
#include "llapi/KVDBAPI.h"
#include "llapi/LoggerAPI.h"
#include "llapi/utils/FileHelper.h"
#include "llapi/I18nAPI.h"

Logger levelDBLogger("LevelDB");

std::unique_ptr<KVDB> KVDB::create(const std::string& path, bool read_cache, int cache_sz, int Bfilter_bit) {
    CreateDirs(path);
    auto db = std::make_unique<KVDB>();
    db->_init(path.c_str(), true, read_cache, cache_sz, Bfilter_bit);
    return db;
}
std::unique_ptr<KVDB> KVDB::open(const std::string& path, bool create, bool read_cache, int cache_sz, int Bfilter_bit) {
    CreateDirs(path);
    auto db = std::make_unique<KVDB>();
    db->_init(path.c_str(), create, read_cache, cache_sz, Bfilter_bit);
    return db;
}

void KVDB::_init(const char* path, bool create, bool read_cache, int cache_sz, int Bfilter_bit) {
    rdopt                  = leveldb::ReadOptions();
    wropt                  = leveldb::WriteOptions();
    options                = leveldb::Options();
    rdopt.fill_cache       = read_cache;
    rdopt.verify_checksums = false;
    wropt.sync             = false;
    if (cache_sz) {
        options.block_cache = leveldb::NewLRUCache(cache_sz);
    }
    options.reuse_logs = true; // WARN:EXPERIMENTAL
    if (Bfilter_bit)
        options.filter_policy = leveldb::NewBloomFilterPolicy(Bfilter_bit);
    options.create_if_missing = create;
    dbpath                    = path;
    status                    = leveldb::DB::Open(options, path, &db);
    if (!status.ok()) {
        levelDBLogger.error("Fail to load KVDB <{}>", path);
        auto output = error(status);
        output.erase(std::remove(output.begin(), output.end(), '\n'), output.end());
        levelDBLogger.error("{}", TextEncoding::toUTF8(output));
    }
}

KVDB::~KVDB() {
    if (options.filter_policy)
        delete options.filter_policy;
    delete db;
}

bool KVDB::get(std::string_view key, std::string& val) {
    auto s = db->Get(rdopt, leveldb::Slice(key.data(), key.size()), &val);
    if (!s.ok()) {
        if (s.IsNotFound())
            return false;
        levelDBLogger.error("get %s %s\n", dbpath.c_str(), s.ToString().c_str());
    }
    return true;
}
std::optional<std::string> KVDB::get(std::string_view key) {
    std::string result;
    auto        s = db->Get(rdopt, leveldb::Slice(key.data(), key.size()), &result);
    if (!s.ok()) {
        return std::nullopt;
    }
    return result;
}

bool KVDB::set(std::string_view key, std::string_view val) {
    auto s = db->Put(wropt, leveldb::Slice(key.data(), key.size()), leveldb::Slice(val.data(), val.size()));
    if (!s.ok()) {
        levelDBLogger.error("put %s %s\n", dbpath.c_str(), s.ToString().c_str());
    }
    return true;
}

bool KVDB::del(std::string_view key) {
    auto s = db->Delete(wropt, leveldb::Slice(key.data(), key.size()));
    if (!s.ok()) {
        levelDBLogger.error("del %s %s\n", dbpath.c_str(), s.ToString().c_str());
    }
    return true;
}

void KVDB::iter(std::function<bool(std::string_view key)> const& fn) {
    leveldb::Iterator* it = db->NewIterator(rdopt);
    for (it->SeekToFirst(); it->Valid(); it->Next()) {
        auto k = it->key();
        if (!fn({k.data(), k.size()}))
            break;
    }
    delete it;
}

void KVDB::iter(std::function<bool(std::string_view key, std::string_view val)> const& fn) {
    leveldb::Iterator* it = db->NewIterator(rdopt);
    for (it->SeekToFirst(); it->Valid(); it->Next()) {
        auto k = it->key();
        auto v = it->value();
        if (!fn({k.data(), k.size()}, {v.data(), v.size()}))
            break;
    }
    delete it;
}

std::vector<std::string> KVDB::getAllKeys() {
    std::vector<std::string> keyList;
    iter([&keyList](const std::string_view& key) {
        keyList.push_back(std::string(key));
        return true;
    });
    return keyList;
}

bool KVDB::isValid() { return status.ok(); }

KVDB::operator bool() { return isValid(); }

LLAPI std::string KVDB::error(leveldb::Status status) { return status.ToString(); }
