#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"

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
    MCAPI LevelStorageManager(
        class OwnerPtr<class LevelStorage>        levelStorage,
        std::unique_ptr<class GameDataSaveTimer>  gameDataSaveTimer,
        std::unique_ptr<class UserStorageChecker> userStorageChecker,
        class IMinecraftEventing&                 eventing
    );

    MCAPI class LevelStorage& getLevelStorage();

    MCAPI class StackRefResult<class LevelStorage> getLevelStorageStackRef();

    MCAPI class SavedDataStorage& getSavedDataStorage();

    MCAPI void initializeWithDimensionManager(class DimensionManager& dimensionManager);

    MCAPI void initializeWithPlayerDeathManager(class PlayerDeathManager& playerDeathManager);

    MCAPI void onAppSuspend();

    MCAPI void onLevelTearingDown();

    MCAPI void onStartLeaveGame();

    MCAPI class Bedrock::PubSub::Subscription registerOnAppSuspendCallback(std::function<void()> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnCanStartGameSaveTimerCheckCallback(std::function<bool()> callback);

    MCAPI class Bedrock::PubSub::Subscription registerOnSaveCallback(std::function<void(class LevelStorage&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnSaveGameDataCallback(std::function<void(class LevelStorage&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnSaveLevelDataCallback(std::function<void(class LevelStorage&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnStartLeaveGameCallback(std::function<void(class LevelStorage&)> callback);

    MCAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    MCAPI void save(std::chrono::steady_clock::time_point currentTime);

    MCAPI void saveGameData(std::chrono::steady_clock::time_point currentTime);

    MCAPI void saveLevelData();

    MCAPI void trySaveGameData(std::chrono::steady_clock::time_point currentTime);

    MCAPI void tryStartGameDataSaveTimerIfNotSet(std::chrono::steady_clock::time_point currentTime);

    MCAPI ~LevelStorageManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onNewDimensionCreated(class Dimension& dimension);

    MCAPI void _savePlayer(class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
