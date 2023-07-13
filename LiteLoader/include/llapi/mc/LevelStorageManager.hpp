/**
 * @file  LevelStorageManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LevelStorageManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEMANAGER
public:
    class LevelStorageManager& operator=(class LevelStorageManager const &) = delete;
    LevelStorageManager(class LevelStorageManager const &) = delete;
    LevelStorageManager() = delete;
#endif

public:
    /**
     * @symbol ??0LevelStorageManager\@\@QEAA\@V?$OwnerPtrT\@U?$SharePtrRefTraits\@VLevelStorage\@\@\@\@\@\@V?$unique_ptr\@VGameDataSaveTimer\@\@U?$default_delete\@VGameDataSaveTimer\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VUserStorageChecker\@\@U?$default_delete\@VUserStorageChecker\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI LevelStorageManager(class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>, std::unique_ptr<class GameDataSaveTimer>, std::unique_ptr<class UserStorageChecker>);
    /**
     * @symbol ?getLevelStorage\@LevelStorageManager\@\@QEAAAEAVLevelStorage\@\@XZ
     */
    MCAPI class LevelStorage & getLevelStorage();
    /**
     * @symbol ?getSavedDataStorage\@LevelStorageManager\@\@QEAAAEAVSavedDataStorage\@\@XZ
     */
    MCAPI class SavedDataStorage & getSavedDataStorage();
    /**
     * @symbol ?initializeWithDimensionManager\@LevelStorageManager\@\@QEAAXAEAVDimensionManager\@\@\@Z
     */
    MCAPI void initializeWithDimensionManager(class DimensionManager &);
    /**
     * @symbol ?initializeWithPlayerDeathManager\@LevelStorageManager\@\@QEAAXAEAVPlayerDeathManager\@\@\@Z
     */
    MCAPI void initializeWithPlayerDeathManager(class PlayerDeathManager &);
    /**
     * @symbol ?onAppSuspend\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void onAppSuspend();
    /**
     * @symbol ?onLevelTearingDown\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void onLevelTearingDown();
    /**
     * @symbol ?onStartLeaveGame\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void onStartLeaveGame();
    /**
     * @symbol ?registerOnCanStartGameSaveTimerCheckCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6A_NXZ\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnCanStartGameSaveTimerCheckCallback(class std::function<bool (void)>);
    /**
     * @symbol ?registerOnPollSaveGameStatisticsCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnPollSaveGameStatisticsCallback(class std::function<void (class LevelStorage &)>);
    /**
     * @symbol ?registerOnSaveCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnSaveCallback(class std::function<void (class LevelStorage &)>);
    /**
     * @symbol ?registerOnSaveGameDataCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnSaveGameDataCallback(class std::function<void (class LevelStorage &)>);
    /**
     * @symbol ?registerOnSaveLevelDataCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnSaveLevelDataCallback(class std::function<void (class LevelStorage &)>);
    /**
     * @symbol ?registerOnStartLeaveGameCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnStartLeaveGameCallback(class std::function<void (class LevelStorage &)>);
    /**
     * @symbol ?requestTimedStorageDeferment\@LevelStorageManager\@\@QEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<void *> requestTimedStorageDeferment();
    /**
     * @symbol ?save\@LevelStorageManager\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void save(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ?saveGameData\@LevelStorageManager\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void saveGameData(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ?saveLevelData\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void saveLevelData();
    /**
     * @symbol ?trySaveGameData\@LevelStorageManager\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void trySaveGameData(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ?tryStartGameDataSaveTimerIfNotSet\@LevelStorageManager\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void tryStartGameDataSaveTimerIfNotSet(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ??1LevelStorageManager\@\@QEAA\@XZ
     */
    MCAPI ~LevelStorageManager();

//private:
    /**
     * @symbol ?_getGameDataSaveTimer\@LevelStorageManager\@\@AEAAAEAVGameDataSaveTimer\@\@XZ
     */
    MCAPI class GameDataSaveTimer & _getGameDataSaveTimer();
    /**
     * @symbol ?_onNewDimensionCreated\@LevelStorageManager\@\@AEAAXAEAVDimension\@\@\@Z
     */
    MCAPI void _onNewDimensionCreated(class Dimension &);
    /**
     * @symbol ?_savePlayer\@LevelStorageManager\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _savePlayer(class Player &);

private:

};
