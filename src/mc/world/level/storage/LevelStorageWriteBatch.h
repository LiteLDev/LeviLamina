#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/db_helpers/Category.h"

class LevelStorageWriteBatch {
public:
    // LevelStorageWriteBatch inner types declare
    // clang-format off
    struct BatchEntry;
    // clang-format on

    // LevelStorageWriteBatch inner types define
    struct BatchEntry {
    public:
        // prevent constructor by default
        BatchEntry& operator=(BatchEntry const&);
        BatchEntry(BatchEntry const&);
        BatchEntry();

    public:
        // NOLINTBEGIN
        MCAPI ~BatchEntry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LevelStorageWriteBatch& operator=(LevelStorageWriteBatch const&);
    LevelStorageWriteBatch(LevelStorageWriteBatch const&);

    using BatchEntryMap = std::map<std::string, BatchEntry>;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelStorageWriteBatch();

    // vIndex: 1
    virtual void putKey(std::string const& key, std::string_view data, ::DBHelpers::Category category);

    // vIndex: 2
    virtual void putKey(std::string const& key, std::string const& data, ::DBHelpers::Category category);

    // vIndex: 3
    virtual void putKey(std::string const& key, std::string&& data, ::DBHelpers::Category category);

    // vIndex: 4
    virtual void putKey(std::string const& key, std::shared_ptr<std::string> data, ::DBHelpers::Category category);

    // vIndex: 5
    virtual void deleteKey(std::string const& key, ::DBHelpers::Category category);

    // vIndex: 6
    virtual void flush(class LevelStorage& db);

    MCAPI LevelStorageWriteBatch();

    MCAPI LevelStorageWriteBatch(class LevelStorageWriteBatch&&);

    MCAPI void addFlushCallback(std::function<void()> callback);

    MCAPI void clear();

    MCAPI void erase(BatchEntryMap::const_iterator const&);

    MCAPI BatchEntryMap::const_iterator find(std::string const& key) const;

    MCAPI BatchEntryMap::iterator find(std::string const& key);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _writeKey(std::string const& key, std::shared_ptr<std::string>&& data, ::DBHelpers::Category category);

    // NOLINTEND
};
