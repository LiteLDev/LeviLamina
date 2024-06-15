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
    // vIndex: 0, symbol: ??1ServerPlayerSleepManager@@UEAA@XZ
    virtual ~ServerPlayerSleepManager();

    // vIndex: 1, symbol: ?updateSleepingPlayerList@ServerPlayerSleepManager@@UEAAXXZ
    virtual void updateSleepingPlayerList();

    // symbol:
    // ??0ServerPlayerSleepManager@@QEAA@AEBV?$not_null@V?$StackRefResult@VGameplayUserManager@@@@@gsl@@V?$unique_ptr@VIPlayerSleepPercentageGetter@@U?$default_delete@VIPlayerSleepPercentageGetter@@@std@@@std@@@Z
    MCAPI
    ServerPlayerSleepManager(gsl::not_null<class StackRefResult<class GameplayUserManager>> const&, std::unique_ptr<class IPlayerSleepPercentageGetter>);

    // symbol: ?enoughPlayersDeepSleeping@ServerPlayerSleepManager@@QEBA_NXZ
    MCAPI bool enoughPlayersDeepSleeping() const;

    // symbol:
    // ?registerOnWakeUpAllPlayers@ServerPlayerSleepManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXXZ@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerOnWakeUpAllPlayers(std::function<void()> callback);

    // symbol:
    // ?registerWithPlayerDimensionTransferConnector@ServerPlayerSleepManager@@QEAAXAEAVIPlayerDimensionTransferConnector@@@Z
    MCAPI void registerWithPlayerDimensionTransferConnector(class IPlayerDimensionTransferConnector&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_awakenAllPlayers@ServerPlayerSleepManager@@AEAAXXZ
    MCAPI void _awakenAllPlayers();

    // symbol: ?_onPlayerDeath@ServerPlayerSleepManager@@AEAAXXZ
    MCAPI void _onPlayerDeath();

    // NOLINTEND
};
