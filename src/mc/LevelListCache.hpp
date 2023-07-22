/**
 * @file  LevelListCache.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LevelListCache {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELLISTCACHE
public:
    class LevelListCache& operator=(class LevelListCache const &) = delete;
    LevelListCache(class LevelListCache const &) = delete;
    LevelListCache() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELLISTCACHE
    /**
     * @symbol  ?addLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVLevelData\@\@\@Z
     */
    MCVAPI void addLevel(std::string const &, class LevelData &&);
    /**
     * @symbol  ?addObserver\@LevelListCache\@\@UEAAXAEAVLevelLocationObserver\@\@\@Z
     */
    MCVAPI void addObserver(class LevelLocationObserver &);
    /**
     * @symbol  ?createBackupCopyOfWorld\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCVAPI void createBackupCopyOfWorld(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?createLevelLooseStorage\@LevelListCache\@\@UEAA?AV?$unique_ptr\@VLevelLooseFileStorage\@\@U?$default_delete\@VLevelLooseFileStorage\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(std::string const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @symbol  ?createLevelStorage\@LevelListCache\@\@UEAA?AV?$unique_ptr\@VLevelStorage\@\@U?$default_delete\@VLevelStorage\@\@\@std\@\@\@std\@\@AEAVScheduler\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@3\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@8\@V?$unique_ptr\@VLevelStorageEventing\@\@U?$default_delete\@VLevelStorageEventing\@\@\@std\@\@\@3\@\@Z
     */
    MCVAPI std::unique_ptr<class LevelStorage> createLevelStorage(class Scheduler &, std::string const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>, std::unique_ptr<class LevelStorageEventing>);
    /**
     * @symbol  ?createLevelStorageObserver\@LevelListCache\@\@UEAA?AV?$unique_ptr\@VLevelStorageObserver\@\@U?$default_delete\@VLevelStorageObserver\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class LevelStorageObserver> createLevelStorageObserver();
    /**
     * @symbol  ?deleteLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void deleteLevel(std::string const &);
    /**
     * @symbol  ?deleteLevelFiles\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void deleteLevelFiles(std::string const &);
    /**
     * @symbol  ?getBasePath\@LevelListCache\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> const getBasePath() const;
    /**
     * @symbol  ?getLevelData\@LevelListCache\@\@UEAAPEAVLevelData\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class LevelData * getLevelData(std::string const &);
    /**
     * @symbol  ?getLevelList\@LevelListCache\@\@UEAAXAEAV?$vector\@ULevelSummary\@\@V?$allocator\@ULevelSummary\@\@\@std\@\@\@std\@\@_N11\@Z
     */
    MCVAPI void getLevelList(std::vector<struct LevelSummary> &, bool, bool, bool);
    /**
     * @symbol  ?getLevelSummary\@LevelListCache\@\@UEAAPEAULevelSummary\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI struct LevelSummary * getLevelSummary(std::string const &);
    /**
     * @symbol  ?getLevelSummaryByName\@LevelListCache\@\@UEAAPEBULevelSummary\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI struct LevelSummary const * getLevelSummaryByName(std::string const &);
    /**
     * @symbol  ?getOrCreateLevelSummary\@LevelListCache\@\@UEAAPEAULevelSummary\@\@AEBVPath\@Core\@\@\@Z
     */
    MCVAPI struct LevelSummary * getOrCreateLevelSummary(class Core::Path const &);
    /**
     * @symbol  ?getShallowLevelSummary\@LevelListCache\@\@UEAAPEAULevelSummary\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI struct LevelSummary * getShallowLevelSummary(std::string const &);
    /**
     * @symbol  ?hasLevelWithId\@LevelListCache\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool hasLevelWithId(std::string const &);
    /**
     * @symbol  ?onSave\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onSave(std::string const &);
    /**
     * @symbol  ?onStorageChanged\@LevelListCache\@\@UEAAXXZ
     */
    MCVAPI void onStorageChanged();
    /**
     * @symbol  ?postDeleteLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void postDeleteLevel(std::string const &);
    /**
     * @symbol  ?refreshLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void refreshLevel(std::string const &);
    /**
     * @symbol  ?removeObserver\@LevelListCache\@\@UEAAXAEAVLevelLocationObserver\@\@\@Z
     */
    MCVAPI void removeObserver(class LevelLocationObserver &);
    /**
     * @symbol  ?renameLevel\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void renameLevel(std::string const &, std::string const &);
    /**
     * @symbol  ?saveLevelData\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelData\@\@\@Z
     */
    MCVAPI void saveLevelData(std::string const &, class LevelData const &);
    /**
     * @symbol  ?updateLevelCache\@LevelListCache\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateLevelCache(std::string const &);
#endif
    /**
     * @symbol  ??0LevelListCache\@\@QEAA\@AEAVLevelStorageSource\@\@$$QEAV?$function\@$$A6A_NXZ\@std\@\@\@Z
     */
    MCAPI LevelListCache(class LevelStorageSource &, class std::function<bool (void)> &&);

//private:
    /**
     * @symbol  ?_addOrReplaceCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class LevelCache * _addOrReplaceCache(class Core::Path const &);
    /**
     * @symbol  ?_addToCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV2\@\@Z
     */
    MCAPI class LevelCache * _addToCache(std::string const &, class LevelCache &&);
    /**
     * @symbol  ?_addToCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class LevelCache * _addToCache(class Core::Path const &);
    /**
     * @symbol  ?_createAndAddToCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class LevelCache * _createAndAddToCache(std::string const &, class Core::Path const &);
    /**
     * @symbol  ?_getLevelCache\@LevelListCache\@\@AEAAPEAVLevelCache\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LevelCache * _getLevelCache(std::string const &);
    /**
     * @symbol  ?_getLevelSummary\@LevelListCache\@\@AEAAPEAULevelSummary\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct LevelSummary * _getLevelSummary(std::string const &);
    /**
     * @symbol  ?_notifyLevelUpdated\@LevelListCache\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _notifyLevelUpdated(std::string const &);
    /**
     * @symbol  ?_refreshSummary\@LevelListCache\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelCache\@\@\@Z
     */
    MCAPI void _refreshSummary(std::string const &, class LevelCache &);

private:

};