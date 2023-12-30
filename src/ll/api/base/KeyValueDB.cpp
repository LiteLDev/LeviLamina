#include "KeyValueDB.h"

#include <optional>

#include "leveldb/cache.h"
#include "leveldb/db.h"
#include "leveldb/filter_policy.h"

#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/io/FileUtils.h"
#include "ll/core/LeviLamina.h"

using namespace ll;

class KeyValueDB::KeyValueDBImpl {
public:
    std::unique_ptr<leveldb::DB> db;
    leveldb::ReadOptions         readOptions;
    leveldb::WriteOptions        writeOptions;
    leveldb::Options             options;

    KeyValueDBImpl(std::string const& path, bool createIfMiss, bool bloomFilterBit) {
        readOptions               = leveldb::ReadOptions();
        writeOptions              = leveldb::WriteOptions();
        options                   = leveldb::Options();
        options.create_if_missing = createIfMiss;
        if (bloomFilterBit) {
            options.filter_policy = leveldb::NewBloomFilterPolicy(bloomFilterBit);
        }
        auto status = leveldb::DB::Open(options, path, std::out_ptr(db));
        if (!status.ok()) {
            throw std::runtime_error(status.ToString());
        }
    }

    ~KeyValueDBImpl() { delete options.filter_policy; }

    [[nodiscard]] std::optional<std::string> get(std::string_view key) const {
        std::string result;
        auto        s = db->Get(readOptions, leveldb::Slice(key.data(), key.size()), &result);
        if (!s.ok()) {
            return std::nullopt;
        }
        return result;
    }

    [[nodiscard]] bool set(std::string_view key, std::string_view val) const {
        return db->Put(writeOptions, leveldb::Slice(key.data(), key.size()), leveldb::Slice(val.data(), val.size()))
            .ok();
    }

    [[nodiscard]] bool del(std::string_view key) const {
        return db->Delete(writeOptions, leveldb::Slice(key.data(), key.size())).ok();
    }

    inline void iter(std::function<bool(std::string_view, std::string_view)> const& fn) const {
        std::unique_ptr<leveldb::Iterator> it(db->NewIterator(readOptions));
        for (it->SeekToFirst(); it->Valid(); it->Next()) {
            auto k = it->key();
            auto v = it->value();
            if (!fn({k.data(), k.size()}, {v.data(), v.size()})) {
                break;
            }
        }
    }

    [[nodiscard]] std::vector<std::string> getAllKeys() const {
        std::vector<std::string>           keys;
        std::unique_ptr<leveldb::Iterator> it(db->NewIterator(readOptions));
        for (it->SeekToFirst(); it->Valid(); it->Next()) {
            auto k = it->key();
            keys.emplace_back(k.data(), k.size());
        }
        return keys;
    }

private:
    KeyValueDBImpl() = default;
};

KeyValueDB::KeyValueDB(std::filesystem::path const& path, bool createIfMiss, int bloomFilterBit) {
    if (createIfMiss) {
        std::error_code ec;
        std::filesystem::create_directories(path, ec);
    }
    impl = std::make_unique<KeyValueDBImpl>(string_utils::wstr2str(path.native()), createIfMiss, bloomFilterBit);
}

KeyValueDB::~KeyValueDB() = default;

std::optional<std::string> KeyValueDB::get(std::string_view key) const { return impl->get(key); }

bool KeyValueDB::set(std::string_view key, std::string_view val) { return impl->set(key, val); }

bool KeyValueDB::del(std::string_view key) { return impl->del(key); }

void KeyValueDB::iter(std::function<bool(std::string_view, std::string_view)> const& fn) const { impl->iter(fn); }

std::vector<std::string> KeyValueDB::getAllKeys() const { return impl->getAllKeys(); }
