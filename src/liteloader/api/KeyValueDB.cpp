#include "liteloader/api/KeyValueDB.h"

#include "liteloader/api/I18nAPI.h"
#include "liteloader/api/LoggerAPI.h"
#include "liteloader/api/utils/FileHelper.h"
#include <optional>

using namespace ll;

Logger levelDBLogger("LevelDB");

class KeyValueDB::KeyValueDBImpl {
public:
    std::unique_ptr<leveldb::DB> db;
    leveldb::ReadOptions         rdopt;
    leveldb::WriteOptions        wropt;
    leveldb::Options             options;
    leveldb::Status              status;
    std::string                  dbpath;

    inline KeyValueDBImpl(const char* path, bool create, bool read_cache, int cache_sz, int Bfilter_bit) {
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
        leveldb::DB* database{};
        status = leveldb::DB::Open(options, path, &database);
        db.reset(database);
        if (!status.ok()) {
            levelDBLogger.error("Fail to load KeyValueDB <{}>", path);
            auto output = status.ToString();
            output.erase(std::remove(output.begin(), output.end(), '\n'), output.end());
            levelDBLogger.error("{}", TextEncoding::toUTF8(output));
        }
    }

    inline ~KeyValueDBImpl() { delete options.filter_policy; }

    [[nodiscard]] inline std::optional<std::string> get(std::string_view key) const {
        std::string result;
        auto        s = db->Get(rdopt, leveldb::Slice(key.data(), key.size()), &result);
        if (!s.ok()) {
            return std::nullopt;
        }
        return result;
    }

    [[nodiscard]] inline bool set(std::string_view key, std::string_view val) const {
        auto s = db->Put(wropt, leveldb::Slice(key.data(), key.size()), leveldb::Slice(val.data(), val.size()));
        if (!s.ok()) {
            levelDBLogger.error("put {} {}", dbpath, s.ToString());
        }
        return true;
    }

    [[nodiscard]] inline bool del(std::string_view key) const {
        auto s = db->Delete(wropt, leveldb::Slice(key.data(), key.size()));
        if (!s.ok()) {
            levelDBLogger.error("del {} {}", dbpath, s.ToString());
        }
        return true;
    }

    inline void iter(std::function<bool(std::string_view key, std::string_view val)> const& fn) const {
        leveldb::Iterator* it = db->NewIterator(rdopt);
        for (it->SeekToFirst(); it->Valid(); it->Next()) {
            auto k = it->key();
            auto v = it->value();
            if (!fn({k.data(), k.size()}, {v.data(), v.size()}))
                break;
        }
        delete it;
    }

    [[nodiscard]] inline std::vector<std::string> getAllKeys() const {
        std::vector<std::string> keys;
        leveldb::Iterator*       it = db->NewIterator(rdopt);
        for (it->SeekToFirst(); it->Valid(); it->Next()) {
            auto k = it->key();
            keys.emplace_back(k.data(), k.size());
        }
        delete it;
        return keys;
    }

    [[nodiscard]] inline bool isValid() const { return status.ok(); }

    [[nodiscard]] inline std::string error() const { return status.ToString(); }

private:
    KeyValueDBImpl() = default;
};

std::unique_ptr<KeyValueDB>
KeyValueDB::create(const std::string& path, bool read_cache, int cache_sz, int Bfilter_bit) {
    CreateDirs(path);
    auto db  = std::unique_ptr<KeyValueDB>(new KeyValueDB());
    db->impl = std::make_unique<KeyValueDBImpl>(path.c_str(), true, read_cache, cache_sz, Bfilter_bit);
    return db;
}

std::unique_ptr<KeyValueDB>
KeyValueDB::open(const std::string& path, bool create, bool read_cache, int cache_sz, int Bfilter_bit) {
    CreateDirs(path);
    auto db  = std::unique_ptr<KeyValueDB>(new KeyValueDB());
    db->impl = std::make_unique<KeyValueDBImpl>(path.c_str(), create, read_cache, cache_sz, Bfilter_bit);
    return db;
}

KeyValueDB::~KeyValueDB() = default;

std::optional<std::string> KeyValueDB::get(std::string_view key) const { return impl->get(key); }

bool KeyValueDB::set(std::string_view key, std::string_view val) { return impl->set(key, val); }

bool KeyValueDB::del(std::string_view key) { return impl->del(key); }

void KeyValueDB::iter(std::function<bool(std::string_view key, std::string_view val)> const& fn) const {
    impl->iter(fn);
}

std::vector<std::string> KeyValueDB::getAllKeys() const { return impl->getAllKeys(); }

bool KeyValueDB::isValid() const { return impl->isValid(); }

KeyValueDB::operator bool() const { return isValid(); }

std::string KeyValueDB::error() const { return impl->error(); }
