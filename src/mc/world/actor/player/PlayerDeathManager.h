#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class PlayerDeathManager {

public:
    // prevent constructor by default
    PlayerDeathManager& operator=(PlayerDeathManager const&) = delete;
    PlayerDeathManager(PlayerDeathManager const&)            = delete;
    PlayerDeathManager()                                     = delete;

public:
    /**
     * @symbol
     * ??0PlayerDeathManager\@\@QEAA\@V?$unique_ptr\@VIPlayerDeathManagerProxy\@\@U?$default_delete\@VIPlayerDeathManagerProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerDeathManager(std::unique_ptr<class IPlayerDeathManagerProxy>); // NOLINT
    /**
     * @symbol ?playerDied\@PlayerDeathManager\@\@QEAAXAEAVPlayer\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void playerDied(class Player&, class ActorDamageSource const&); // NOLINT
    /**
     * @symbol
     * ?registerOnPlayerDeathCallback\@PlayerDeathManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnPlayerDeathCallback(class std::function<void(class Player&)>); // NOLINT
    /**
     * @symbol ?setPacketSender\@PlayerDeathManager\@\@QEAAXAEAVPacketSender\@\@\@Z
     */
    MCAPI void setPacketSender(class PacketSender&); // NOLINT
    /**
     * @symbol ??1PlayerDeathManager\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDeathManager(); // NOLINT

    // private:
    /**
     * @symbol ?_getPlayerDeathManagerProxy\@PlayerDeathManager\@\@AEBAAEAVIPlayerDeathManagerProxy\@\@XZ
     */
    MCAPI class IPlayerDeathManagerProxy& _getPlayerDeathManagerProxy() const; // NOLINT

private:
};
