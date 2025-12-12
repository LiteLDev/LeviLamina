#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/world/level/storage/LevelStorage.h"
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
struct SnapshotFilenameAndLength;
namespace Core { struct LevelStorageResult; }
// clang-format on

class MockLevelStorage : public ::LevelStorage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MockLevelStorage() /*override*/ = default;

    virtual void addStorageObserver(::std::unique_ptr<::LevelStorageObserver>) /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> getCompoundTag(::std::string const&, ::DBHelpers::Category) /*override*/;

    virtual bool hasKey(::std::string_view, ::DBHelpers::Category) const /*override*/;

    virtual void forEachKeyWithPrefix(
        ::std::string_view,
        ::DBHelpers::Category,
        ::std::function<void(::std::string_view, ::std::string_view)> const&
    ) const /*override*/;

    virtual bool loadLevelData(::LevelData&) /*override*/;

    virtual ::std::unique_ptr<::ChunkSource>
        createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;

    virtual void saveLevelData(::LevelData const&) /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const /*override*/;

    virtual ::Bedrock::Threading::Async<void>
    saveData(::std::string const&, ::std::string&&, ::DBHelpers::Category) /*override*/;

    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const&) /*override*/;

    virtual ::Bedrock::Threading::Async<void> deleteData(::std::string const&, ::DBHelpers::Category) /*override*/;

    virtual void getStatistics(::std::string&, ::LevelStorage::StatsType) const /*override*/;

    virtual ::Core::LevelStorageResult getLevelStorageState() const /*override*/;

    virtual ::ContentIdentity const* getContentIdentity() const /*override*/;

    virtual void startShutdown() /*override*/;

    virtual bool isShuttingDown() const /*override*/;

    virtual bool checkShutdownDone() /*override*/;

    virtual ::Core::LevelStorageResult getState() const /*override*/;

    virtual ::std::vector<::SnapshotFilenameAndLength> createSnapshot(::std::string const&, bool) /*override*/;

    virtual void releaseSnapshot() /*override*/;

    virtual ::Bedrock::Threading::Async<void> compactStorage() /*override*/;

    virtual void syncAndSuspendStorage() /*override*/;

    virtual void resumeStorage() /*override*/;

    virtual void setFlushAllowed(bool) /*override*/;

    virtual void flushToPermanentStorage() /*override*/;

    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)>) /*override*/;

    virtual void setCriticalSyncSaveCallback(::std::function<void()>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
