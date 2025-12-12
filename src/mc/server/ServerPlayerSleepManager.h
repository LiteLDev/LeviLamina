#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/server/IServerPlayerSleepManagerConnector.h"
#include "mc/world/level/PlayerSleepManager.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
class IPlayerDimensionTransferConnector;
class IPlayerSleepPercentageGetter;
class LevelEventManager;
class Player;
class PlayerDeathManager;
struct PlayerSleepStatus;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ServerPlayerSleepManager : public ::PlayerSleepManager, public ::IServerPlayerSleepManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerSleepPercentageGetter>> const>
                                                                                        mPlayerSleepPercentageGetter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> const> mLevelEventManager;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Player&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnPlayerWakeUpPublisher;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnWakeUpAllPlayersPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerDeathSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>
                                   mOnAnyPlayerChangeDimensionPrepareRegionCompleteSubscription;
    ::ll::TypedStorage<1, 1, bool> mEnoughPlayersAreSleeping;
    ::ll::TypedStorage<1, 1, bool> mShouldSendSleepMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerSleepManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPlayerSleepManager() /*override*/;

    virtual void updateSleepingPlayerList() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getPlayerWakeUpConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnWakeUpAllPlayersConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerPlayerSleepManager(
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerSleepPercentageGetter>    playerSleepPercentageGetter,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>   levelEventManager
    );

    MCAPI void _broadcastSleepingPlayerList(::PlayerSleepStatus const& playerSleepStatus);

    MCFOLD void _onPlayerDeath();

    MCAPI bool enoughPlayersDeepSleeping() const;

    MCAPI void initializeWithPlayerDeathManager(::PlayerDeathManager& playerDeathManager);

    MCAPI void
    registerWithPlayerDimensionTransferConnector(::IPlayerDimensionTransferConnector& playerDimensionTransferConnector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerSleepPercentageGetter>    playerSleepPercentageGetter,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>   levelEventManager
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
    MCAPI void $updateSleepingPlayerList();

    MCFOLD ::Bedrock::PubSub::Connector<void(::Player&)>& $getPlayerWakeUpConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnWakeUpAllPlayersConnector();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIServerPlayerSleepManagerConnector();

    MCNAPI static void** $vftableForPlayerSleepManager();
    // NOLINTEND
};
