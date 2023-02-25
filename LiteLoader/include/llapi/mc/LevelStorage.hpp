/**
 * @file  LevelStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelStorage.
 *
 */
class LevelStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGE
public:
    class LevelStorage& operator=(class LevelStorage const &) = delete;
    LevelStorage(class LevelStorage const &) = delete;
    LevelStorage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelStorage();
    /**
     * @vftbl  1
     * @symbol  ?addStorageObserver\@DBStorage\@\@UEAAXV?$unique_ptr\@VLevelStorageObserver\@\@U?$default_delete\@VLevelStorageObserver\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>) = 0;
    /**
     * @vftbl  2
     * @symbol  ?getCompoundTag\@DBStorage\@\@UEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const &, enum class DBHelpers::Category) = 0;
    /**
     * @vftbl  3
     * @symbol  ?hasKey\@DBStorage\@\@UEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual bool hasKey(class gsl::basic_string_span<char const, -1>, enum class DBHelpers::Category) const = 0;
    /**
     * @vftbl  4
     * @symbol  ?forEachKeyWithPrefix\@DBStorage\@\@UEBAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4Category\@DBHelpers\@\@AEBV?$function\@$$A6AXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@0\@Z\@std\@\@\@Z
     */
    virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, enum class DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const = 0;
    /**
     * @vftbl  5
     * @symbol  ?loadLevelData\@DBStorage\@\@UEAA_NAEAVLevelData\@\@\@Z
     */
    virtual bool loadLevelData(class LevelData &) = 0;
    /**
     * @vftbl  6
     * @symbol  ?createChunkStorage\@DBStorage\@\@UEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, enum class StorageVersion) = 0;
    /**
     * @vftbl  7
     * @symbol  ?saveLevelData\@DBStorage\@\@UEAAXAEBVLevelData\@\@\@Z
     */
    virtual void saveLevelData(class LevelData const &) = 0;
    /**
     * @vftbl  8
     * @symbol  ?getFullPath\@DBStorage\@\@UEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const & getFullPath() const = 0;
    /**
     * @vftbl  9
     * @symbol  ?saveData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@$$QEAV43\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, std::string &&, enum class DBHelpers::Category) = 0;
    /**
     * @vftbl  10
     * @symbol  ?saveData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBVLevelStorageWriteBatch\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const &) = 0;
    /**
     * @vftbl  11
     * @symbol  ?deleteData\@DBStorage\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const &, enum class DBHelpers::Category) = 0;
    /**
     * @vftbl  12
     * @symbol  ?getStatistics\@DBStorage\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void getStatistics(std::string &) const = 0;
    /**
     * @vftbl  13
     * @symbol  ?clonePlayerData\@LevelStorage\@\@UEAA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@0\@Z
     */
    virtual bool clonePlayerData(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14() = 0;
    /**
     * @vftbl  15
     * @symbol  ?startShutdown\@DBStorage\@\@UEAAXXZ
     */
    virtual void startShutdown() = 0;
    /**
     * @vftbl  16
     * @symbol  ?isShuttingDown\@DBStorage\@\@UEBA_NXZ
     */
    virtual bool isShuttingDown() const = 0;
    /**
     * @vftbl  17
     * @symbol  ?checkShutdownDone\@DBStorage\@\@UEAA_NXZ
     */
    virtual bool checkShutdownDone() = 0;
    /**
     * @vftbl  18
     * @symbol  ?loadData\@LevelStorage\@\@UEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string &, enum class DBHelpers::Category) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19() = 0;
    /**
     * @vftbl  20
     * @symbol  ?createSnapshot\@DBStorage\@\@UEAA?AV?$vector\@USnapshotFilenameAndLength\@\@V?$allocator\@USnapshotFilenameAndLength\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const &) = 0;
    /**
     * @vftbl  21
     * @symbol  ?releaseSnapshot\@DBStorage\@\@UEAAXXZ
     */
    virtual void releaseSnapshot() = 0;
    /**
     * @vftbl  22
     * @symbol  ?compactStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void compactStorage() = 0;
    /**
     * @vftbl  23
     * @symbol  ?syncAndSuspendStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void syncAndSuspendStorage() = 0;
    /**
     * @vftbl  24
     * @symbol  ?resumeStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void resumeStorage() = 0;
    /**
     * @vftbl  25
     * @symbol  ?setFlushAllowed\@DBStorage\@\@UEAAX_N\@Z
     */
    virtual void setFlushAllowed(bool) = 0;
    /**
     * @vftbl  26
     * @symbol  ?flushToPermanentStorage\@DBStorage\@\@UEAAXXZ
     */
    virtual void flushToPermanentStorage() = 0;
    /**
     * @vftbl  27
     * @symbol  ?freeCaches\@LevelStorage\@\@UEAAXXZ
     */
    virtual void freeCaches();
    /**
     * @vftbl  28
     * @symbol  ?setCompactionCallback\@DBStorage\@\@UEAAXV?$function\@$$A6AXW4CompactionStatus\@\@\@Z\@std\@\@\@Z
     */
    virtual void setCompactionCallback(class std::function<void (enum class CompactionStatus)>) = 0;
    /**
     * @vftbl  29
     * @symbol  ?setCriticalSyncSaveCallback\@DBStorage\@\@UEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void setCriticalSyncSaveCallback(class std::function<void (void)>) = 0;
    /**
     * @vftbl  30
     * @symbol  ?corruptLevel\@LevelStorage\@\@UEAAXXZ
     */
    virtual void corruptLevel();
    /**
     * @symbol  ?getServerId\@LevelStorage\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUPlayerStorageIds\@\@\@Z
     */
    MCAPI std::string getServerId(struct PlayerStorageIds const &);
    /**
     * @symbol  ?getServerId\@LevelStorage\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@_N\@Z
     */
    MCAPI std::string getServerId(class Player const &, bool);
    /**
     * @symbol  ?loadAllPlayerIDs\@LevelStorage\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_N\@Z
     */
    MCAPI std::vector<std::string> loadAllPlayerIDs(bool) const;
    /**
     * @symbol  ?loadPlayerDataFromTag\@LevelStorage\@\@QEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> loadPlayerDataFromTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?loadServerPlayerData\@LevelStorage\@\@QEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBVPlayer\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> loadServerPlayerData(class Player const &, bool);
    /**
     * @symbol  ?save\@LevelStorage\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void save(class Actor &);
    /**
     * @symbol  ?saveData\@LevelStorage\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVCompoundTag\@\@W4Category\@DBHelpers\@\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, class CompoundTag const &, enum class DBHelpers::Category);
    /**
     * @symbol  ?LEGACY_CONSOLE_PLAYER_PREFIX\@LevelStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const LEGACY_CONSOLE_PLAYER_PREFIX;
    /**
     * @symbol  ?LOCAL_PLAYER_TAG\@LevelStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const LOCAL_PLAYER_TAG;

};