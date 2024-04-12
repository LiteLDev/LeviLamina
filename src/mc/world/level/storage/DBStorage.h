#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/CompactionStatus.h"
#include "mc/enums/StorageVersion.h"
#include "mc/enums/d_b_helpers/Category.h"
#include "mc/world/level/storage/LevelStorage.h"
#include "mc/world/level/storage/LevelStorageWriteBatch.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { struct LevelStorageResult; }
// clang-format on

class DBStorage : public ::LevelStorage {
public:
    // DBStorage inner types declare
    // clang-format off
    struct CommitOperation;
    class DBStorageToken;
    struct PendingWriteResult;
    // clang-format on

    // DBStorage inner types define
    struct CommitOperation {
    public:
        // prevent constructor by default
        CommitOperation& operator=(CommitOperation const&);
        CommitOperation(CommitOperation const&);
        CommitOperation();

    public:
        // NOLINTBEGIN
        // symbol: ??1CommitOperation@DBStorage@@QEAA@XZ
        MCAPI ~CommitOperation();

        // NOLINTEND
    };

    class DBStorageToken {
    public:
        // prevent constructor by default
        DBStorageToken& operator=(DBStorageToken const&);
        DBStorageToken(DBStorageToken const&);
        DBStorageToken();

    public:
        // NOLINTBEGIN
        // symbol: ??1DBStorageToken@DBStorage@@QEAA@XZ
        MCAPI ~DBStorageToken();

        // NOLINTEND
    };

    struct PendingWriteResult {
    public:
        // prevent constructor by default
        PendingWriteResult& operator=(PendingWriteResult const&);
        PendingWriteResult(PendingWriteResult const&);
        PendingWriteResult();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0PendingWriteResult@DBStorage@@QEAA@V?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@_N@Z
        MCAPI PendingWriteResult(std::shared_ptr<std::string const>, bool);

        // symbol: ??1PendingWriteResult@DBStorage@@QEAA@XZ
        MCAPI ~PendingWriteResult();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DBStorage& operator=(DBStorage const&);
    DBStorage(DBStorage const&);
    DBStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DBStorage@@UEAA@XZ
    virtual ~DBStorage();

    // vIndex: 1, symbol:
    // ?addStorageObserver@DBStorage@@UEAAXV?$unique_ptr@VLevelStorageObserver@@U?$default_delete@VLevelStorageObserver@@@std@@@std@@@Z
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver> observer);

    // vIndex: 2, symbol:
    // ?getCompoundTag@DBStorage@@UEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const& key, ::DBHelpers::Category category);

    // vIndex: 3, symbol:
    // ?hasKey@DBStorage@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4Category@DBHelpers@@@Z
    virtual bool hasKey(std::string_view key, ::DBHelpers::Category category) const;

    // vIndex: 4, symbol:
    // ?forEachKeyWithPrefix@DBStorage@@UEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4Category@DBHelpers@@AEBV?$function@$$A6AXV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z@3@@Z
    virtual void forEachKeyWithPrefix(
        std::string_view                                               prefix,
        ::DBHelpers::Category                                          category,
        std::function<void(std::string_view, std::string_view)> const& callback
    ) const;

    // vIndex: 5, symbol: ?loadLevelData@DBStorage@@UEAA_NAEAVLevelData@@@Z
    virtual bool loadLevelData(class LevelData& data);

    // vIndex: 6, symbol:
    // ?createChunkStorage@DBStorage@@UEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    virtual std::unique_ptr<class ChunkSource>
    createChunkStorage(std::unique_ptr<class ChunkSource> generator, ::StorageVersion);

    // vIndex: 7, symbol: ?saveLevelData@DBStorage@@UEAAXAEBVLevelData@@@Z
    virtual void saveLevelData(class LevelData const& levelData);

    // vIndex: 8, symbol:
    // ?getFullPath@DBStorage@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const& getFullPath() const;

    // vIndex: 9, symbol:
    // ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@$$QEAV43@W4Category@DBHelpers@@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(std::string const& key, std::string&& data, ::DBHelpers::Category category);

    // vIndex: 10, symbol:
    // ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBVLevelStorageWriteBatch@@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(class LevelStorageWriteBatch const& batch);

    // vIndex: 11, symbol:
    // ?deleteData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    deleteData(std::string const& key, ::DBHelpers::Category category);

    // vIndex: 12, symbol:
    // ?getStatistics@DBStorage@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void getStatistics(std::string& stats) const;

    // vIndex: 14, symbol: ?getLevelStorageState@DBStorage@@UEBA?AULevelStorageResult@Core@@XZ
    virtual struct Core::LevelStorageResult getLevelStorageState() const;

    // vIndex: 15, symbol: ?startShutdown@DBStorage@@UEAAXXZ
    virtual void startShutdown();

    // vIndex: 16, symbol: ?isShuttingDown@DBStorage@@UEBA_NXZ
    virtual bool isShuttingDown() const;

    // vIndex: 17, symbol: ?checkShutdownDone@DBStorage@@UEAA_NXZ
    virtual bool checkShutdownDone();

    // vIndex: 18, symbol:
    // ?loadData@DBStorage@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
    virtual bool loadData(std::string_view key, std::string& buffer, ::DBHelpers::Category category) const;

    // vIndex: 19, symbol: ?getState@DBStorage@@UEBA?AULevelStorageResult@Core@@XZ
    virtual struct Core::LevelStorageResult getState() const;

    // vIndex: 20, symbol:
    // ?createSnapshot@DBStorage@@UEAA?AV?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@_N@Z
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const&, bool);

    // vIndex: 21, symbol: ?releaseSnapshot@DBStorage@@UEAAXXZ
    virtual void releaseSnapshot();

    // vIndex: 22, symbol: ?compactStorage@DBStorage@@UEAAXXZ
    virtual void compactStorage();

    // vIndex: 23, symbol: ?syncAndSuspendStorage@DBStorage@@UEAAXXZ
    virtual void syncAndSuspendStorage();

    // vIndex: 24, symbol: ?resumeStorage@DBStorage@@UEAAXXZ
    virtual void resumeStorage();

    // vIndex: 25, symbol: ?setFlushAllowed@DBStorage@@UEAAX_N@Z
    virtual void setFlushAllowed(bool flushAllowed);

    // vIndex: 26, symbol: ?flushToPermanentStorage@DBStorage@@UEAAXXZ
    virtual void flushToPermanentStorage();

    // vIndex: 27, symbol: ?freeCaches@DBStorage@@UEAAXXZ
    virtual void freeCaches();

    // vIndex: 28, symbol: ?setCompactionCallback@DBStorage@@UEAAXV?$function@$$A6AXW4CompactionStatus@@@Z@std@@@Z
    virtual void setCompactionCallback(std::function<void(::CompactionStatus)> callback);

    // vIndex: 29, symbol: ?setCriticalSyncSaveCallback@DBStorage@@UEAAXV?$function@$$A6AXXZ@std@@@Z
    virtual void setCriticalSyncSaveCallback(std::function<void()> callback);

    // symbol: ??0DBStorage@@QEAA@UDBStorageConfig@@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@gsl@@@Z
    MCAPI DBStorage(struct DBStorageConfig config, Bedrock::NotNullNonOwnerPtr<class LevelDbEnv> levelDbEnv);

    // symbol: ?tryRepair@DBStorage@@QEBA_NAEBVPath@Core@@@Z
    MCAPI bool tryRepair(class Core::Path const& path) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_findCacheEntry@DBStorage@@IEAA?AU?$pair@PEAVLevelStorageWriteBatch@@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UBatchEntry@LevelStorageWriteBatch@@@std@@@std@@@std@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::pair<
        class LevelStorageWriteBatch*,
        std::_Tree_iterator<std::_Tree_val<
            std::_Tree_simple_types<std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>>
    _findCacheEntry(std::string const& key);

    // symbol:
    // ?_getAllPendingWrites@DBStorage@@IEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UPendingWriteResult@DBStorage@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UPendingWriteResult@DBStorage@@@std@@@2@@std@@XZ
    MCAPI std::map<std::string, struct DBStorage::PendingWriteResult> _getAllPendingWrites() const;

    // symbol: ?_handleErrorStatus@DBStorage@@IEAAXAEBVStatus@leveldb@@@Z
    MCAPI void _handleErrorStatus(leveldb::Status const& status);

    // symbol: ?_mergeIntoWriteCache@DBStorage@@IEAAXAEBVLevelStorageWriteBatch@@@Z
    MCAPI void _mergeIntoWriteCache(class LevelStorageWriteBatch const& batchToMerge);

    // symbol: ?_queueSaveCallback@DBStorage@@IEAAX_N@Z
    MCAPI void _queueSaveCallback(bool invokeImmediately);

    // symbol:
    // ?_read@DBStorage@@IEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4Category@DBHelpers@@AEBV?$function@$$A6AXV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z@3@@Z
    MCAPI void _read(
        std::string_view                                               prefix,
        ::DBHelpers::Category                                          category,
        std::function<void(std::string_view, std::string_view)> const& callback
    ) const;

    // symbol:
    // ?_readPendingWrite@DBStorage@@IEBA?AUPendingWriteResult@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Category@DBHelpers@@@Z
    MCAPI struct DBStorage::PendingWriteResult
    _readPendingWrite(std::string const& key, ::DBHelpers::Category category) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_flushWriteCacheToLevelDB@DBStorage@@AEAA?AVTaskResult@@XZ
    MCAPI class TaskResult _flushWriteCacheToLevelDB();

    // symbol:
    // ?_getTelemetryMessage@DBStorage@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVStatus@leveldb@@@Z
    MCAPI std::string _getTelemetryMessage(leveldb::Status const&) const;

    // symbol: ?_markAsCorrupted@DBStorage@@AEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void _markAsCorrupted(std::string_view message) const;

    // symbol: ?_removeCorruptedMark@DBStorage@@AEBAXXZ
    MCAPI void _removeCorruptedMark() const;

    // symbol: ?_scheduleNextAutoCompaction@DBStorage@@AEAAXXZ
    MCAPI void _scheduleNextAutoCompaction();

    // symbol:
    // ?_suspendAndPerformSaveAction@DBStorage@@AEAA_NV?$function@$$A6A?AVTaskResult@@XZ@std@@V?$function@$$A6AXXZ@3@@Z
    MCAPI bool _suspendAndPerformSaveAction(std::function<class TaskResult()> action, std::function<void()> callback);

    // NOLINTEND
};
