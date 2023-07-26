#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LevelStorageManager {

public:
    // prevent constructor by default
    LevelStorageManager& operator=(LevelStorageManager const&) = delete;
    LevelStorageManager(LevelStorageManager const&)            = delete;
    LevelStorageManager()                                      = delete;

public:
    /**
     * @symbol
     * ??0LevelStorageManager\@\@QEAA\@V?$OwnerPtrT\@U?$SharePtrRefTraits\@VLevelStorage\@\@\@\@\@\@V?$unique_ptr\@VGameDataSaveTimer\@\@U?$default_delete\@VGameDataSaveTimer\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VUserStorageChecker\@\@U?$default_delete\@VUserStorageChecker\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI
        LevelStorageManager(class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>, std::unique_ptr<class GameDataSaveTimer>, std::unique_ptr<class UserStorageChecker>); // NOLINT
    /**
     * @symbol ?getLevelStorage\@LevelStorageManager\@\@QEAAAEAVLevelStorage\@\@XZ
     */
    MCAPI class LevelStorage& getLevelStorage(); // NOLINT
    /**
     * @symbol ?getSavedDataStorage\@LevelStorageManager\@\@QEAAAEAVSavedDataStorage\@\@XZ
     */
    MCAPI class SavedDataStorage& getSavedDataStorage(); // NOLINT
    /**
     * @symbol ?initializeWithDimensionManager\@LevelStorageManager\@\@QEAAXAEAVDimensionManager\@\@\@Z
     */
    MCAPI void initializeWithDimensionManager(class DimensionManager&); // NOLINT
    /**
     * @symbol ?initializeWithPlayerDeathManager\@LevelStorageManager\@\@QEAAXAEAVPlayerDeathManager\@\@\@Z
     */
    MCAPI void initializeWithPlayerDeathManager(class PlayerDeathManager&); // NOLINT
    /**
     * @symbol ?onAppSuspend\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void onAppSuspend(); // NOLINT
    /**
     * @symbol ?onLevelTearingDown\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void onLevelTearingDown(); // NOLINT
    /**
     * @symbol ?onStartLeaveGame\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void onStartLeaveGame(); // NOLINT
    /**
     * @symbol
     * ?registerOnCanStartGameSaveTimerCheckCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6A_NXZ\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnCanStartGameSaveTimerCheckCallback(class std::function<bool(void)>); // NOLINT
    /**
     * @symbol
     * ?registerOnPollSaveGameStatisticsCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnPollSaveGameStatisticsCallback(class std::function<void(class LevelStorage&)>); // NOLINT
    /**
     * @symbol
     * ?registerOnSaveCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnSaveCallback(class std::function<void(class LevelStorage&)>); // NOLINT
    /**
     * @symbol
     * ?registerOnSaveGameDataCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnSaveGameDataCallback(class std::function<void(class LevelStorage&)>); // NOLINT
    /**
     * @symbol
     * ?registerOnSaveLevelDataCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnSaveLevelDataCallback(class std::function<void(class LevelStorage&)>); // NOLINT
    /**
     * @symbol
     * ?registerOnStartLeaveGameCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnStartLeaveGameCallback(class std::function<void(class LevelStorage&)>); // NOLINT
    /**
     * @symbol ?requestTimedStorageDeferment\@LevelStorageManager\@\@QEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<void*> requestTimedStorageDeferment(); // NOLINT
    /**
     * @symbol
     * ?save\@LevelStorageManager\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void save(class std::chrono::time_point<
                    struct std::chrono::steady_clock,
                    class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol
     * ?saveGameData\@LevelStorageManager\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void saveGameData(class std::chrono::time_point<
                            struct std::chrono::steady_clock,
                            class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol ?saveLevelData\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void saveLevelData(); // NOLINT
    /**
     * @symbol
     * ?trySaveGameData\@LevelStorageManager\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void trySaveGameData(class std::chrono::time_point<
                               struct std::chrono::steady_clock,
                               class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol
     * ?tryStartGameDataSaveTimerIfNotSet\@LevelStorageManager\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void tryStartGameDataSaveTimerIfNotSet(class std::chrono::time_point<
                                                 struct std::chrono::steady_clock,
                                                 class std::chrono::
                                                     duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol ??1LevelStorageManager\@\@QEAA\@XZ
     */
    MCAPI ~LevelStorageManager(); // NOLINT

    // private:
    /**
     * @symbol ?_getGameDataSaveTimer\@LevelStorageManager\@\@AEAAAEAVGameDataSaveTimer\@\@XZ
     */
    MCAPI class GameDataSaveTimer& _getGameDataSaveTimer(); // NOLINT
    /**
     * @symbol ?_onNewDimensionCreated\@LevelStorageManager\@\@AEAAXAEAVDimension\@\@\@Z
     */
    MCAPI void _onNewDimensionCreated(class Dimension&); // NOLINT
    /**
     * @symbol ?_savePlayer\@LevelStorageManager\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _savePlayer(class Player&); // NOLINT

private:
};
