#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/world/level/storage/LevelStorage.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class LevelData;
class LevelStorageObserver;
class LevelStorageWriteBatch;
struct SnapshotFilenameAndLength;
namespace Core { struct LevelStorageResult; }
// clang-format on

class MockLevelStorage : public ::LevelStorage {
public:
    // prevent constructor by default
    MockLevelStorage& operator=(MockLevelStorage const&);
    MockLevelStorage(MockLevelStorage const&);
    MockLevelStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MockLevelStorage() /*override*/;

    // vIndex: 1
    virtual void addStorageObserver(::std::unique_ptr<::LevelStorageObserver>) /*override*/;

    // vIndex: 3
    virtual ::std::unique_ptr<::CompoundTag> getCompoundTag(::std::string const&, ::DBHelpers::Category) /*override*/;

    // vIndex: 4
    virtual bool hasKey(::std::string_view, ::DBHelpers::Category) const /*override*/;

    // vIndex: 5
    virtual void
    forEachKeyWithPrefix(::std::string_view, ::DBHelpers::Category, ::std::function<void(::std::string_view, ::std::string_view)> const&)
        const /*override*/;

    // vIndex: 6
    virtual bool loadLevelData(::LevelData&) /*override*/;

    // vIndex: 7
    virtual ::std::unique_ptr<::ChunkSource>
        createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;

    // vIndex: 8
    virtual void saveLevelData(::LevelData const&) /*override*/;

    // vIndex: 9
    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const /*override*/;

    // vIndex: 11
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    saveData(::std::string const&, ::std::string&&, ::DBHelpers::Category) /*override*/;

    // vIndex: 10
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    saveData(::LevelStorageWriteBatch const&) /*override*/;

    // vIndex: 12
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    deleteData(::std::string const&, ::DBHelpers::Category) /*override*/;

    // vIndex: 13
    virtual void getStatistics(::std::string&, ::LevelStorage::StatsType) const /*override*/;

    // vIndex: 15
    virtual ::Core::LevelStorageResult getLevelStorageState() const /*override*/;

    // vIndex: 16
    virtual void startShutdown() /*override*/;

    // vIndex: 17
    virtual bool isShuttingDown() const /*override*/;

    // vIndex: 18
    virtual bool checkShutdownDone() /*override*/;

    // vIndex: 20
    virtual ::Core::LevelStorageResult getState() const /*override*/;

    // vIndex: 21
    virtual ::std::vector<::SnapshotFilenameAndLength> createSnapshot(::std::string const&, bool) /*override*/;

    // vIndex: 22
    virtual void releaseSnapshot() /*override*/;

    // vIndex: 23
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> compactStorage() /*override*/;

    // vIndex: 24
    virtual void syncAndSuspendStorage() /*override*/;

    // vIndex: 25
    virtual void resumeStorage() /*override*/;

    // vIndex: 26
    virtual void setFlushAllowed(bool) /*override*/;

    // vIndex: 27
    virtual void flushToPermanentStorage() /*override*/;

    // vIndex: 29
    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)>) /*override*/;

    // vIndex: 30
    virtual void setCriticalSyncSaveCallback(::std::function<void()>) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStorageObserver(::std::unique_ptr<::LevelStorageObserver>);

    MCAPI ::std::unique_ptr<::CompoundTag> $getCompoundTag(::std::string const&, ::DBHelpers::Category);

    MCAPI bool $hasKey(::std::string_view, ::DBHelpers::Category) const;

    MCAPI void
    $forEachKeyWithPrefix(::std::string_view, ::DBHelpers::Category, ::std::function<void(::std::string_view, ::std::string_view)> const&)
        const;

    MCAPI bool $loadLevelData(::LevelData&);

    MCAPI ::std::unique_ptr<::ChunkSource> $createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion);

    MCAPI void $saveLevelData(::LevelData const&);

    MCAPI ::Core::PathBuffer<::std::string> const& $getFullPath() const;

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    $saveData(::std::string const&, ::std::string&&, ::DBHelpers::Category);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> $saveData(::LevelStorageWriteBatch const&);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    $deleteData(::std::string const&, ::DBHelpers::Category);

    MCAPI void $getStatistics(::std::string&, ::LevelStorage::StatsType) const;

    MCAPI ::Core::LevelStorageResult $getLevelStorageState() const;

    MCAPI void $startShutdown();

    MCAPI bool $isShuttingDown() const;

    MCAPI bool $checkShutdownDone();

    MCAPI ::Core::LevelStorageResult $getState() const;

    MCAPI ::std::vector<::SnapshotFilenameAndLength> $createSnapshot(::std::string const&, bool);

    MCAPI void $releaseSnapshot();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> $compactStorage();

    MCAPI void $syncAndSuspendStorage();

    MCAPI void $resumeStorage();

    MCAPI void $setFlushAllowed(bool);

    MCAPI void $flushToPermanentStorage();

    MCAPI void $setCompactionCallback(::std::function<void(::CompactionStatus)>);

    MCAPI void $setCriticalSyncSaveCallback(::std::function<void()>);
    // NOLINTEND
};
