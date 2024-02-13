#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/enums/CompactionStatus.h"
#include "mc/enums/StorageVersion.h"
#include "mc/enums/d_b_helpers/Category.h"

// auto generated forward declare list
// clang-format off
namespace Core { struct LevelStorageResult; }
// clang-format on

class LevelStorage {
public:
    // prevent constructor by default
    LevelStorage& operator=(LevelStorage const&);
    LevelStorage(LevelStorage const&);
    LevelStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LevelStorage@@UEAA@XZ
    virtual ~LevelStorage();

    // vIndex: 1, symbol:
    // ?addStorageObserver@DBStorage@@UEAAXV?$unique_ptr@VLevelStorageObserver@@U?$default_delete@VLevelStorageObserver@@@std@@@std@@@Z
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver> observer) = 0;

    // vIndex: 2, symbol:
    // ?getCompoundTag@DBStorage@@UEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
    virtual std::unique_ptr<class CompoundTag>
    getCompoundTag(std::string const& key, ::DBHelpers::Category category) = 0;

    // vIndex: 3, symbol:
    // ?hasKey@DBStorage@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4Category@DBHelpers@@@Z
    virtual bool hasKey(std::string_view key, ::DBHelpers::Category category) const = 0;

    // vIndex: 4, symbol:
    // ?forEachKeyWithPrefix@DBStorage@@UEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4Category@DBHelpers@@AEBV?$function@$$A6AXV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z@3@@Z
    virtual void forEachKeyWithPrefix(
        std::string_view                                               prefix,
        ::DBHelpers::Category                                          category,
        std::function<void(std::string_view, std::string_view)> const& callback
    ) const = 0;

    // vIndex: 5, symbol: ?loadLevelData@DBStorage@@UEAA_NAEAVLevelData@@@Z
    virtual bool loadLevelData(class LevelData& data) = 0;

    // vIndex: 6, symbol:
    // ?createChunkStorage@DBStorage@@UEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    virtual std::unique_ptr<class ChunkSource>
    createChunkStorage(std::unique_ptr<class ChunkSource> generator, ::StorageVersion) = 0;

    // vIndex: 7, symbol: ?saveLevelData@DBStorage@@UEAAXAEBVLevelData@@@Z
    virtual void saveLevelData(class LevelData const& levelData) = 0;

    // vIndex: 8, symbol:
    // ?getFullPath@DBStorage@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const& getFullPath() const = 0;

    // vIndex: 9, symbol:
    // ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@$$QEAV43@W4Category@DBHelpers@@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(std::string const& key, std::string&& data, ::DBHelpers::Category category) = 0;

    // vIndex: 10, symbol:
    // ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBVLevelStorageWriteBatch@@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(class LevelStorageWriteBatch const& batch) = 0;

    // vIndex: 11, symbol:
    // ?deleteData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    deleteData(std::string const& key, ::DBHelpers::Category category) = 0;

    // vIndex: 12, symbol:
    // ?getStatistics@DBStorage@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void getStatistics(std::string& stats) const = 0;

    // vIndex: 13, symbol: ?clonePlayerData@LevelStorage@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
    virtual bool clonePlayerData(std::string_view fromKey, std::string_view toKey);

    // vIndex: 14, symbol: ?getLevelStorageState@DBStorage@@UEBA?AULevelStorageResult@Core@@XZ
    virtual struct Core::LevelStorageResult getLevelStorageState() const = 0;

    // vIndex: 15, symbol: ?startShutdown@DBStorage@@UEAAXXZ
    virtual void startShutdown() = 0;

    // vIndex: 16, symbol: ?isShuttingDown@DBStorage@@UEBA_NXZ
    virtual bool isShuttingDown() const = 0;

    // vIndex: 17, symbol: ?checkShutdownDone@DBStorage@@UEAA_NXZ
    virtual bool checkShutdownDone() = 0;

    // vIndex: 18, symbol:
    // ?loadData@LevelStorage@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
    virtual bool loadData(std::string_view key, std::string& buffer, ::DBHelpers::Category category) const;

    // vIndex: 19, symbol: ?getState@DBStorage@@UEBA?AULevelStorageResult@Core@@XZ
    virtual struct Core::LevelStorageResult getState() const = 0;

    // vIndex: 20, symbol:
    // ?createSnapshot@DBStorage@@UEAA?AV?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@_N@Z
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const&, bool) = 0;

    // vIndex: 21, symbol: ?releaseSnapshot@DBStorage@@UEAAXXZ
    virtual void releaseSnapshot() = 0;

    // vIndex: 22, symbol: ?compactStorage@DBStorage@@UEAAXXZ
    virtual void compactStorage() = 0;

    // vIndex: 23, symbol: ?syncAndSuspendStorage@DBStorage@@UEAAXXZ
    virtual void syncAndSuspendStorage() = 0;

    // vIndex: 24, symbol: ?resumeStorage@DBStorage@@UEAAXXZ
    virtual void resumeStorage() = 0;

    // vIndex: 25, symbol: ?setFlushAllowed@DBStorage@@UEAAX_N@Z
    virtual void setFlushAllowed(bool flushAllowed) = 0;

    // vIndex: 26, symbol: ?flushToPermanentStorage@DBStorage@@UEAAXXZ
    virtual void flushToPermanentStorage() = 0;

    // vIndex: 27, symbol: ?freeCaches@LevelStorage@@UEAAXXZ
    virtual void freeCaches();

    // vIndex: 28, symbol: ?setCompactionCallback@DBStorage@@UEAAXV?$function@$$A6AXW4CompactionStatus@@@Z@std@@@Z
    virtual void setCompactionCallback(std::function<void(::CompactionStatus)> callback) = 0;

    // vIndex: 29, symbol: ?setCriticalSyncSaveCallback@DBStorage@@UEAAXV?$function@$$A6AXXZ@std@@@Z
    virtual void setCriticalSyncSaveCallback(std::function<void()> callback) = 0;

    // vIndex: 30, symbol: ?corruptLevel@LevelStorage@@UEAAXXZ
    virtual void corruptLevel();

    // symbol:
    // ?getServerId@LevelStorage@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUPlayerStorageIds@@@Z
    MCAPI std::string getServerId(struct PlayerStorageIds const&);

    // symbol:
    // ?getServerId@LevelStorage@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@_N@Z
    MCAPI std::string getServerId(class Player const&, bool);

    // symbol:
    // ?loadAllPlayerIDs@LevelStorage@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_N@Z
    MCAPI std::vector<std::string> loadAllPlayerIDs(bool includeLocalPlayer = true) const;

    // symbol:
    // ?loadPlayerDataFromTag@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    MCAPI std::unique_ptr<class CompoundTag> loadPlayerDataFromTag(std::string_view saveTag);

    // symbol:
    // ?loadServerPlayerData@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVPlayer@@_N@Z
    MCAPI std::unique_ptr<class CompoundTag> loadServerPlayerData(class Player const& client, bool isXboxLive);

    // symbol: ?save@LevelStorage@@QEAAXAEAVPlayer@@@Z
    MCAPI void save(class Player&);

    // symbol:
    // ?saveData@LevelStorage@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVCompoundTag@@W4Category@DBHelpers@@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          saveData(std::string const& key, class CompoundTag const& tag, ::DBHelpers::Category category);

    // symbol:
    // ?LEGACY_CONSOLE_PLAYER_PREFIX@LevelStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const LEGACY_CONSOLE_PLAYER_PREFIX;

    // symbol: ?LOCAL_PLAYER_TAG@LevelStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const LOCAL_PLAYER_TAG;

    // NOLINTEND
};
