#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
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
// clang-format on

class ServerPlayerSleepManager : public ::PlayerSleepManager, public ::IServerPlayerSleepManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk1bd6b4;
    ::ll::UntypedStorage<8, 8>   mUnk245965;
    ::ll::UntypedStorage<8, 24>  mUnke94e86;
    ::ll::UntypedStorage<8, 128> mUnk4e19d4;
    ::ll::UntypedStorage<8, 128> mUnke28aa3;
    ::ll::UntypedStorage<8, 16>  mUnk14f81a;
    ::ll::UntypedStorage<8, 16>  mUnk5a6432;
    ::ll::UntypedStorage<8, 16>  mUnk80dd8d;
    ::ll::UntypedStorage<8, 16>  mUnk6765b6;
    ::ll::UntypedStorage<1, 1>   mUnk3cbf25;
    ::ll::UntypedStorage<1, 1>   mUnk41cf95;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerSleepManager& operator=(ServerPlayerSleepManager const&);
    ServerPlayerSleepManager(ServerPlayerSleepManager const&);
    ServerPlayerSleepManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPlayerSleepManager() /*override*/;

    // vIndex: 1
    virtual void updateSleepingPlayerList() /*override*/;

    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getPlayerWakeUpConnector() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void()>& getOnWakeUpAllPlayersConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerPlayerSleepManager(
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerSleepPercentageGetter>    playerSleepPercentageGetter,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>   levelEventManager
    );

    MCNAPI void _broadcastSleepingPlayerList(::PlayerSleepStatus const& playerSleepStatus);

    MCNAPI void _onPlayerDeath();

    MCNAPI bool enoughPlayersDeepSleeping() const;

    MCNAPI void initializeWithPlayerDeathManager(::PlayerDeathManager& playerDeathManager);

    MCNAPI void
    registerWithPlayerDimensionTransferConnector(::IPlayerDimensionTransferConnector& playerDimensionTransferConnector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerSleepPercentageGetter>    playerSleepPercentageGetter,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>   levelEventManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateSleepingPlayerList();

    MCNAPI ::Bedrock::PubSub::Connector<void(::Player&)>& $getPlayerWakeUpConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnWakeUpAllPlayersConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIServerPlayerSleepManagerConnector();

    MCNAPI static void** $vftableForPlayerSleepManager();
    // NOLINTEND
};
