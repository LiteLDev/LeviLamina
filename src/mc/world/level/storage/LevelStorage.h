#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class ContentIdentity;
class LevelData;
class LevelStorageObserver;
class LevelStorageWriteBatch;
class Player;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStorage();

    virtual void addStorageObserver(::std::unique_ptr<::LevelStorageObserver>) = 0;

    virtual bool loadedSuccessfully() const;

    virtual ::std::unique_ptr<::CompoundTag> getCompoundTag(::std::string const&, ::DBHelpers::Category) = 0;

    virtual bool hasKey(::std::string_view, ::DBHelpers::Category) const = 0;

    virtual void forEachKeyWithPrefix(
        ::std::string_view,
        ::DBHelpers::Category,
        ::std::function<void(::std::string_view, ::std::string_view)> const&
    ) const = 0;

    virtual bool loadLevelData(::LevelData&) = 0;

    virtual ::std::unique_ptr<::ChunkSource> createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion) = 0;

    virtual void saveLevelData(::LevelData const&) = 0;

    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const = 0;

    virtual ::Bedrock::Threading::Async<void>
    saveData(::std::string const&, ::std::string&&, ::DBHelpers::Category) = 0;

    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const&) = 0;

    virtual ::Bedrock::Threading::Async<void> deleteData(::std::string const&, ::DBHelpers::Category) = 0;

    virtual void getStatistics(::std::string&, ::LevelStorage::StatsType) const = 0;

    virtual bool clonePlayerData(::std::string_view fromKey, ::std::string_view toKey);

    virtual ::Core::LevelStorageResult getLevelStorageState() const = 0;

    virtual ::ContentIdentity const* getContentIdentity() const = 0;

    virtual void startShutdown() = 0;

    virtual bool isShuttingDown() const = 0;

    virtual bool checkShutdownDone() = 0;

    virtual bool loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const;

    virtual ::Core::LevelStorageResult getState() const = 0;

    virtual ::std::vector<::SnapshotFilenameAndLength> createSnapshot(::std::string const&, bool) = 0;

    virtual void releaseSnapshot() = 0;

    virtual ::Bedrock::Threading::Async<void> compactStorage() = 0;

    virtual void syncAndSuspendStorage() = 0;

    virtual void resumeStorage() = 0;

    virtual void setFlushAllowed(bool) = 0;

    virtual void flushToPermanentStorage() = 0;

    virtual void freeCaches();

    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)>) = 0;

    virtual void setCriticalSyncSaveCallback(::std::function<void()>) = 0;

    virtual void corruptLevel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::std::unique_ptr<::LevelStorageWriteBatch> createWriteBatch();

    MCAPI ::std::string getServerId(::Player const& client, bool isXboxLive);

    MCAPI ::std::vector<::std::string> loadAllPlayerIDs(bool includeLocalPlayer) const;

    MCAPI ::std::unique_ptr<::CompoundTag> loadServerPlayerData(::Player const& client, bool isXboxLive);

    MCAPI void save(::Player& player);

    MCAPI ::Bedrock::Threading::Async<void>
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
    MCFOLD bool $loadedSuccessfully() const;

    MCAPI bool $clonePlayerData(::std::string_view fromKey, ::std::string_view toKey);

    MCFOLD bool $loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const;

    MCFOLD void $freeCaches();

    MCFOLD void $corruptLevel();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
