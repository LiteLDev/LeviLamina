#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/storage/LevelStorage.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class LevelData;
class LevelDbEnv;
class LevelStorageObserver;
class LevelStorageWriteBatch;
class TaskResult;
struct DBStorageConfig;
struct SnapshotFilenameAndLength;
namespace Core { class Path; }
namespace Core { struct LevelStorageResult; }
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
        ::ll::UntypedStorage<8, 2152> mUnkb95cf3;
        ::ll::UntypedStorage<8, 24>   mUnk59eddf;
        ::ll::UntypedStorage<1, 1>    mUnk8c72a3;
        // NOLINTEND

    public:
        // prevent constructor by default
        Options& operator=(Options const&);
        Options(Options const&);
        Options();
    };

    struct PendingWriteResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk71f540;
        ::ll::UntypedStorage<1, 1>  mUnkb4b9b4;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingWriteResult& operator=(PendingWriteResult const&);
        PendingWriteResult(PendingWriteResult const&);
        PendingWriteResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PendingWriteResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    class DBStorageToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk444a8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        DBStorageToken& operator=(DBStorageToken const&);
        DBStorageToken(DBStorageToken const&);
        DBStorageToken();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DBStorageToken();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct CommitOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkee6e8d;
        ::ll::UntypedStorage<8, 16> mUnk7e551c;
        ::ll::UntypedStorage<4, 4>  mUnk9568c9;
        ::ll::UntypedStorage<1, 1>  mUnk33b805;
        // NOLINTEND

    public:
        // prevent constructor by default
        CommitOperation& operator=(CommitOperation const&);
        CommitOperation(CommitOperation const&);
        CommitOperation();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~CommitOperation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk584256;
    ::ll::UntypedStorage<8, 8>   mUnk7480b3;
    ::ll::UntypedStorage<8, 8>   mUnkf30503;
    ::ll::UntypedStorage<8, 8>   mUnk127577;
    ::ll::UntypedStorage<8, 8>   mUnk577c71;
    ::ll::UntypedStorage<8, 8>   mUnk2f7026;
    ::ll::UntypedStorage<8, 8>   mUnkd052f4;
    ::ll::UntypedStorage<8, 8>   mUnked7cce;
    ::ll::UntypedStorage<8, 8>   mUnk4494bc;
    ::ll::UntypedStorage<8, 8>   mUnkf94590;
    ::ll::UntypedStorage<8, 16>  mUnkab642c;
    ::ll::UntypedStorage<8, 16>  mUnkc0ab81;
    ::ll::UntypedStorage<8, 40>  mUnkf05e89;
    ::ll::UntypedStorage<8, 32>  mUnk5ba4d4;
    ::ll::UntypedStorage<8, 32>  mUnk4bed4b;
    ::ll::UntypedStorage<8, 32>  mUnk5454a7;
    ::ll::UntypedStorage<8, 80>  mUnk221b92;
    ::ll::UntypedStorage<8, 8>   mUnkcaf9d0;
    ::ll::UntypedStorage<8, 80>  mUnk6fbf11;
    ::ll::UntypedStorage<8, 8>   mUnk6bff93;
    ::ll::UntypedStorage<8, 8>   mUnk6b42b9;
    ::ll::UntypedStorage<8, 8>   mUnk862ca1;
    ::ll::UntypedStorage<1, 1>   mUnka23ec7;
    ::ll::UntypedStorage<1, 1>   mUnk9a917e;
    ::ll::UntypedStorage<1, 1>   mUnk760a7f;
    ::ll::UntypedStorage<1, 1>   mUnk2868b1;
    ::ll::UntypedStorage<1, 1>   mUnk6f3319;
    ::ll::UntypedStorage<1, 1>   mUnk3019dd;
    ::ll::UntypedStorage<4, 4>   mUnk42fafc;
    ::ll::UntypedStorage<8, 24>  mUnk67fb43;
    ::ll::UntypedStorage<8, 64>  mUnk3bbb25;
    ::ll::UntypedStorage<8, 64>  mUnkff454d;
    ::ll::UntypedStorage<8, 24>  mUnk459c5c;
    ::ll::UntypedStorage<8, 24>  mUnk863951;
    ::ll::UntypedStorage<1, 1>   mUnkd274df;
    ::ll::UntypedStorage<1, 1>   mUnk42ad31;
    ::ll::UntypedStorage<1, 1>   mUnk5e8844;
    ::ll::UntypedStorage<8, 32>  mUnkb2458b;
    ::ll::UntypedStorage<8, 128> mUnk8d2c43;
    ::ll::UntypedStorage<8, 24>  mUnkafd875;
    ::ll::UntypedStorage<8, 8>   mUnk7c4834;
    ::ll::UntypedStorage<8, 24>  mUnk817c44;
    ::ll::UntypedStorage<8, 8>   mUnk440898;
    ::ll::UntypedStorage<8, 8>   mUnk69426f;
    ::ll::UntypedStorage<8, 8>   mUnk9a9098;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorage& operator=(DBStorage const&);
    DBStorage(DBStorage const&);
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

    // vIndex: 20
    virtual ::Core::LevelStorageResult getState() const /*override*/;

    // vIndex: 7
    virtual ::std::unique_ptr<::ChunkSource>
        createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;

    // vIndex: 9
    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const /*override*/;

    // vIndex: 3
    virtual ::std::unique_ptr<::CompoundTag>
    getCompoundTag(::std::string const& key, ::DBHelpers::Category category) /*override*/;

    // vIndex: 4
    virtual bool hasKey(::std::string_view key, ::DBHelpers::Category category) const /*override*/;

    // vIndex: 6
    virtual bool loadLevelData(::LevelData& data) /*override*/;

    // vIndex: 8
    virtual void saveLevelData(::LevelData const& levelData) /*override*/;

    // vIndex: 11
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    saveData(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category) /*override*/;

    // vIndex: 10
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> saveData(::LevelStorageWriteBatch const& batch
    ) /*override*/;

    // vIndex: 12
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    deleteData(::std::string const& key, ::DBHelpers::Category category) /*override*/;

    // vIndex: 19
    virtual bool loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const
        /*override*/;

    // vIndex: 5
    virtual void forEachKeyWithPrefix(
        ::std::string_view                                                   prefix,
        ::DBHelpers::Category                                                category,
        ::std::function<void(::std::string_view, ::std::string_view)> const& callback
    ) const /*override*/;

    // vIndex: 15
    virtual ::Core::LevelStorageResult getLevelStorageState() const /*override*/;

    // vIndex: 16
    virtual void startShutdown() /*override*/;

    // vIndex: 17
    virtual bool isShuttingDown() const /*override*/;

    // vIndex: 18
    virtual bool checkShutdownDone() /*override*/;

    // vIndex: 13
    virtual void getStatistics(::std::string& outStats, ::LevelStorage::StatsType statsType) const /*override*/;

    // vIndex: 21
    virtual ::std::vector<::SnapshotFilenameAndLength>
    createSnapshot(::std::string const& filePrefix, bool flushWriteCache) /*override*/;

    // vIndex: 22
    virtual void releaseSnapshot() /*override*/;

    // vIndex: 23
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> compactStorage() /*override*/;

    // vIndex: 24
    virtual void syncAndSuspendStorage() /*override*/;

    // vIndex: 25
    virtual void resumeStorage() /*override*/;

    // vIndex: 26
    virtual void setFlushAllowed(bool flushAllowed) /*override*/;

    // vIndex: 27
    virtual void flushToPermanentStorage() /*override*/;

    // vIndex: 28
    virtual void freeCaches() /*override*/;

    // vIndex: 29
    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)> callback) /*override*/;

    // vIndex: 30
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

    MCAPI bool _isMarkedAsCorrupted() const;

    MCAPI void _markAsCorrupted(::std::string_view message) const;

    MCAPI void _mergeIntoWriteCache(::LevelStorageWriteBatch const& batchToMerge);

    MCAPI void _mergeIntoWriteCache(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    MCAPI void _queueSaveCallback(bool invokeImmediately);

    MCAPI void _read(
        ::std::string_view                                                   prefix,
        ::DBHelpers::Category                                                category,
        ::std::function<void(::std::string_view, ::std::string_view)> const& callback
    ) const;

    MCAPI ::DBStorage::PendingWriteResult
    _readPendingWrite(::std::string const& key, ::DBHelpers::Category category) const;

    MCAPI void _removeCorruptedMark() const;

    MCAPI void _scheduleNextAutoCompaction();

    MCAPI bool
    _suspendAndPerformSaveAction(::brstd::move_only_function<::TaskResult()> action, ::std::function<void()> callback);

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

    MCAPI bool $loadedSuccessfully() const;

    MCFOLD ::Core::LevelStorageResult $getState() const;

    MCFOLD ::Core::PathBuffer<::std::string> const& $getFullPath() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $getCompoundTag(::std::string const& key, ::DBHelpers::Category category);

    MCAPI bool $hasKey(::std::string_view key, ::DBHelpers::Category category) const;

    MCAPI bool $loadLevelData(::LevelData& data);

    MCAPI void $saveLevelData(::LevelData const& levelData);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    $saveData(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> $saveData(::LevelStorageWriteBatch const& batch);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    $deleteData(::std::string const& key, ::DBHelpers::Category category);

    MCAPI bool $loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const;

    MCAPI void $forEachKeyWithPrefix(
        ::std::string_view                                                   prefix,
        ::DBHelpers::Category                                                category,
        ::std::function<void(::std::string_view, ::std::string_view)> const& callback
    ) const;

    MCFOLD ::Core::LevelStorageResult $getLevelStorageState() const;

    MCAPI void $startShutdown();

    MCAPI bool $isShuttingDown() const;

    MCAPI bool $checkShutdownDone();

    MCAPI void $getStatistics(::std::string& outStats, ::LevelStorage::StatsType statsType) const;

    MCAPI ::std::vector<::SnapshotFilenameAndLength>
    $createSnapshot(::std::string const& filePrefix, bool flushWriteCache);

    MCAPI void $releaseSnapshot();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> $compactStorage();

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
