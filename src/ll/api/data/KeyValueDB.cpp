#include "ll/api/data/KeyValueDB.h"

#include <filesystem>
#include <functional>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>
#include <system_error>
#include <vector>

#include "leveldb/db.h"
#include "leveldb/filter_policy.h"
#include "leveldb/iterator.h"

#include "ll/api/utils/StringUtils.h"

using namespace ll::data;

class KeyValueDB::KeyValueDBImpl {
public:
    std::unique_ptr<leveldb::DB> db;
    leveldb::ReadOptions         readOptions;
    leveldb::WriteOptions        writeOptions;
    leveldb::Options             options;

    KeyValueDBImpl(std::string const& path, bool createIfMiss, bool fixIfError, int bloomFilterBit) {
        readOptions               = leveldb::ReadOptions();
        writeOptions              = leveldb::WriteOptions();
        options                   = leveldb::Options();
        options.create_if_missing = createIfMiss;
        if (bloomFilterBit) {
            options.filter_policy = leveldb::NewBloomFilterPolicy(bloomFilterBit);
        }
#if _HAS_CXX23
        auto status = leveldb::DB::Open(options, path, std::out_ptr(db));
        if (fixIfError && !status.ok()) {
            status = leveldb::RepairDB(path, options);
            if (status.ok()) {
                status = leveldb::DB::Open(options, path, std::out_ptr(db));
            }
        }
        if (!status.ok()) {
            throw std::runtime_error(status.ToString());
        }
#endif
    }

    ~KeyValueDBImpl() { delete options.filter_policy; }
};

KeyValueDB::KeyValueDB(std::filesystem::path const& path, bool createIfMiss, bool fixIfError, int bloomFilterBit) {
    if (createIfMiss) {
        std::error_code ec;
        std::filesystem::create_directories(path, ec);
    }
    impl = std::make_unique<KeyValueDBImpl>(
        string_utils::wstr2str(path.wstring()),
        createIfMiss,
        fixIfError,
        bloomFilterBit
    );
}
KeyValueDB::KeyValueDB(std::filesystem::path const& path) : KeyValueDB(path, true, true, 0) {}

KeyValueDB::KeyValueDB(KeyValueDB&&) noexcept = default;

KeyValueDB& KeyValueDB::operator=(KeyValueDB&&) noexcept = default;

KeyValueDB::~KeyValueDB() = default;

std::optional<std::string> KeyValueDB::get(std::string_view key) const {
    std::string result;
    auto        s = impl->db->Get(impl->readOptions, leveldb::Slice(key.data(), key.size()), &result);
    if (!s.ok()) {
        return std::nullopt;
    }
    return result;
}
bool KeyValueDB::set(std::string_view key, std::string_view val) {
    return impl->db
        ->Put(impl->writeOptions, leveldb::Slice(key.data(), key.size()), leveldb::Slice(val.data(), val.size()))
        .ok();
}
bool KeyValueDB::has(std::string_view key) const {
    std::unique_ptr<leveldb::Iterator> it(impl->db->NewIterator(impl->readOptions));
    auto                               slice = leveldb::Slice(key.data(), key.size());
    it->Seek(slice);
    if (it->Valid()) {
        return it->key() == slice;
    }
    return false;
}
bool KeyValueDB::empty() const {
    std::unique_ptr<leveldb::Iterator> it(impl->db->NewIterator(impl->readOptions));
    it->SeekToFirst();
    return it->Valid();
}
bool KeyValueDB::del(std::string_view key) {
    return impl->db->Delete(impl->writeOptions, leveldb::Slice(key.data(), key.size())).ok();
}
void KeyValueDB::iter(std::function<bool(std::string_view, std::string_view)> const& fn) const {
    std::unique_ptr<leveldb::Iterator> it(impl->db->NewIterator(impl->readOptions));
    for (it->SeekToFirst(); it->Valid(); it->Next()) {
        auto k = it->key();
        auto v = it->value();
        if (!fn({k.data(), k.size()}, {v.data(), v.size()})) {
            break;
        }
    }
}
