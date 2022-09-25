/**
 * @file  DBStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~DBStorage();
    /**
     * @hash   459551747
     * @vftbl  1
     * @symbol ?addStorageObserver@DBStorage@@UEAAXV?$unique_ptr@VLevelStorageObserver@@U?$default_delete@VLevelStorageObserver@@@std@@@std@@@Z
     */
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>);
    /**
     * @hash   1024342623
     * @vftbl  2
     * @symbol ?getCompoundTag@DBStorage@@UEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
     */
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const &, enum DBHelpers::Category);
    /**
     * @hash   2116715562
     * @vftbl  3
     * @symbol ?hasKey@DBStorage@@UEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@W4Category@DBHelpers@@@Z
     */
    virtual bool hasKey(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category) const;
    /**
     * @hash   -132354359
     * @vftbl  4
     * @symbol ?forEachKeyWithPrefix@DBStorage@@UEBAXV?$basic_string_span@$$CBD$0?0@gsl@@W4Category@DBHelpers@@AEBV?$function@$$A6AXV?$basic_string_span@$$CBD$0?0@gsl@@0@Z@std@@@Z
     */
    virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const;
    /**
     * @hash   1764232106
     * @vftbl  5
     * @symbol ?loadLevelData@DBStorage@@UEAA_NAEAVLevelData@@@Z
     */
    virtual bool loadLevelData(class LevelData &);
    /**
     * @hash   1815407409
     * @vftbl  6
     * @symbol ?createChunkStorage@DBStorage@@UEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
     */
    virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, enum StorageVersion);
    /**
     * @hash   -1502325792
     * @vftbl  7
     * @symbol ?saveLevelData@DBStorage@@UEAAXAEBVLevelData@@@Z
     */
    virtual void saveLevelData(class LevelData const &);
    /**
     * @hash   111785801
     * @vftbl  8
     * @symbol ?getFullPath@DBStorage@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const & getFullPath() const;
    /**
     * @hash   -777568215
     * @vftbl  9
     * @symbol ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@$$QEAV43@W4Category@DBHelpers@@@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, std::string &&, enum DBHelpers::Category);
    /**
     * @hash   -588404266
     * @vftbl  10
     * @symbol ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBVLevelStorageWriteBatch@@@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const &);
    /**
     * @hash   626100400
     * @vftbl  11
     * @symbol ?deleteData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const &, enum DBHelpers::Category);
    /**
     * @hash   246160859
     * @vftbl  12
     * @symbol ?syncIO@DBStorage@@UEAAXXZ
     */
    virtual void syncIO();
    /**
     * @hash   -1705171845
     * @vftbl  13
     * @symbol ?getStatistics@DBStorage@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void getStatistics(std::string &) const;
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @hash   1246463394
     * @vftbl  16
     * @symbol ?startShutdown@DBStorage@@UEAAXXZ
     */
    virtual void startShutdown();
    /**
     * @hash   127874953
     * @vftbl  17
     * @symbol ?isShuttingDown@DBStorage@@UEBA_NXZ
     */
    virtual bool isShuttingDown() const;
    /**
     * @hash   -1373212292
     * @vftbl  18
     * @symbol ?checkShutdownDone@DBStorage@@UEAA_NXZ
     */
    virtual bool checkShutdownDone();
    /**
     * @hash   1583503300
     * @vftbl  19
     * @symbol ?loadData@DBStorage@@UEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Category@DBHelpers@@@Z
     */
    virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string &, enum DBHelpers::Category) const;
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   -158127549
     * @vftbl  21
     * @symbol ?createSnapshot@DBStorage@@UEAA?AV?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const &);
    /**
     * @hash   -61632715
     * @vftbl  22
     * @symbol ?releaseSnapshot@DBStorage@@UEAAXXZ
     */
    virtual void releaseSnapshot();
    /**
     * @hash   438639890
     * @vftbl  23
     * @symbol ?compactStorage@DBStorage@@UEAAXXZ
     */
    virtual void compactStorage();
    /**
     * @hash   -1178351051
     * @vftbl  24
     * @symbol ?syncAndSuspendStorage@DBStorage@@UEAAXXZ
     */
    virtual void syncAndSuspendStorage();
    /**
     * @hash   641973352
     * @vftbl  25
     * @symbol ?resumeStorage@DBStorage@@UEAAXXZ
     */
    virtual void resumeStorage();
    /**
     * @hash   -1547980212
     * @vftbl  26
     * @symbol ?setFlushAllowed@DBStorage@@UEAAX_N@Z
     */
    virtual void setFlushAllowed(bool);
    /**
     * @hash   451129766
     * @vftbl  27
     * @symbol ?flushToPermanentStorage@DBStorage@@UEAAXXZ
     */
    virtual void flushToPermanentStorage();
    /**
     * @hash   -2026203257
     * @vftbl  28
     * @symbol ?freeCaches@DBStorage@@UEAAXXZ
     */
    virtual void freeCaches();
    /**
     * @hash   544802647
     * @vftbl  29
     * @symbol ?setCompactionCallback@DBStorage@@UEAAXV?$function@$$A6AXW4CompactionStatus@@@Z@std@@@Z
     */
    virtual void setCompactionCallback(class std::function<void (enum CompactionStatus)>);
    /**
     * @hash   632012029
     * @vftbl  30
     * @symbol ?setCriticalSyncSaveCallback@DBStorage@@UEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    virtual void setCriticalSyncSaveCallback(class std::function<void (void)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DBSTORAGE
    /**
     * @hash   1503168568
     * @symbol ?getLevelStorageState@DBStorage@@UEBA?AULevelStorageResult@Core@@XZ
     */
    MCVAPI struct Core::LevelStorageResult getLevelStorageState() const;
    /**
     * @hash   -2078571857
     * @symbol ?getState@DBStorage@@UEBA?AULevelStorageResult@Core@@XZ
     */
    MCVAPI struct Core::LevelStorageResult getState() const;
#endif
    /**
     * @hash   -28775647
     * @symbol ??0DBStorage@@QEAA@UDBStorageConfig@@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@gsl@@@Z
     */
    MCAPI DBStorage(struct DBStorageConfig, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>);
    /**
     * @hash   -87107908
     * @symbol ?_notifyChunkStorageDestroyed@DBStorage@@QEAAXAEAVDBChunkStorage@@@Z
     */
    MCAPI void _notifyChunkStorageDestroyed(class DBChunkStorage &);
    /**
     * @hash   316487921
     * @symbol ?tryRepair@DBStorage@@QEBA_NAEBVPath@Core@@@Z
     */
    MCAPI bool tryRepair(class Core::Path const &) const;

//protected:
    /**
     * @hash   -1177283781
     * @symbol ?_findCacheEntry@DBStorage@@IEAA?AU?$pair@PEAVLevelStorageWriteBatch@@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UBatchEntry@LevelStorageWriteBatch@@@std@@@std@@@std@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI struct std::pair<class LevelStorageWriteBatch *, class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>> _findCacheEntry(std::string const &);
    /**
     * @hash   1753268027
     * @symbol ?_getAllPendingWrites@DBStorage@@IEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UPendingWriteResult@DBStorage@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UPendingWriteResult@DBStorage@@@std@@@2@@std@@XZ
     */
    MCAPI class std::map<std::string, struct DBStorage::PendingWriteResult, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, struct DBStorage::PendingWriteResult>>> _getAllPendingWrites() const;
    /**
     * @hash   878678716
     * @symbol ?_handleErrorStatus@DBStorage@@IEAAXAEBVStatus@leveldb@@@Z
     */
    MCAPI void _handleErrorStatus(class leveldb::Status const &);
    /**
     * @symbol ?_mergeIntoDeleteCache@DBStorage@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Category@DBHelpers@@@Z
     */
    MCAPI void _mergeIntoDeleteCache(std::string const &, enum DBHelpers::Category);
    /**
     * @hash   1889381877
     * @symbol ?_mergeIntoWriteCache@DBStorage@@IEAAXAEBVLevelStorageWriteBatch@@@Z
     */
    MCAPI void _mergeIntoWriteCache(class LevelStorageWriteBatch const &);
    /**
     * @hash   1321435002
     * @symbol ?_queueSaveCallback@DBStorage@@IEAAX_N@Z
     */
    MCAPI void _queueSaveCallback(bool);
    /**
     * @hash   -1300964339
     * @symbol ?_read@DBStorage@@IEBAXV?$basic_string_span@$$CBD$0?0@gsl@@W4Category@DBHelpers@@AEBV?$function@$$A6AXV?$basic_string_span@$$CBD$0?0@gsl@@0@Z@std@@@Z
     */
    MCAPI void _read(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const;
    /**
     * @hash   1092754645
     * @symbol ?_readPendingWrite@DBStorage@@IEBA?AUPendingWriteResult@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Category@DBHelpers@@@Z
     */
    MCAPI struct DBStorage::PendingWriteResult _readPendingWrite(std::string const &, enum DBHelpers::Category) const;

//private:
    /**
     * @hash   -1681321963
     * @symbol ?_flushWriteCacheToLevelDB@DBStorage@@AEAA?AVTaskResult@@XZ
     */
    MCAPI class TaskResult _flushWriteCacheToLevelDB();
    /**
     * @hash   -1470742236
     * @symbol ?_getTelemetryMessage@DBStorage@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVStatus@leveldb@@@Z
     */
    MCAPI std::string _getTelemetryMessage(class leveldb::Status const &) const;
    /**
     * @hash   -752520515
     * @symbol ?_markAsCorrupted@DBStorage@@AEBAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI void _markAsCorrupted(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   1605523788
     * @symbol ?_scheduleNextAutoCompaction@DBStorage@@AEAAXXZ
     */
    MCAPI void _scheduleNextAutoCompaction();
    /**
     * @hash   1506028713
     * @symbol ?_suspendAndPerformSaveAction@DBStorage@@AEAA_NV?$function@$$A6A?AVTaskResult@@XZ@std@@V?$function@$$A6AXXZ@3@@Z
     */
    MCAPI bool _suspendAndPerformSaveAction(class std::function<class TaskResult (void)>, class std::function<void (void)>);

protected:

private:

};