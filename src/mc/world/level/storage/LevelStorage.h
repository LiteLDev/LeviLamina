#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class LevelData;
class LevelStorageObserver;
class LevelStorageWriteBatch;
class Player;
struct PlayerStorageIds;
struct SnapshotFilenameAndLength;
namespace Core { struct LevelStorageResult; }
// clang-format on

class LevelStorage {
public:
    // LevelStorage inner types define
    enum class StatsType : uint {
        Level0  = 0,
        Level1  = 1,
        Level2  = 2,
        Memory  = 3,
        Default = 0,
    };

public:
    // prevent constructor by default
    LevelStorage& operator=(LevelStorage const&);
    LevelStorage(LevelStorage const&);
    LevelStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelStorage();

    // vIndex: 1
    virtual void addStorageObserver(::std::unique_ptr<::LevelStorageObserver>) = 0;

    // vIndex: 2
    virtual bool loadedSuccessfully() const;

    // vIndex: 3
    virtual ::std::unique_ptr<::CompoundTag> getCompoundTag(::std::string const&, ::DBHelpers::Category) = 0;

    // vIndex: 4
    virtual bool hasKey(::std::string_view, ::DBHelpers::Category) const = 0;

    // vIndex: 5
    virtual void
    forEachKeyWithPrefix(::std::string_view, ::DBHelpers::Category, ::std::function<void(::std::string_view, ::std::string_view)> const&)
        const = 0;

    // vIndex: 6
    virtual bool loadLevelData(::LevelData&) = 0;

    // vIndex: 7
    virtual ::std::unique_ptr<::ChunkSource> createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion) = 0;

    // vIndex: 8
    virtual void saveLevelData(::LevelData const&) = 0;

    // vIndex: 9
    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const = 0;

    // vIndex: 11
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    saveData(::std::string const&, ::std::string&&, ::DBHelpers::Category) = 0;

    // vIndex: 10
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> saveData(::LevelStorageWriteBatch const&) = 0;

    // vIndex: 12
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    deleteData(::std::string const&, ::DBHelpers::Category) = 0;

    // vIndex: 13
    virtual void getStatistics(::std::string&, ::LevelStorage::StatsType) const = 0;

    // vIndex: 14
    virtual bool clonePlayerData(::std::string_view fromKey, ::std::string_view toKey);

    // vIndex: 15
    virtual ::Core::LevelStorageResult getLevelStorageState() const = 0;

    // vIndex: 16
    virtual void startShutdown() = 0;

    // vIndex: 17
    virtual bool isShuttingDown() const = 0;

    // vIndex: 18
    virtual bool checkShutdownDone() = 0;

    // vIndex: 19
    virtual bool loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const;

    // vIndex: 20
    virtual ::Core::LevelStorageResult getState() const = 0;

    // vIndex: 21
    virtual ::std::vector<::SnapshotFilenameAndLength> createSnapshot(::std::string const&, bool) = 0;

    // vIndex: 22
    virtual void releaseSnapshot() = 0;

    // vIndex: 23
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> compactStorage() = 0;

    // vIndex: 24
    virtual void syncAndSuspendStorage() = 0;

    // vIndex: 25
    virtual void resumeStorage() = 0;

    // vIndex: 26
    virtual void setFlushAllowed(bool) = 0;

    // vIndex: 27
    virtual void flushToPermanentStorage() = 0;

    // vIndex: 28
    virtual void freeCaches();

    // vIndex: 29
    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)>) = 0;

    // vIndex: 30
    virtual void setCriticalSyncSaveCallback(::std::function<void()>) = 0;

    // vIndex: 31
    virtual void corruptLevel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getServerId(::PlayerStorageIds const& playerId);

    MCAPI ::std::string getServerId(::Player const& client, bool isXboxLive);

    MCAPI ::std::vector<::std::string> loadAllPlayerIDs(bool includeLocalPlayer) const;

    MCAPI ::std::unique_ptr<::CompoundTag> loadLocalPlayerData();

    MCAPI ::std::unique_ptr<::CompoundTag> loadPlayerDataFromTag(::std::string_view saveTag);

    MCAPI ::std::unique_ptr<::CompoundTag> loadServerPlayerData(::Player const& client, bool isXboxLive);

    MCAPI void save(::Player& player);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    saveData(::std::string const& key, ::CompoundTag const& tag, ::DBHelpers::Category category);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& LEGACY_CONSOLE_PLAYER_PREFIX();

    MCAPI static ::std::string const& LOCAL_PLAYER_TAG();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $loadedSuccessfully() const;

    MCAPI bool $clonePlayerData(::std::string_view fromKey, ::std::string_view toKey);

    MCAPI bool $loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const;

    MCAPI void $freeCaches();

    MCAPI void $corruptLevel();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
