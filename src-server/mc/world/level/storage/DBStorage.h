#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/LevelStorageResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/brstd/move_only_function.h"
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
class TaskResult;
struct DBStorageConfig;
struct SnapshotFilenameAndLength;
namespace Core { class Path; }
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
    class Options {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 112, ::leveldb::Options> options;
        ::ll::TypedStorage<8, 24, ::leveldb::ReadOptions> read;
        ::ll::TypedStorage<1, 1, ::leveldb::WriteOptions> write;
        // NOLINTEND
    
    };
    
    struct PendingWriteResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::string const>> mLatestValue;
        ::ll::TypedStorage<1, 1, bool> mIsDeleted;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingWriteResult();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    class DBStorageToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::atomic<int>*> mRefCounter;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DBStorageToken();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    struct CommitOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mKey;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::string>> mValue;
        ::ll::TypedStorage<4, 4, ::DBHelpers::Category> mCategory;
        ::ll::TypedStorage<1, 1, bool> mIsDelete;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CommitOperation();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DBStorageEnvironmentChain>> mEnvChain;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::Cache>> mCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::FilterPolicy const>> mFilterPolicy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DBStorage::Options>> mOptions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::DecompressAllocator>> mDecompressAllocator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::DB>> mDb;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mCompactionTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mCompactionTask;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mWriteTask;
    ::ll::TypedStorage<8, 40, ::Core::LevelStorageResult> mState;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const*> mContentIdentity;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mFullPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mDbPath;
    ::ll::TypedStorage<8, 32, ::std::string> mLevelId;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mCompactionMutex;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mWriteCacheMutex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mCacheFlushMutex;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastCompactionStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mCompactionInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mWriteFlushInterval;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mAllowFlush;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mSavingInProgress;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mSnapshotInProgress;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mShutdownStarted;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mNoMoreWrites;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mShutdownDone;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>> mOutstandingJobs;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SaveTransactionManager>> mSaveTransactionManager;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCriticalSyncSaveCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::CompactionStatus)>> mExternallyRegisteredCompactionCallback;
    ::ll::TypedStorage<8, 40, ::brstd::flat_set<::DBChunkStorage*, ::std::less<::DBChunkStorage*>, ::std::vector<::DBChunkStorage*>>> mChunkStorages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LevelStorageObserver>>> mObservers;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mDestructorInProgress;
    ::ll::TypedStorage<1, 1, bool> mForceCorrupt;
    ::ll::TypedStorage<1, 1, bool const> mStorageEnabled;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mDbSubfolder;
    ::ll::TypedStorage<8, 128, ::LevelStorageWriteBatch> mSingleKeyWrites;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelStorageWriteBatch>> mBatchWrites;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageEventing>> mEventing;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>> mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::DBStorageFolderWatcher>>> mFolderTelemetryWatcher;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextSizeTelemetryCaptureTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds const> mSizeTelemetryCaptureInterval;
    ::ll::TypedStorage<8, 192, ::DBStoragePerformanceTelemetry> mDBStoragePerformanceTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DBStorage() /*override*/;

    // vIndex: 1
    virtual void addStorageObserver(::std::unique_ptr<::LevelStorageObserver> observer) /*override*/;

    // vIndex: 2
    virtual bool loadedSuccessfully() const /*override*/;

    // vIndex: 21
    virtual ::Core::LevelStorageResult getState() const /*override*/;

    // vIndex: 7
    virtual ::std::unique_ptr<::ChunkSource> createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;

    // vIndex: 9
    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const /*override*/;

    // vIndex: 3
    virtual ::std::unique_ptr<::CompoundTag> getCompoundTag(::std::string const& key, ::DBHelpers::Category category) /*override*/;

    // vIndex: 4
    virtual bool hasKey(::std::string_view key, ::DBHelpers::Category category) const /*override*/;

    // vIndex: 6
    virtual bool loadLevelData(::LevelData& data) /*override*/;

    // vIndex: 8
    virtual void saveLevelData(::LevelData const& levelData) /*override*/;

    // vIndex: 11
    virtual ::Bedrock::Threading::Async<void> saveData(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category) /*override*/;

    // vIndex: 10
    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const& batch) /*override*/;

    // vIndex: 12
    virtual ::Bedrock::Threading::Async<void> deleteData(::std::string const& key, ::DBHelpers::Category category) /*override*/;

    // vIndex: 20
    virtual bool loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const /*override*/;

    // vIndex: 5
    virtual void forEachKeyWithPrefix(::std::string_view prefix, ::DBHelpers::Category category, ::std::function<void(::std::string_view, ::std::string_view)> const& callback) const /*override*/;

    // vIndex: 15
    virtual ::Core::LevelStorageResult getLevelStorageState() const /*override*/;

    // vIndex: 16
    virtual ::ContentIdentity const* getContentIdentity() const /*override*/;

    // vIndex: 17
    virtual void startShutdown() /*override*/;

    // vIndex: 18
    virtual bool isShuttingDown() const /*override*/;

    // vIndex: 19
    virtual bool checkShutdownDone() /*override*/;

    // vIndex: 13
    virtual void getStatistics(::std::string& outStats, ::LevelStorage::StatsType statsType) const /*override*/;

    // vIndex: 22
    virtual ::std::vector<::SnapshotFilenameAndLength> createSnapshot(::std::string const& filePrefix, bool flushWriteCache) /*override*/;

    // vIndex: 23
    virtual void releaseSnapshot() /*override*/;

    // vIndex: 24
    virtual ::Bedrock::Threading::Async<void> compactStorage() /*override*/;

    // vIndex: 25
    virtual void syncAndSuspendStorage() /*override*/;

    // vIndex: 26
    virtual void resumeStorage() /*override*/;

    // vIndex: 27
    virtual void setFlushAllowed(bool flushAllowed) /*override*/;

    // vIndex: 28
    virtual void flushToPermanentStorage() /*override*/;

    // vIndex: 29
    virtual void freeCaches() /*override*/;

    // vIndex: 30
    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)> callback) /*override*/;

    // vIndex: 31
    virtual void setCriticalSyncSaveCallback(::std::function<void()> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DBStorage(::DBStorageConfig config, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);

    MCAPI ::TaskResult _flushWriteCacheToLevelDB();

    MCAPI ::std::map<::std::string, ::DBStorage::PendingWriteResult> _getAllPendingWrites() const;

    MCAPI ::std::string _getTelemetryMessage(::leveldb::Status const& status) const;

    MCAPI void _handleErrorStatus(::leveldb::Status const& status);

    MCAPI void _markAsCorrupted(::std::string_view message) const;

    MCAPI void _mergeIntoWriteCache(::LevelStorageWriteBatch const& batchToMerge);

    MCAPI void _mergeIntoWriteCache(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    MCAPI void _queueSaveCallback(bool invokeImmediately);

    MCAPI void _read(::std::string_view prefix, ::DBHelpers::Category category, ::std::function<void(::std::string_view, ::std::string_view)> const& callback) const;

    MCAPI ::DBStorage::PendingWriteResult _readPendingWrite(::std::string const& key, ::DBHelpers::Category category) const;

    MCAPI void _removeCorruptedMark() const;

    MCAPI void _scheduleNextAutoCompaction();

    MCAPI bool _suspendAndPerformSaveAction(::brstd::move_only_function<::TaskResult()> action, ::brstd::move_only_function<void()> callback);

    MCAPI bool tryRepair(::Core::Path const& path) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DBStorageConfig config, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStorageObserver(::std::unique_ptr<::LevelStorageObserver> observer);

    MCFOLD bool $loadedSuccessfully() const;

    MCFOLD ::Core::LevelStorageResult $getState() const;

    MCAPI ::Core::PathBuffer<::std::string> const& $getFullPath() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $getCompoundTag(::std::string const& key, ::DBHelpers::Category category);

    MCAPI bool $hasKey(::std::string_view key, ::DBHelpers::Category category) const;

    MCAPI bool $loadLevelData(::LevelData& data);

    MCAPI void $saveLevelData(::LevelData const& levelData);

    MCAPI ::Bedrock::Threading::Async<void> $saveData(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    MCAPI ::Bedrock::Threading::Async<void> $saveData(::LevelStorageWriteBatch const& batch);

    MCAPI ::Bedrock::Threading::Async<void> $deleteData(::std::string const& key, ::DBHelpers::Category category);

    MCAPI bool $loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const;

    MCAPI void $forEachKeyWithPrefix(::std::string_view prefix, ::DBHelpers::Category category, ::std::function<void(::std::string_view, ::std::string_view)> const& callback) const;

    MCFOLD ::Core::LevelStorageResult $getLevelStorageState() const;

    MCFOLD ::ContentIdentity const* $getContentIdentity() const;

    MCAPI void $startShutdown();

    MCAPI bool $isShuttingDown() const;

    MCAPI bool $checkShutdownDone();

    MCAPI void $getStatistics(::std::string& outStats, ::LevelStorage::StatsType statsType) const;

    MCAPI ::std::vector<::SnapshotFilenameAndLength> $createSnapshot(::std::string const& filePrefix, bool flushWriteCache);

    MCAPI void $releaseSnapshot();

    MCAPI ::Bedrock::Threading::Async<void> $compactStorage();

    MCAPI void $syncAndSuspendStorage();

    MCAPI void $resumeStorage();

    MCAPI void $setFlushAllowed(bool flushAllowed);

    MCAPI void $flushToPermanentStorage();

    MCAPI void $freeCaches();

    MCAPI void $setCompactionCallback(::std::function<void(::CompactionStatus)> callback);

    MCAPI void $setCriticalSyncSaveCallback(::std::function<void()> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
