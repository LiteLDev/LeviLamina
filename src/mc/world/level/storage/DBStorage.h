#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/storage/LevelStorage.h"
#include "mc/world/level/storage/LevelStorageWriteBatch.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { struct LevelStorageResult; }
namespace DBHelpers { enum class Category; }
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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGE_COMMITOPERATION
    public:
        CommitOperation& operator=(CommitOperation const&) = delete;
        CommitOperation(CommitOperation const&)            = delete;
        CommitOperation()                                  = delete;
#endif

    public:
        /**
         * @symbol ??1CommitOperation\@DBStorage\@\@QEAA\@XZ
         */
        MCAPI ~CommitOperation();
    };

    class DBStorageToken {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGE_DBSTORAGETOKEN
    public:
        DBStorageToken& operator=(DBStorageToken const&) = delete;
        DBStorageToken(DBStorageToken const&)            = delete;
        DBStorageToken()                                 = delete;
#endif

    public:
        /**
         * @symbol ??1DBStorageToken\@DBStorage\@\@QEAA\@XZ
         */
        MCAPI ~DBStorageToken();
    };

    struct PendingWriteResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGE_PENDINGWRITERESULT
    public:
        PendingWriteResult& operator=(PendingWriteResult const&) = delete;
        PendingWriteResult(PendingWriteResult const&)            = delete;
        PendingWriteResult()                                     = delete;
#endif

    public:
        /**
         * @symbol
         * ??0PendingWriteResult\@DBStorage\@\@QEAA\@V?$shared_ptr\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@_N\@Z
         */
        MCAPI PendingWriteResult(class std::shared_ptr<std::string const>, bool);
        /**
         * @symbol ??1PendingWriteResult\@DBStorage\@\@QEAA\@XZ
         */
        MCAPI ~PendingWriteResult();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGE
public:
    DBStorage& operator=(DBStorage const&) = delete;
    DBStorage(DBStorage const&)            = delete;
    DBStorage()                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?addStorageObserver\@DBStorage\@\@UEAAXV?$unique_ptr\@VLevelStorageObserver\@\@U?$default_delete\@VLevelStorageObserver\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>);
    /**
     * @vftbl 2
     * @symbol
     * ?getCompoundTag\@DBStorage\@\@UEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const&, enum class DBHelpers::Category);
    /**
     * @vftbl 3
     * @symbol
     * ?hasKey\@DBStorage\@\@UEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual bool
        hasKey(class std::basic_string_view<char, struct std::char_traits<char>>, enum class DBHelpers::Category) const;
    /**
     * @vftbl 4
     * @symbol
     * ?forEachKeyWithPrefix\@DBStorage\@\@UEBAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@W4Category\@DBHelpers\@\@AEBV?$function\@$$A6AXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z\@3\@\@Z
     */
    virtual void
    forEachKeyWithPrefix(class std::basic_string_view<char, struct std::char_traits<char>>, enum class DBHelpers::Category, class std::function<void(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>)> const&) const;
    /**
     * @vftbl 5
     * @symbol ?loadLevelData\@DBStorage\@\@UEAA_NAEAVLevelData\@\@\@Z
     */
    virtual bool loadLevelData(class LevelData&);
    /**
     * @vftbl 6
     * @symbol
     * ?createChunkStorage\@DBStorage\@\@UEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    virtual std::unique_ptr<class ChunkSource>
        createChunkStorage(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @vftbl 7
     * @symbol ?saveLevelData\@DBStorage\@\@UEAAXAEBVLevelData\@\@\@Z
     */
    virtual void saveLevelData(class LevelData const&);
    /**
     * @vftbl 8
     * @symbol
     * ?getFullPath\@DBStorage\@\@UEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const& getFullPath() const;
    /**
     * @vftbl 9
     * @symbol
     * ?saveData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@$$QEAV43\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(std::string const&, std::string&&, enum class DBHelpers::Category);
    /**
     * @vftbl 10
     * @symbol
     * ?saveData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBVLevelStorageWriteBatch\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(class LevelStorageWriteBatch const&);
    /**
     * @vftbl 11
     * @symbol
     * ?deleteData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    deleteData(std::string const&, enum class DBHelpers::Category);
    /**
     * @vftbl 12
     * @symbol
     * ?getStatistics\@DBStorage\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void getStatistics(std::string&) const;
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol ?startShutdown\@DBStorage\@\@UEAAXXZ
     */
    virtual void startShutdown();
    /**
     * @vftbl 16
     * @symbol ?isShuttingDown\@DBStorage\@\@UEBA_NXZ
     */
    virtual bool isShuttingDown() const;
    /**
     * @vftbl 17
     * @symbol ?checkShutdownDone\@DBStorage\@\@UEAA_NXZ
     */
    virtual bool checkShutdownDone();
    /**
     * @vftbl 18
     * @symbol
     * ?loadData\@DBStorage\@\@UEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual bool loadData(
        class std::basic_string_view<char, struct std::char_traits<char>>,
        std::string&,
        enum class DBHelpers::Category
    ) const;
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 20
     * @symbol
     * ?createSnapshot\@DBStorage\@\@UEAA?AV?$vector\@USnapshotFilenameAndLength\@\@V?$allocator\@USnapshotFilenameAndLength\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const&);
    /**
     * @vftbl 21
     * @symbol ?releaseSnapshot\@DBStorage\@\@UEAAXXZ
     */
    virtual void releaseSnapshot();
    /**
     * @vftbl 22
     * @symbol ?compactStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void compactStorage();
    /**
     * @vftbl 23
     * @symbol ?syncAndSuspendStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void syncAndSuspendStorage();
    /**
     * @vftbl 24
     * @symbol ?resumeStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void resumeStorage();
    /**
     * @vftbl 25
     * @symbol ?setFlushAllowed\@DBStorage\@\@UEAAX_N\@Z
     */
    virtual void setFlushAllowed(bool);
    /**
     * @vftbl 26
     * @symbol ?flushToPermanentStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void flushToPermanentStorage();
    /**
     * @vftbl 27
     * @symbol ?freeCaches\@DBStorage\@\@UEAAXXZ
     */
    virtual void freeCaches();
    /**
     * @vftbl 28
     * @symbol ?setCompactionCallback\@DBStorage\@\@UEAAXV?$function\@$$A6AXW4CompactionStatus\@\@\@Z\@std\@\@\@Z
     */
    virtual void setCompactionCallback(class std::function<void(enum class CompactionStatus)>);
    /**
     * @vftbl 29
     * @symbol ?setCriticalSyncSaveCallback\@DBStorage\@\@UEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void setCriticalSyncSaveCallback(class std::function<void(void)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DBSTORAGE
    /**
     * @symbol ?getLevelStorageState\@DBStorage\@\@UEBA?AULevelStorageResult\@Core\@\@XZ
     */
    MCVAPI struct Core::LevelStorageResult getLevelStorageState() const;
    /**
     * @symbol ?getState\@DBStorage\@\@UEBA?AULevelStorageResult\@Core\@\@XZ
     */
    MCVAPI struct Core::LevelStorageResult getState() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DBStorage();
#endif
    /**
     * @symbol
     * ??0DBStorage\@\@QEAA\@UDBStorageConfig\@\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI DBStorage(struct DBStorageConfig, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>);
    /**
     * @symbol ?tryRepair\@DBStorage\@\@QEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool tryRepair(class Core::Path const&) const;

    // protected:
    /**
     * @symbol
     * ?_findCacheEntry\@DBStorage\@\@IEAA?AU?$pair\@PEAVLevelStorageWriteBatch\@\@V?$_Tree_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UBatchEntry\@LevelStorageWriteBatch\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI struct std::pair<
        class LevelStorageWriteBatch*,
        class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<
            struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>>
    _findCacheEntry(std::string const&);
    /**
     * @symbol
     * ?_getAllPendingWrites\@DBStorage\@\@IEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UPendingWriteResult\@DBStorage\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UPendingWriteResult\@DBStorage\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::map<
        std::string,
        struct DBStorage::PendingWriteResult,
        struct std::less<std::string>,
        class std::allocator<struct std::pair<std::string const, struct DBStorage::PendingWriteResult>>>
    _getAllPendingWrites() const;
    /**
     * @symbol ?_handleErrorStatus\@DBStorage\@\@IEAAXAEBVStatus\@leveldb\@\@\@Z
     */
    MCAPI void _handleErrorStatus(class leveldb::Status const&);
    /**
     * @symbol
     * ?_mergeIntoDeleteCache\@DBStorage\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    MCAPI void _mergeIntoDeleteCache(std::string const&, enum class DBHelpers::Category);
    /**
     * @symbol ?_mergeIntoWriteCache\@DBStorage\@\@IEAAXAEBVLevelStorageWriteBatch\@\@\@Z
     */
    MCAPI void _mergeIntoWriteCache(class LevelStorageWriteBatch const&);
    /**
     * @symbol ?_queueSaveCallback\@DBStorage\@\@IEAAX_N\@Z
     */
    MCAPI void _queueSaveCallback(bool);
    /**
     * @symbol
     * ?_read\@DBStorage\@\@IEBAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@W4Category\@DBHelpers\@\@AEBV?$function\@$$A6AXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z\@3\@\@Z
     */
    MCAPI void
    _read(class std::basic_string_view<char, struct std::char_traits<char>>, enum class DBHelpers::Category, class std::function<void(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>)> const&)
        const;
    /**
     * @symbol
     * ?_readPendingWrite\@DBStorage\@\@IEBA?AUPendingWriteResult\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    MCAPI struct DBStorage::PendingWriteResult
    _readPendingWrite(std::string const&, enum class DBHelpers::Category) const;

    // private:
    /**
     * @symbol ?_flushWriteCacheToLevelDB\@DBStorage\@\@AEAA?AVTaskResult\@\@XZ
     */
    MCAPI class TaskResult _flushWriteCacheToLevelDB();
    /**
     * @symbol
     * ?_getTelemetryMessage\@DBStorage\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVStatus\@leveldb\@\@\@Z
     */
    MCAPI std::string _getTelemetryMessage(class leveldb::Status const&) const;
    /**
     * @symbol ?_markAsCorrupted\@DBStorage\@\@AEBAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _markAsCorrupted(class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol ?_removeCorruptedMark\@DBStorage\@\@AEBAXXZ
     */
    MCAPI void _removeCorruptedMark() const;
    /**
     * @symbol ?_scheduleNextAutoCompaction\@DBStorage\@\@AEAAXXZ
     */
    MCAPI void _scheduleNextAutoCompaction();
    /**
     * @symbol
     * ?_suspendAndPerformSaveAction\@DBStorage\@\@AEAA_NV?$function\@$$A6A?AVTaskResult\@\@XZ\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCAPI bool
        _suspendAndPerformSaveAction(class std::function<class TaskResult(void)>, class std::function<void(void)>);

protected:
private:
};
