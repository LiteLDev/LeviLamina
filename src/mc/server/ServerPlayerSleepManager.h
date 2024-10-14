#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/level/PlayerSleepManager.h"

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

    MCAPI ServerPlayerSleepManager(
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const& gameplayUserManager,
        std::unique_ptr<class IPlayerSleepPercentageGetter>                   playerSleepPercentageGetter
    );

    MCAPI bool enoughPlayersDeepSleeping() const;

    MCAPI class Bedrock::PubSub::Subscription registerOnWakeUpAllPlayers(std::function<void()> callback);

    MCAPI void registerWithPlayerDimensionTransferConnector(
        class IPlayerDimensionTransferConnector& playerDimensionTransferConnector
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _awakenAllPlayers();

    MCAPI void _onPlayerDeath();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void updateSleepingPlayerList$();

    // NOLINTEND
};
