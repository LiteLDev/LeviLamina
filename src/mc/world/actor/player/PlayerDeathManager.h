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
    MCAPI explicit PlayerDeathManager(std::unique_ptr<class IPlayerDeathManagerProxy>);

    MCAPI void playerDied(class Player& player, class ActorDamageSource const& source);

    MCAPI class Bedrock::PubSub::Subscription registerOnPlayerDeathCallback(std::function<void(class Player&)> callback
    );

    MCAPI void setPacketSender(class PacketSender& packetSender);

    MCAPI ~PlayerDeathManager();

    // NOLINTEND
};
