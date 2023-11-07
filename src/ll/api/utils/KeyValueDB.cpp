﻿#include "ll/api/utils/KeyValueDB.h"

#include <optional>

#include "leveldb/cache.h"
#include "leveldb/filter_policy.h"

#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/utils/FileUtils.h"
#include "ll/core/LeviLamina.h"

using namespace ll;
using namespace ll::utils;

class KeyValueDB::KeyValueDBImpl {
public:
    std::unique_ptr<leveldb::DB> db;
    leveldb::ReadOptions         readOptions;
    leveldb::WriteOptions        writeOptions;
    leveldb::Options             options;
    leveldb::Status              status;
    std::string                  dbPath;

    KeyValueDBImpl(std::string const& path, bool create, bool readCache, int cacheSize, bool filterBit) {
        readOptions  = leveldb::ReadOptions();
        writeOptions = leveldb::WriteOptions();
        options      = leveldb::Options();
        dbPath       = path;

        readOptions.fill_cache       = readCache;
        readOptions.verify_checksums = false;
        writeOptions.sync            = false;
        options.reuse_logs           = true; // @warning: experimental
        options.create_if_missing    = create;

        if (cacheSize) { options.block_cache = leveldb::NewLRUCache(cacheSize); }
        if (filterBit) { options.filter_policy = leveldb::NewBloomFilterPolicy(filterBit); }

        leveldb::DB* database = nullptr;
        status                = leveldb::DB::Open(options, path, &database);
        db.reset(database);
        if (!status.ok()) {
            auto output = status.ToString();
            output.erase(std::remove(output.begin(), output.end(), '\n'), output.end());
            ll::logger.error(": Fail to load KeyValueDB <{}>: {}", path, output);
        }
    }

    ~KeyValueDBImpl() { delete options.filter_policy; }

    [[nodiscard]] std::optional<std::string> get(std::string_view key) const {
        std::string result;
        auto        s = db->Get(readOptions, leveldb::Slice(key.data(), key.size()), &result);
        if (!s.ok()) { return std::nullopt; }
        return result;
    }

    [[nodiscard]] bool set(std::string_view key, std::string_view val) const {
        auto s = db->Put(writeOptions, leveldb::Slice(key.data(), key.size()), leveldb::Slice(val.data(), val.size()));
        if (!s.ok()) {
            ll::logger.error("Fail to put {} {}", dbPath, s.ToString());
            return false;
        }
        return true;
    }

    [[nodiscard]] bool del(std::string_view key) const {
        auto s = db->Delete(writeOptions, leveldb::Slice(key.data(), key.size()));
        if (!s.ok()) {
            ll::logger.error("Fail to del {} {}", dbPath, s.ToString());
            return false;
        }
        return true;
    }

    inline void iter(std::function<bool(std::string_view, std::string_view)> const& fn) const {
        leveldb::Iterator* it = db->NewIterator(readOptions);
        for (it->SeekToFirst(); it->Valid(); it->Next()) {
            auto k = it->key();
            auto v = it->value();
            if (!fn({k.data(), k.size()}, {v.data(), v.size()})) { break; }
        }
        delete it;
    }

    [[nodiscard]] std::vector<std::string> getAllKeys() const {
        std::vector<std::string> keys;
        leveldb::Iterator*       it = db->NewIterator(readOptions);
        for (it->SeekToFirst(); it->Valid(); it->Next()) {
            auto k = it->key();
            keys.emplace_back(k.data(), k.size());
        }
        delete it;
        return keys;
    }

    [[nodiscard]] bool isValid() const { return status.ok(); }

    [[nodiscard]] std::string error() const { return status.ToString(); }

private:
    KeyValueDBImpl() = default;
};

std::unique_ptr<KeyValueDB> KeyValueDB::create(std::string const& path, bool readCache, int cacheSize, int filterBit) {
    file_utils::createDirs(path);
    auto db  = std::unique_ptr<KeyValueDB>(new KeyValueDB());
    db->impl = std::make_unique<KeyValueDBImpl>(path, true, readCache, cacheSize, filterBit);
    return db;
}

std::unique_ptr<KeyValueDB>
KeyValueDB::open(std::string const& path, bool create, bool readCache, int cacheSize, int filterBit) {
    file_utils::createDirs(path);
    auto db  = std::unique_ptr<KeyValueDB>(new KeyValueDB());
    db->impl = std::make_unique<KeyValueDBImpl>(path, create, readCache, cacheSize, filterBit);
    return db;
}

KeyValueDB::~KeyValueDB() = default;

std::optional<std::string> KeyValueDB::get(std::string_view key) const { return impl->get(key); }

bool KeyValueDB::set(std::string_view key, std::string_view val) { return impl->set(key, val); }

bool KeyValueDB::del(std::string_view key) { return impl->del(key); }

void KeyValueDB::iter(std::function<bool(std::string_view, std::string_view)> const& fn) const { impl->iter(fn); }

std::vector<std::string> KeyValueDB::getAllKeys() const { return impl->getAllKeys(); }

bool KeyValueDB::isValid() const { return impl->isValid(); }

KeyValueDB::operator bool() const { return isValid(); }

std::string KeyValueDB::error() const { return impl->error(); }
