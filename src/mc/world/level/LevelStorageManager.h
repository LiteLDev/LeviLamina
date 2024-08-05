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
    MCAPI
    LevelStorageManager(class OwnerPtr<class LevelStorage>, std::unique_ptr<class GameDataSaveTimer>, std::unique_ptr<class UserStorageChecker>, class IMinecraftEventing&);

    MCAPI class LevelStorage& getLevelStorage();

    MCAPI class StackRefResult<class LevelStorage> getLevelStorageStackRef();

    MCAPI class SavedDataStorage& getSavedDataStorage();

    MCAPI void initializeWithDimensionManager(class DimensionManager&);

    MCAPI void initializeWithPlayerDeathManager(class PlayerDeathManager&);

    MCAPI void onAppSuspend();

    MCAPI void onLevelTearingDown();

    MCAPI void onStartLeaveGame();

    MCAPI class Bedrock::PubSub::Subscription registerOnAppSuspendCallback(std::function<void()>);

    MCAPI class Bedrock::PubSub::Subscription registerOnCanStartGameSaveTimerCheckCallback(std::function<bool()>);

    MCAPI class Bedrock::PubSub::Subscription registerOnSaveCallback(std::function<void(class LevelStorage&)>);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnSaveGameDataCallback(std::function<void(class LevelStorage&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnSaveLevelDataCallback(std::function<void(class LevelStorage&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
        registerOnStartLeaveGameCallback(std::function<void(class LevelStorage&)>);

    MCAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    MCAPI void save(std::chrono::steady_clock::time_point);

    MCAPI void saveGameData(std::chrono::steady_clock::time_point);

    MCAPI void saveLevelData();

    MCAPI void trySaveGameData(std::chrono::steady_clock::time_point);

    MCAPI void tryStartGameDataSaveTimerIfNotSet(std::chrono::steady_clock::time_point);

    MCAPI ~LevelStorageManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onNewDimensionCreated(class Dimension&);

    MCAPI void _savePlayer(class Player&);

    // NOLINTEND
};
