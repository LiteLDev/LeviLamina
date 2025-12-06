#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/ILevelStorageManagerConnector.h"
#include "mc/world/level/storage/SavedDataStorage.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IPlayerDeathManagerConnector;
class LevelStorage;
class Player;
struct GameDataSaveTimer;
struct IDimensionManagerConnector;
struct IMinecraftEventing;
struct UserStorageChecker;
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
    // vIndex: 0
    virtual ~LevelStorageManager() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveGameDataConnector() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveLevelDataConnector() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::PubSub::Connector<void(bool&)>& getOnCanStartGameSaveTimerCheckConnector() /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnStartLeaveGameConnector() /*override*/;

    // vIndex: 6
    virtual ::Bedrock::PubSub::Connector<void()>& getOnAppSuspendConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::std::unique_ptr<::GameDataSaveTimer>        gameDataSaveTimer,
        ::std::unique_ptr<::UserStorageChecker>       userStorageChecker,
        ::IMinecraftEventing&                         eventing
    );

    MCAPI void _onNewDimensionCreated(::Dimension& dimension);

    MCAPI void _savePlayer(::Player& player);

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> getLevelStorage();

    MCAPI void initializeWithDimensionManager(::IDimensionManagerConnector& dimensionManagerConnector);

    MCAPI void initializeWithPlayerDeathManager(::IPlayerDeathManagerConnector& playerDeathManagerConnector);

    MCAPI void save(::std::chrono::steady_clock::time_point currentTime);

    MCAPI void saveGameData(::std::chrono::steady_clock::time_point currentTime);

    MCAPI void saveLevelData();

    MCAPI void trySaveGameData(::std::chrono::steady_clock::time_point currentTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::std::unique_ptr<::GameDataSaveTimer>        gameDataSaveTimer,
        ::std::unique_ptr<::UserStorageChecker>       userStorageChecker,
        ::IMinecraftEventing&                         eventing
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveGameDataConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveLevelDataConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(bool&)>& $getOnCanStartGameSaveTimerCheckConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnStartLeaveGameConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnAppSuspendConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
