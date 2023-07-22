/**
 * @file  DBStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "LevelStorageWriteBatch.hpp"
#include "LevelStorage.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "leveldb/status.h"

#undef BEFORE_EXTRA

/**
 * @brief MC class DBStorage.
 *
 */
class DBStorage : public LevelStorage {

#define AFTER_EXTRA
// Add Member There
public:
struct PendingWriteResult {
    PendingWriteResult() = delete;
    PendingWriteResult(PendingWriteResult const&) = delete;
    PendingWriteResult(PendingWriteResult const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGE
public:
    class DBStorage& operator=(class DBStorage const &) = delete;
    DBStorage(class DBStorage const &) = delete;
    DBStorage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DBStorage();
    /**
     * @vftbl  1
     * @symbol  ?addStorageObserver\@DBStorage\@\@UEAAXV?$unique_ptr\@VLevelStorageObserver\@\@U?$default_delete\@VLevelStorageObserver\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>);
    /**
     * @vftbl  2
     * @symbol  ?getCompoundTag\@DBStorage\@\@UEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const &, enum class DBHelpers::Category);
    /**
     * @vftbl  3
     * @symbol  ?hasKey\@DBStorage\@\@UEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual bool hasKey(class gsl::basic_string_span<char const, -1>, enum class DBHelpers::Category) const;
    /**
     * @vftbl  4
     * @symbol  ?forEachKeyWithPrefix\@DBStorage\@\@UEBAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4Category\@DBHelpers\@\@AEBV?$function\@$$A6AXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@0\@Z\@std\@\@\@Z
     */
    virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, enum class DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const;
    /**
     * @vftbl  5
     * @symbol  ?loadLevelData\@DBStorage\@\@UEAA_NAEAVLevelData\@\@\@Z
     */
    virtual bool loadLevelData(class LevelData &);
    /**
     * @vftbl  6
     * @symbol  ?createChunkStorage\@DBStorage\@\@UEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @vftbl  7
     * @symbol  ?saveLevelData\@DBStorage\@\@UEAAXAEBVLevelData\@\@\@Z
     */
    virtual void saveLevelData(class LevelData const &);
    /**
     * @vftbl  8
     * @symbol  ?getFullPath\@DBStorage\@\@UEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const & getFullPath() const;
    /**
     * @vftbl  9
     * @symbol  ?saveData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@$$QEAV43\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, std::string &&, enum class DBHelpers::Category);
    /**
     * @vftbl  10
     * @symbol  ?saveData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBVLevelStorageWriteBatch\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const &);
    /**
     * @vftbl  11
     * @symbol  ?deleteData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const &, enum class DBHelpers::Category);
    /**
     * @vftbl  12
     * @symbol  ?getStatistics\@DBStorage\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void getStatistics(std::string &) const;
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol  ?startShutdown\@DBStorage\@\@UEAAXXZ
     */
    virtual void startShutdown();
    /**
     * @vftbl  16
     * @symbol  ?isShuttingDown\@DBStorage\@\@UEBA_NXZ
     */
    virtual bool isShuttingDown() const;
    /**
     * @vftbl  17
     * @symbol  ?checkShutdownDone\@DBStorage\@\@UEAA_NXZ
     */
    virtual bool checkShutdownDone();
    /**
     * @vftbl  18
     * @symbol  ?loadData\@DBStorage\@\@UEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string &, enum class DBHelpers::Category) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol  ?createSnapshot\@DBStorage\@\@UEAA?AV?$vector\@USnapshotFilenameAndLength\@\@V?$allocator\@USnapshotFilenameAndLength\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const &);
    /**
     * @vftbl  21
     * @symbol  ?releaseSnapshot\@DBStorage\@\@UEAAXXZ
     */
    virtual void releaseSnapshot();
    /**
     * @vftbl  22
     * @symbol  ?compactStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void compactStorage();
    /**
     * @vftbl  23
     * @symbol  ?syncAndSuspendStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void syncAndSuspendStorage();
    /**
     * @vftbl  24
     * @symbol  ?resumeStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void resumeStorage();
    /**
     * @vftbl  25
     * @symbol  ?setFlushAllowed\@DBStorage\@\@UEAAX_N\@Z
     */
    virtual void setFlushAllowed(bool);
    /**
     * @vftbl  26
     * @symbol  ?flushToPermanentStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void flushToPermanentStorage();
    /**
     * @vftbl  27
     * @symbol  ?freeCaches\@DBStorage\@\@UEAAXXZ
     */
    virtual void freeCaches();
    /**
     * @vftbl  28
     * @symbol  ?setCompactionCallback\@DBStorage\@\@UEAAXV?$function\@$$A6AXW4CompactionStatus\@\@\@Z\@std\@\@\@Z
     */
    virtual void setCompactionCallback(class std::function<void (enum class CompactionStatus)>);
    /**
     * @vftbl  29
     * @symbol  ?setCriticalSyncSaveCallback\@DBStorage\@\@UEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void setCriticalSyncSaveCallback(class std::function<void (void)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DBSTORAGE
    /**
     * @symbol  ?getLevelStorageState\@DBStorage\@\@UEBA?AULevelStorageResult\@Core\@\@XZ
     */
    MCVAPI struct Core::LevelStorageResult getLevelStorageState() const;
    /**
     * @symbol  ?getState\@DBStorage\@\@UEBA?AULevelStorageResult\@Core\@\@XZ
     */
    MCVAPI struct Core::LevelStorageResult getState() const;
#endif
    /**
     * @symbol  ??0DBStorage\@\@QEAA\@UDBStorageConfig\@\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI DBStorage(struct DBStorageConfig, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>);
    /**
     * @symbol  ?_notifyChunkStorageDestroyed\@DBStorage\@\@QEAAXAEAVDBChunkStorage\@\@\@Z
     */
    MCAPI void _notifyChunkStorageDestroyed(class DBChunkStorage &);
    /**
     * @symbol  ?tryRepair\@DBStorage\@\@QEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool tryRepair(class Core::Path const &) const;

//protected:
    /**
     * @symbol  ?_findCacheEntry\@DBStorage\@\@IEAA?AU?$pair\@PEAVLevelStorageWriteBatch\@\@V?$_Tree_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UBatchEntry\@LevelStorageWriteBatch\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI struct std::pair<class LevelStorageWriteBatch *, class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>> _findCacheEntry(std::string const &);
    /**
     * @symbol  ?_getAllPendingWrites\@DBStorage\@\@IEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UPendingWriteResult\@DBStorage\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UPendingWriteResult\@DBStorage\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::map<std::string, struct DBStorage::PendingWriteResult, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, struct DBStorage::PendingWriteResult>>> _getAllPendingWrites() const;
    /**
     * @symbol  ?_handleErrorStatus\@DBStorage\@\@IEAAXAEBVStatus\@leveldb\@\@\@Z
     */
    MCAPI void _handleErrorStatus(class leveldb::Status const &);
    /**
     * @symbol  ?_mergeIntoDeleteCache\@DBStorage\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    MCAPI void _mergeIntoDeleteCache(std::string const &, enum class DBHelpers::Category);
    /**
     * @symbol  ?_mergeIntoWriteCache\@DBStorage\@\@IEAAXAEBVLevelStorageWriteBatch\@\@\@Z
     */
    MCAPI void _mergeIntoWriteCache(class LevelStorageWriteBatch const &);
    /**
     * @symbol  ?_queueSaveCallback\@DBStorage\@\@IEAAX_N\@Z
     */
    MCAPI void _queueSaveCallback(bool);
    /**
     * @symbol  ?_read\@DBStorage\@\@IEBAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4Category\@DBHelpers\@\@AEBV?$function\@$$A6AXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI void _read(class gsl::basic_string_span<char const, -1>, enum class DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const;
    /**
     * @symbol  ?_readPendingWrite\@DBStorage\@\@IEBA?AUPendingWriteResult\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    MCAPI struct DBStorage::PendingWriteResult _readPendingWrite(std::string const &, enum class DBHelpers::Category) const;

//private:
    /**
     * @symbol  ?_flushWriteCacheToLevelDB\@DBStorage\@\@AEAA?AVTaskResult\@\@XZ
     */
    MCAPI class TaskResult _flushWriteCacheToLevelDB();
    /**
     * @symbol  ?_getTelemetryMessage\@DBStorage\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVStatus\@leveldb\@\@\@Z
     */
    MCAPI std::string _getTelemetryMessage(class leveldb::Status const &) const;
    /**
     * @symbol  ?_markAsCorrupted\@DBStorage\@\@AEBAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI void _markAsCorrupted(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?_scheduleNextAutoCompaction\@DBStorage\@\@AEAAXXZ
     */
    MCAPI void _scheduleNextAutoCompaction();
    /**
     * @symbol  ?_suspendAndPerformSaveAction\@DBStorage\@\@AEAA_NV?$function\@$$A6A?AVTaskResult\@\@XZ\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCAPI bool _suspendAndPerformSaveAction(class std::function<class TaskResult (void)>, class std::function<void (void)>);

protected:

private:

};