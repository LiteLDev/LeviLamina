#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/world/actor/player/PlayerSleepManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ServerPlayerSleepManager : public ::PlayerSleepManager {
public:
    // prevent constructor by default
    ServerPlayerSleepManager& operator=(ServerPlayerSleepManager const&);
    ServerPlayerSleepManager(ServerPlayerSleepManager const&);
    ServerPlayerSleepManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPlayerSleepManager();

    // vIndex: 1
    virtual void updateSleepingPlayerList();

    MCAPI
    ServerPlayerSleepManager(gsl::not_null<class StackRefResult<class GameplayUserManager>> const&, std::unique_ptr<class IPlayerSleepPercentageGetter>);

    MCAPI bool enoughPlayersDeepSleeping() const;

    MCAPI class Bedrock::PubSub::Subscription registerOnWakeUpAllPlayers(std::function<void()> callback);

    MCAPI void registerWithPlayerDimensionTransferConnector(class IPlayerDimensionTransferConnector&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _awakenAllPlayers();

    MCAPI void _onPlayerDeath();

    // NOLINTEND
};
