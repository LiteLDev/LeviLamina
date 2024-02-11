#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LevelStorageManager {
public:
    // prevent constructor by default
    LevelStorageManager& operator=(LevelStorageManager const&);
    LevelStorageManager(LevelStorageManager const&);
    LevelStorageManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0LevelStorageManager@@QEAA@V?$OwnerPtr@VLevelStorage@@@@V?$unique_ptr@VGameDataSaveTimer@@U?$default_delete@VGameDataSaveTimer@@@std@@@std@@V?$unique_ptr@VUserStorageChecker@@U?$default_delete@VUserStorageChecker@@@std@@@3@@Z
    MCAPI
    LevelStorageManager(class OwnerPtr<class LevelStorage>, std::unique_ptr<class GameDataSaveTimer>, std::unique_ptr<class UserStorageChecker>);

    // symbol: ?getLevelStorage@LevelStorageManager@@QEAAAEAVLevelStorage@@XZ
    MCAPI class LevelStorage& getLevelStorage();

    // symbol: ?getLevelStorageStackRef@LevelStorageManager@@QEAA?AV?$StackRefResult@VLevelStorage@@@@XZ
    MCAPI class StackRefResult<class LevelStorage> getLevelStorageStackRef();

    // symbol: ?getSavedDataStorage@LevelStorageManager@@QEAAAEAVSavedDataStorage@@XZ
    MCAPI class SavedDataStorage& getSavedDataStorage();

    // symbol: ?initializeWithDimensionManager@LevelStorageManager@@QEAAXAEAVDimensionManager@@@Z
    MCAPI void initializeWithDimensionManager(class DimensionManager&);

    // symbol: ?initializeWithPlayerDeathManager@LevelStorageManager@@QEAAXAEAVPlayerDeathManager@@@Z
    MCAPI void initializeWithPlayerDeathManager(class PlayerDeathManager&);

    // symbol: ?onAppSuspend@LevelStorageManager@@QEAAXXZ
    MCAPI void onAppSuspend();

    // symbol: ?onLevelTearingDown@LevelStorageManager@@QEAAXXZ
    MCAPI void onLevelTearingDown();

    // symbol: ?onStartLeaveGame@LevelStorageManager@@QEAAXXZ
    MCAPI void onStartLeaveGame();

    // symbol:
    // ?registerOnAppSuspendCallback@LevelStorageManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXXZ@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerOnAppSuspendCallback(std::function<void()>);

    // symbol:
    // ?registerOnCanStartGameSaveTimerCheckCallback@LevelStorageManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6A_NXZ@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerOnCanStartGameSaveTimerCheckCallback(std::function<bool()>);

    // symbol:
    // ?registerOnPollSaveGameStatisticsCallback@LevelStorageManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVLevelStorage@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
        registerOnPollSaveGameStatisticsCallback(std::function<void(class LevelStorage&)>);

    // symbol:
    // ?registerOnSaveCallback@LevelStorageManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVLevelStorage@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerOnSaveCallback(std::function<void(class LevelStorage&)>);

    // symbol:
    // ?registerOnSaveGameDataCallback@LevelStorageManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVLevelStorage@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
    registerOnSaveGameDataCallback(std::function<void(class LevelStorage&)> callback);

    // symbol:
    // ?registerOnSaveLevelDataCallback@LevelStorageManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVLevelStorage@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
    registerOnSaveLevelDataCallback(std::function<void(class LevelStorage&)> callback);

    // symbol:
    // ?registerOnStartLeaveGameCallback@LevelStorageManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVLevelStorage@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
        registerOnStartLeaveGameCallback(std::function<void(class LevelStorage&)>);

    // symbol: ?requestTimedStorageDeferment@LevelStorageManager@@QEAA?AV?$shared_ptr@PEAX@std@@XZ
    MCAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    // symbol:
    // ?save@LevelStorageManager@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void save(std::chrono::steady_clock::time_point);

    // symbol:
    // ?saveGameData@LevelStorageManager@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void saveGameData(std::chrono::steady_clock::time_point);

    // symbol: ?saveLevelData@LevelStorageManager@@QEAAXXZ
    MCAPI void saveLevelData();

    // symbol:
    // ?trySaveGameData@LevelStorageManager@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void trySaveGameData(std::chrono::steady_clock::time_point);

    // symbol:
    // ?tryStartGameDataSaveTimerIfNotSet@LevelStorageManager@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void tryStartGameDataSaveTimerIfNotSet(std::chrono::steady_clock::time_point);

    // symbol: ??1LevelStorageManager@@QEAA@XZ
    MCAPI ~LevelStorageManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onNewDimensionCreated@LevelStorageManager@@AEAAXAEAVDimension@@@Z
    MCAPI void _onNewDimensionCreated(class Dimension&);

    // symbol: ?_savePlayer@LevelStorageManager@@AEAAXAEAVPlayer@@@Z
    MCAPI void _savePlayer(class Player&);

    // NOLINTEND
};
