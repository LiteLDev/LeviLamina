#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class PlayerDeathManager {
public:
    // prevent constructor by default
    PlayerDeathManager& operator=(PlayerDeathManager const&);
    PlayerDeathManager(PlayerDeathManager const&);
    PlayerDeathManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0PlayerDeathManager@@QEAA@V?$unique_ptr@VIPlayerDeathManagerProxy@@U?$default_delete@VIPlayerDeathManagerProxy@@@std@@@std@@@Z
    MCAPI explicit PlayerDeathManager(std::unique_ptr<class IPlayerDeathManagerProxy>);

    // symbol: ?playerDied@PlayerDeathManager@@QEAAXAEAVPlayer@@AEBVActorDamageSource@@@Z
    MCAPI void playerDied(class Player& player, class ActorDamageSource const& source);

    // symbol:
    // ?registerOnPlayerDeathCallback@PlayerDeathManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVPlayer@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerOnPlayerDeathCallback(std::function<void(class Player&)> callback
    );

    // symbol: ?setPacketSender@PlayerDeathManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender& packetSender);

    // symbol: ??1PlayerDeathManager@@QEAA@XZ
    MCAPI ~PlayerDeathManager();

    // NOLINTEND
};
