#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class PlayerDeathManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERDEATHMANAGER
public:
    PlayerDeathManager& operator=(PlayerDeathManager const&) = delete;
    PlayerDeathManager(PlayerDeathManager const&)            = delete;
    PlayerDeathManager()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ??0PlayerDeathManager\@\@QEAA\@V?$unique_ptr\@VIPlayerDeathManagerProxy\@\@U?$default_delete\@VIPlayerDeathManagerProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerDeathManager(std::unique_ptr<class IPlayerDeathManagerProxy>);
    /**
     * @symbol ?playerDied\@PlayerDeathManager\@\@QEAAXAEAVPlayer\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void playerDied(class Player&, class ActorDamageSource const&);
    /**
     * @symbol
     * ?registerOnPlayerDeathCallback\@PlayerDeathManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnPlayerDeathCallback(class std::function<void(class Player&)>);
    /**
     * @symbol ?setPacketSender\@PlayerDeathManager\@\@QEAAXAEAVPacketSender\@\@\@Z
     */
    MCAPI void setPacketSender(class PacketSender&);
    /**
     * @symbol ??1PlayerDeathManager\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDeathManager();

    // private:
    /**
     * @symbol ?_getPlayerDeathManagerProxy\@PlayerDeathManager\@\@AEBAAEAVIPlayerDeathManagerProxy\@\@XZ
     */
    MCAPI class IPlayerDeathManagerProxy& _getPlayerDeathManagerProxy() const;

private:
};
