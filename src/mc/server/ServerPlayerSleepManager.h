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
    ::ll::UntypedStorage<8, 128> mUnke1594e;
    ::ll::UntypedStorage<8, 128> mUnkc0b628;
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

    MCAPI void tickCheckToWakeUpPlayers();
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
    MCAPI static void** $vftableForIServerPlayerSleepManagerConnector();

    MCAPI static void** $vftableForPlayerSleepManager();
    // NOLINTEND
};
