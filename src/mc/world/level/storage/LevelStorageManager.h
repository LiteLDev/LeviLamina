#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/ILevelStorageManagerConnector.h"
#include "mc/world/level/storage/SavedDataStorage.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class GameDataSaveTimer;
class IDimensionManagerConnector;
class IMinecraftEventing;
class IPlayerDeathManagerConnector;
class LevelStorage;
class Player;
class UserStorageChecker;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LevelStorageManager : public ::ILevelStorageManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelStorage>> const> mLevelStorage;
    ::ll::TypedStorage<8, 80, ::SavedDataStorage>                                                   mSavedDataStorage;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::GameDataSaveTimer>>>               mGameDataSaveTimer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::UserStorageChecker>>>              mUserStorageChecker;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelStorage&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mSavePublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelStorage&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mSaveGameDataPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelStorage&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mSaveLevelDataPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(bool&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mCanStartSaveTimerCheckPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelStorage&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnStartLeaveGamePublisher;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnAppSuspendPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerDeathSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnDimensionCreatedSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mIsLevelTearingDown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>            mEventing;
    ::ll::TypedStorage<4, 4, uint>                             mPollSaveGameStatisticsCount;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageManager& operator=(LevelStorageManager const&);
    LevelStorageManager(LevelStorageManager const&);
    LevelStorageManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStorageManager() /*override*/ = default;

    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveGameDataConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveLevelDataConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(bool&)>& getOnCanStartGameSaveTimerCheckConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnStartLeaveGameConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnAppSuspendConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::std::unique_ptr<::GameDataSaveTimer>        gameDataSaveTimer,
        ::std::unique_ptr<::UserStorageChecker>       userStorageChecker,
        ::IMinecraftEventing&                         eventing
    );

    MCNAPI void _onNewDimensionCreated(::Dimension& dimension);

    MCNAPI void _savePlayer(::Player& player);

    MCNAPI void initializeWithDimensionManager(::IDimensionManagerConnector& dimensionManagerConnector);

    MCNAPI void initializeWithPlayerDeathManager(::IPlayerDeathManagerConnector& playerDeathManagerConnector);

    MCNAPI void onStartLeaveGame();

    MCNAPI void save(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI void saveGameData(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI void saveLevelData();

    MCNAPI void trySaveGameData(::std::chrono::steady_clock::time_point currentTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::std::unique_ptr<::GameDataSaveTimer>        gameDataSaveTimer,
        ::std::unique_ptr<::UserStorageChecker>       userStorageChecker,
        ::IMinecraftEventing&                         eventing
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveGameDataConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveLevelDataConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(bool&)>& $getOnCanStartGameSaveTimerCheckConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnStartLeaveGameConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnAppSuspendConnector();


    // NOLINTEND
};
