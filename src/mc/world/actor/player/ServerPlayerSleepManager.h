#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ServerPlayerSleepManager {

public:
    // prevent constructor by default
    ServerPlayerSleepManager& operator=(ServerPlayerSleepManager const&) = delete;
    ServerPlayerSleepManager(ServerPlayerSleepManager const&)            = delete;
    ServerPlayerSleepManager()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?updateSleepingPlayerList\@ServerPlayerSleepManager\@\@UEAAXXZ
     */
    virtual void updateSleepingPlayerList(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYERSLEEPMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerPlayerSleepManager(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ServerPlayerSleepManager\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VGameplayUserManager\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ServerPlayerSleepManager(class gsl::not_null<
                                   class Bedrock::NonOwnerPointer<class GameplayUserManager>>); // NOLINT
    /**
     * @symbol ?initializeWithPlayerDeathManager\@ServerPlayerSleepManager\@\@QEAAXAEAVPlayerDeathManager\@\@\@Z
     */
    MCAPI void initializeWithPlayerDeathManager(class PlayerDeathManager&); // NOLINT
    /**
     * @symbol
     * ?registerOnPlayerWakeUp\@ServerPlayerSleepManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnPlayerWakeUp(class std::function<void(class Player&)>); // NOLINT
    /**
     * @symbol
     * ?registerOnSleepingPlayerListUpdated\@ServerPlayerSleepManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEBUPlayerSleepStatus\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnSleepingPlayerListUpdated(class std::function<void(struct PlayerSleepStatus const&)>); // NOLINT
    /**
     * @symbol
     * ?registerOnWakeUpAllPlayers\@ServerPlayerSleepManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnWakeUpAllPlayers(class std::function<void(void)>); // NOLINT
    /**
     * @symbol ?setShouldSendSleepMessage\@ServerPlayerSleepManager\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldSendSleepMessage(bool); // NOLINT
    /**
     * @symbol ?shouldSendSleepMessage\@ServerPlayerSleepManager\@\@QEBA_NXZ
     */
    MCAPI bool shouldSendSleepMessage() const; // NOLINT
    /**
     * @symbol ?tickCheckToWakeUpPlayers\@ServerPlayerSleepManager\@\@QEAAXXZ
     */
    MCAPI void tickCheckToWakeUpPlayers(); // NOLINT

    // private:
    /**
     * @symbol ?_awakenAllPlayers\@ServerPlayerSleepManager\@\@AEAAXXZ
     */
    MCAPI void _awakenAllPlayers(); // NOLINT
    /**
     * @symbol ?_onPlayerDeath\@ServerPlayerSleepManager\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _onPlayerDeath(class Player&); // NOLINT

private:
};
