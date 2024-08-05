#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/enums/CompactionStatus.h"
#include "mc/enums/StorageVersion.h"
#include "mc/enums/d_b_helpers/Category.h"

// auto generated forward declare list
// clang-format off
namespace Core { struct LevelStorageResult; }
// clang-format on

class LevelStorage {
public:
    // LevelStorage inner types define
    enum class StatsType {};

public:
    // prevent constructor by default
    LevelStorage& operator=(LevelStorage const&);
    LevelStorage(LevelStorage const&);
    LevelStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelStorage();

    // vIndex: 1
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver> observer) = 0;

    // vIndex: 2
    virtual std::unique_ptr<class CompoundTag>
    getCompoundTag(std::string const& key, ::DBHelpers::Category category) = 0;

    // vIndex: 3
    virtual bool hasKey(std::string_view key, ::DBHelpers::Category category) const = 0;

    // vIndex: 4
    virtual void forEachKeyWithPrefix(
        std::string_view                                               prefix,
        ::DBHelpers::Category                                          category,
        std::function<void(std::string_view, std::string_view)> const& callback
    ) const = 0;

    // vIndex: 5
    virtual bool loadLevelData(class LevelData& data) = 0;

    // vIndex: 6
    virtual std::unique_ptr<class ChunkSource>
    createChunkStorage(std::unique_ptr<class ChunkSource> generator, ::StorageVersion) = 0;

    // vIndex: 7
    virtual void saveLevelData(class LevelData const& levelData) = 0;

    // vIndex: 8
    virtual class Core::PathBuffer<std::string> const& getFullPath() const = 0;

    // vIndex: 9
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(std::string const& key, std::string&& data, ::DBHelpers::Category category) = 0;

    // vIndex: 10
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(class LevelStorageWriteBatch const& batch) = 0;

    // vIndex: 11
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    deleteData(std::string const& key, ::DBHelpers::Category category) = 0;

    // vIndex: 12
    virtual void getStatistics(std::string&, ::LevelStorage::StatsType) const = 0;

    // vIndex: 13
    virtual bool clonePlayerData(std::string_view fromKey, std::string_view toKey);

    // vIndex: 14
    virtual struct Core::LevelStorageResult getLevelStorageState() const = 0;

    // vIndex: 15
    virtual void startShutdown() = 0;

    // vIndex: 16
    virtual bool isShuttingDown() const = 0;

    // vIndex: 17
    virtual bool checkShutdownDone() = 0;

    // vIndex: 18
    virtual bool loadData(std::string_view key, std::string& buffer, ::DBHelpers::Category category) const;

    // vIndex: 19
    virtual struct Core::LevelStorageResult getState() const = 0;

    // vIndex: 20
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const&, bool) = 0;

    // vIndex: 21
    virtual void releaseSnapshot() = 0;

    // vIndex: 22
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> compactStorage() = 0;

    // vIndex: 23
    virtual void syncAndSuspendStorage() = 0;

    // vIndex: 24
    virtual void resumeStorage() = 0;

    // vIndex: 25
    virtual void setFlushAllowed(bool flushAllowed) = 0;

    // vIndex: 26
    virtual void flushToPermanentStorage() = 0;

    // vIndex: 27
    virtual void freeCaches();

    // vIndex: 28
    virtual void setCompactionCallback(std::function<void(::CompactionStatus)> callback) = 0;

    // vIndex: 29
    virtual void setCriticalSyncSaveCallback(std::function<void()> callback) = 0;

    // vIndex: 30
    virtual void corruptLevel();

    MCAPI std::string getServerId(struct PlayerStorageIds const&);

    MCAPI std::string getServerId(class Player const&, bool);

    MCAPI std::vector<std::string> loadAllPlayerIDs(bool includeLocalPlayer = true) const;

    MCAPI std::unique_ptr<class CompoundTag> loadPlayerDataFromTag(std::string_view saveTag);

    MCAPI std::unique_ptr<class CompoundTag> loadServerPlayerData(class Player const& client, bool isXboxLive);

    MCAPI void save(class Player&);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          saveData(std::string const& key, class CompoundTag const& tag, ::DBHelpers::Category category);

    MCAPI static std::string const LEGACY_CONSOLE_PLAYER_PREFIX;

    MCAPI static std::string const LOCAL_PLAYER_TAG;

    // NOLINTEND
};
