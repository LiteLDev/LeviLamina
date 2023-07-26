#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class LevelListCache {

public:
    // prevent constructor by default
    LevelListCache& operator=(LevelListCache const&) = delete;
    LevelListCache(LevelListCache const&)            = delete;
    LevelListCache()                                 = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELLISTCACHE
    /**
     * @symbol
     * ?addLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVLevelData\@\@\@Z
     */
    MCVAPI void addLevel(std::string const&, class LevelData&&); // NOLINT
    /**
     * @symbol ?addObserver\@LevelListCache\@\@UEAAXAEAVLevelLocationObserver\@\@\@Z
     */
    MCVAPI void addObserver(class LevelLocationObserver&); // NOLINT
    /**
     * @symbol
     * ?createBackupCopyOfWorld\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?createLevelLooseStorage\@LevelListCache\@\@UEAA?AV?$unique_ptr\@VLevelLooseFileStorage\@\@U?$default_delete\@VLevelLooseFileStorage\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI std::unique_ptr<class LevelLooseFileStorage>
    createLevelLooseStorage(std::string const&, class ContentIdentity const&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&); // NOLINT
    /**
     * @symbol
     * ?createLevelStorage\@LevelListCache\@\@UEAA?AV?$OwnerPtrT\@U?$SharePtrRefTraits\@VLevelStorage\@\@\@\@\@\@AEAVScheduler\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@5\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@8\@V?$unique_ptr\@VLevelStorageEventing\@\@U?$default_delete\@VLevelStorageEventing\@\@\@std\@\@\@5\@\@Z
     */
    MCVAPI class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>> createLevelStorage(class Scheduler&, std::string const&, class ContentIdentity const&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const&, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>, std::unique_ptr<class LevelStorageEventing>); // NOLINT
    /**
     * @symbol
     * ?createLevelStorageObserver\@LevelListCache\@\@UEAA?AV?$unique_ptr\@VLevelStorageObserver\@\@U?$default_delete\@VLevelStorageObserver\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class LevelStorageObserver> createLevelStorageObserver(); // NOLINT
    /**
     * @symbol
     * ?deleteLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void deleteLevel(std::string const&); // NOLINT
    /**
     * @symbol
     * ?deleteLevelFiles\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void deleteLevelFiles(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getBasePath\@LevelListCache\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> const getBasePath() const; // NOLINT
    /**
     * @symbol
     * ?getLevelData\@LevelListCache\@\@UEAAPEAVLevelData\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class LevelData* getLevelData(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getLevelList\@LevelListCache\@\@UEAAXAEAV?$vector\@ULevelSummary\@\@V?$allocator\@ULevelSummary\@\@\@std\@\@\@std\@\@_N11\@Z
     */
    MCVAPI void getLevelList(std::vector<struct LevelSummary>&, bool, bool, bool); // NOLINT
    /**
     * @symbol
     * ?getLevelSummary\@LevelListCache\@\@UEAAPEAULevelSummary\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI struct LevelSummary* getLevelSummary(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getLevelSummaryByName\@LevelListCache\@\@UEAAPEBULevelSummary\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI struct LevelSummary const* getLevelSummaryByName(std::string const&); // NOLINT
    /**
     * @symbol ?getOrCreateLevelSummary\@LevelListCache\@\@UEAAPEAULevelSummary\@\@AEBVPath\@Core\@\@\@Z
     */
    MCVAPI struct LevelSummary* getOrCreateLevelSummary(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?getShallowLevelSummary\@LevelListCache\@\@UEAAPEAULevelSummary\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI struct LevelSummary* getShallowLevelSummary(std::string const&); // NOLINT
    /**
     * @symbol
     * ?hasLevelWithId\@LevelListCache\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool hasLevelWithId(std::string const&); // NOLINT
    /**
     * @symbol
     * ?onSave\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onSave(std::string const&); // NOLINT
    /**
     * @symbol ?onStorageChanged\@LevelListCache\@\@UEAAXXZ
     */
    MCVAPI void onStorageChanged(); // NOLINT
    /**
     * @symbol
     * ?postDeleteLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void postDeleteLevel(std::string const&); // NOLINT
    /**
     * @symbol
     * ?refreshLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void refreshLevel(std::string const&); // NOLINT
    /**
     * @symbol ?removeObserver\@LevelListCache\@\@UEAAXAEAVLevelLocationObserver\@\@\@Z
     */
    MCVAPI void removeObserver(class LevelLocationObserver&); // NOLINT
    /**
     * @symbol
     * ?renameLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void renameLevel(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?saveLevelData\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelData\@\@\@Z
     */
    MCVAPI void saveLevelData(std::string const&, class LevelData const&); // NOLINT
    /**
     * @symbol
     * ?updateLevelCache\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateLevelCache(std::string const&); // NOLINT
#endif
    /**
     * @symbol ??0LevelListCache\@\@QEAA\@AEAVLevelStorageSource\@\@$$QEAV?$function\@$$A6A_NXZ\@std\@\@\@Z
     */
    MCAPI LevelListCache(class LevelStorageSource&, class std::function<bool(void)>&&); // NOLINT

    // private:
    /**
     * @symbol ?_addOrReplaceCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class LevelCache* _addOrReplaceCache(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?_addToCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV2\@\@Z
     */
    MCAPI class LevelCache* _addToCache(std::string const&, class LevelCache&&); // NOLINT
    /**
     * @symbol ?_addToCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class LevelCache* _addToCache(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?_createAndAddToCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class LevelCache* _createAndAddToCache(std::string const&, class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?_getLevelCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LevelCache* _getLevelCache(std::string const&); // NOLINT
    /**
     * @symbol
     * ?_getLevelSummary\@LevelListCache\@\@AEAAPEAULevelSummary\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct LevelSummary* _getLevelSummary(std::string const&); // NOLINT
    /**
     * @symbol
     * ?_notifyLevelUpdated\@LevelListCache\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _notifyLevelUpdated(std::string const&); // NOLINT
    /**
     * @symbol
     * ?_refreshSummary\@LevelListCache\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelCache\@\@\@Z
     */
    MCAPI void _refreshSummary(std::string const&, class LevelCache&); // NOLINT

private:
};
