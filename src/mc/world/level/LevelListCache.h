#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class LevelListCache {
public:
    // prevent constructor by default
    LevelListCache& operator=(LevelListCache const&);
    LevelListCache(LevelListCache const&);
    LevelListCache();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addLevel@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVLevelData@@@Z
    MCVAPI void addLevel(std::string const& levelId, class LevelData&& levelData);

    // symbol: ?addObserver@LevelListCache@@UEAAXAEAVLevelLocationObserver@@@Z
    MCVAPI void addObserver(class LevelLocationObserver& observer);

    // symbol:
    // ?createBackupCopyOfWorld@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCVAPI void
    createBackupCopyOfWorld(std::string const& levelId, std::string const& newLevelId, std::string const& newName);

    // symbol:
    // ?createLevelLooseStorage@LevelListCache@@UEAA?AV?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCVAPI std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // symbol:
    // ?createLevelStorage@LevelListCache@@UEAA?AV?$OwnerPtr@VLevelStorage@@@@AEAVScheduler@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@5@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@8@V?$unique_ptr@VLevelStorageEventing@@U?$default_delete@VLevelStorageEventing@@@std@@@5@@Z
    MCVAPI class OwnerPtr<class LevelStorage> createLevelStorage(
        class Scheduler&                                                    scheduler,
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        std::chrono::nanoseconds const&                                     writeFlushInterval,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv>                       levelDbEnv,
        std::unique_ptr<class LevelStorageEventing>                         levelStorageEventing
    );

    // symbol:
    // ?createLevelStorageObserver@LevelListCache@@UEAA?AV?$unique_ptr@VLevelStorageObserver@@U?$default_delete@VLevelStorageObserver@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class LevelStorageObserver> createLevelStorageObserver();

    // symbol: ?deleteLevel@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void deleteLevel(std::string const& levelId);

    // symbol:
    // ?deleteLevelFiles@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void deleteLevelFiles(std::string const& levelId);

    // symbol:
    // ?getBasePath@LevelListCache@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> const getBasePath() const;

    // symbol:
    // ?getLevelData@LevelListCache@@UEAAPEAVLevelData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class LevelData* getLevelData(std::string const& levelId);

    // symbol:
    // ?getLevelList@LevelListCache@@UEAAXAEAV?$vector@ULevelSummary@@V?$allocator@ULevelSummary@@@std@@@std@@_N11@Z
    MCVAPI void getLevelList(
        std::vector<struct LevelSummary>& dest,
        bool                              includeShallowSummaries,
        bool                              includePartiallyCopiedLevels,
        bool                              includeBetaRetailLevels
    );

    // symbol:
    // ?getLevelSummary@LevelListCache@@UEAAPEAULevelSummary@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI struct LevelSummary* getLevelSummary(std::string const& levelId);

    // symbol:
    // ?getLevelSummaryByName@LevelListCache@@UEAAPEBULevelSummary@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI struct LevelSummary const* getLevelSummaryByName(std::string const& levelName);

    // symbol: ?getOrCreateLevelSummary@LevelListCache@@UEAAPEAULevelSummary@@AEBVPath@Core@@@Z
    MCVAPI struct LevelSummary* getOrCreateLevelSummary(class Core::Path const& directory);

    // symbol:
    // ?getShallowLevelSummary@LevelListCache@@UEAAPEAULevelSummary@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI struct LevelSummary* getShallowLevelSummary(std::string const& levelId);

    // symbol: ?hasCachedLevels@LevelListCache@@UEBA_N_N@Z
    MCVAPI bool hasCachedLevels(bool) const;

    // symbol: ?hasLevelWithId@LevelListCache@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool hasLevelWithId(std::string const& levelId);

    // symbol: ?onSave@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onSave(std::string const& levelId);

    // symbol: ?onStorageChanged@LevelListCache@@UEAAXXZ
    MCVAPI void onStorageChanged();

    // symbol: ?postDeleteLevel@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void postDeleteLevel(std::string const& levelId);

    // symbol: ?refreshLevel@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void refreshLevel(std::string const& levelId);

    // symbol: ?removeObserver@LevelListCache@@UEAAXAEAVLevelLocationObserver@@@Z
    MCVAPI void removeObserver(class LevelLocationObserver& observer);

    // symbol:
    // ?renameAndSaveLevelData@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVLevelData@@@Z
    MCVAPI void renameAndSaveLevelData(std::string const&, std::string const&, class LevelData const&);

    // symbol: ?renameLevel@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void renameLevel(std::string const& levelId, std::string const& newLevelName);

    // symbol:
    // ?saveLevelData@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelData@@@Z
    MCVAPI void saveLevelData(std::string const& levelId, class LevelData const& levelData);

    // symbol:
    // ?updateLevelCache@LevelListCache@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void updateLevelCache(std::string const& levelId);

    // symbol: ??0LevelListCache@@QEAA@AEAVLevelStorageSource@@$$QEAV?$function@$$A6A_NXZ@std@@@Z
    MCAPI LevelListCache(class LevelStorageSource& levelStorageSource, std::function<bool()>&& checkIsSafeToFlushCache);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addOrReplaceCache@LevelListCache@@AEAAPEAVLevelCache@@AEBVPath@Core@@@Z
    MCAPI class LevelCache* _addOrReplaceCache(class Core::Path const& path);

    // symbol: ?_addToCache@LevelListCache@@AEAAPEAVLevelCache@@AEBVPath@Core@@@Z
    MCAPI class LevelCache* _addToCache(class Core::Path const& path);

    // symbol:
    // ?_addToCache@LevelListCache@@AEAAPEAVLevelCache@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV2@@Z
    MCAPI class LevelCache* _addToCache(std::string const& levelId, class LevelCache&& levelCache);

    // symbol:
    // ?_createAndAddToCache@LevelListCache@@AEAAPEAVLevelCache@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
    MCAPI class LevelCache* _createAndAddToCache(std::string const& levelId, class Core::Path const& directory);

    // symbol:
    // ?_getLevelCache@LevelListCache@@AEAAPEAVLevelCache@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class LevelCache* _getLevelCache(std::string const& levelId);

    // symbol:
    // ?_getLevelSummary@LevelListCache@@AEAAPEAULevelSummary@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct LevelSummary* _getLevelSummary(std::string const& levelId);

    // symbol:
    // ?_notifyLevelUpdated@LevelListCache@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _notifyLevelUpdated(std::string const& levelId);

    // symbol:
    // ?_refreshSummary@LevelListCache@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelCache@@@Z
    MCAPI void _refreshSummary(std::string const& levelId, class LevelCache& cache);

    // NOLINTEND
};
