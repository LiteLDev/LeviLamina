#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/LevelStorageResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/storage/DBStoragePerformanceTelemetry.h"
#include "mc/world/level/storage/LevelStorage.h"
#include "mc/world/level/storage/LevelStorageWriteBatch.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class ContentIdentity;
class DBChunkStorage;
class DBStorageEnvironmentChain;
class DBStorageFolderWatcher;
class LevelData;
class LevelDbEnv;
class LevelStorageEventing;
class LevelStorageObserver;
class SaveTransactionManager;
class TaskGroup;
struct DBStorageConfig;
struct SnapshotFilenameAndLength;
// clang-format on

class DBStorage : public ::LevelStorage {
public:
    // DBStorage inner types declare
    // clang-format off
    struct CommitOperation;
    class DBStorageToken;
    class Options;
    struct PendingWriteResult;
    // clang-format on

    // DBStorage inner types define
    struct CommitOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                    mKey;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::string>> mValue;
        ::ll::TypedStorage<4, 4, ::DBHelpers::Category>             mCategory;
        ::ll::TypedStorage<1, 1, bool>                              mIsDelete;
        // NOLINTEND
    };

    class DBStorageToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::atomic<int>*> mRefCounter;
        // NOLINTEND
    };

    class Options {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 112, ::leveldb::Options>    options;
        ::ll::TypedStorage<8, 24, ::leveldb::ReadOptions> read;
        ::ll::TypedStorage<1, 1, ::leveldb::WriteOptions> write;
        // NOLINTEND
    };

    struct PendingWriteResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::string const>> mLatestValue;
        ::ll::TypedStorage<1, 1, bool>                                    mIsDeleted;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DBStorageEnvironmentChain>>        mEnvChain;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::Cache>>                   mCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::FilterPolicy const>>      mFilterPolicy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DBStorage::Options>>               mOptions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::DecompressAllocator>>     mDecompressAllocator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::DB>>                      mDb;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                        mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                        mCompactionTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                    mCompactionTask;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                    mWriteTask;
    ::ll::TypedStorage<8, 40, ::Core::LevelStorageResult>                           mState;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const*>                              mContentIdentity;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mFullPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mDbPath;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mLevelId;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                          mCompactionMutex;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                   mWriteCacheMutex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                          mCacheFlushMutex;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>               mLastCompactionStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mCompactionInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mWriteFlushInterval;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mAllowFlush;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mSavingInProgress;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mSnapshotInProgress;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mShutdownStarted;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mNoMoreWrites;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mShutdownDone;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                                    mOutstandingJobs;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SaveTransactionManager>> mSaveTransactionManager;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                              mCriticalSyncSaveCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::CompactionStatus)>> mExternallyRegisteredCompactionCallback;
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<::DBChunkStorage*, ::std::less<::DBChunkStorage*>, ::std::vector<::DBChunkStorage*>>>
                                                                                           mChunkStorages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LevelStorageObserver>>>    mObservers;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                          mDestructorInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                         mForceCorrupt;
    ::ll::TypedStorage<1, 1, bool const>                                                   mStorageEnabled;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                           mDbSubfolder;
    ::ll::TypedStorage<8, 128, ::LevelStorageWriteBatch>                                   mSingleKeyWrites;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelStorageWriteBatch>>                     mBatchWrites;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageEventing>>                    mEventing;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                 mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::DBStorageFolderWatcher>>> mFolderTelemetryWatcher;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextSizeTelemetryCaptureTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds const>        mSizeTelemetryCaptureInterval;
    ::ll::TypedStorage<8, 192, ::DBStoragePerformanceTelemetry>       mDBStoragePerformanceTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DBStorage() /*override*/ = default;

    virtual void addStorageObserver(::std::unique_ptr<::LevelStorageObserver>) /*override*/;

    virtual bool loadedSuccessfully() const /*override*/;

    virtual ::Core::LevelStorageResult getState() const /*override*/;

    virtual ::std::unique_ptr<::ChunkSource>
        createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> getCompoundTag(::std::string const&, ::DBHelpers::Category) /*override*/;

    virtual bool hasKey(::std::string_view, ::DBHelpers::Category) const /*override*/;

    virtual bool loadLevelData(::LevelData&) /*override*/;

    virtual void saveLevelData(::LevelData const&) /*override*/;

    virtual ::Bedrock::Threading::Async<void>
    saveData(::std::string const&, ::std::string&&, ::DBHelpers::Category) /*override*/;

    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const&) /*override*/;

    virtual ::Bedrock::Threading::Async<void> deleteData(::std::string const&, ::DBHelpers::Category) /*override*/;

    virtual bool loadData(::std::string_view, ::std::string&, ::DBHelpers::Category) const /*override*/;

    virtual void forEachKeyWithPrefix(
        ::std::string_view,
        ::DBHelpers::Category,
        ::std::function<void(::std::string_view, ::std::string_view)> const&
    ) const /*override*/;

    virtual ::Core::LevelStorageResult getLevelStorageState() const /*override*/;

    virtual ::ContentIdentity const* getContentIdentity() const /*override*/;

    virtual void startShutdown() /*override*/;

    virtual bool isShuttingDown() const /*override*/;

    virtual bool checkShutdownDone() /*override*/;

    virtual void getStatistics(::std::string&, ::LevelStorage::StatsType) const /*override*/;

    virtual ::std::vector<::SnapshotFilenameAndLength> createSnapshot(::std::string const&, bool) /*override*/;

    virtual void releaseSnapshot() /*override*/;

    virtual ::Bedrock::Threading::Async<void> compactStorage() /*override*/;

    virtual void syncAndSuspendStorage() /*override*/;

    virtual void resumeStorage() /*override*/;

    virtual void setFlushAllowed(bool) /*override*/;

    virtual void flushToPermanentStorage() /*override*/;

    virtual void freeCaches() /*override*/;

    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)>) /*override*/;

    virtual void setCriticalSyncSaveCallback(::std::function<void()>) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DBStorage(::DBStorageConfig config, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DBStorageConfig config, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
