/**
 * @file  VanillaServerGameplayEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaServerGameplayEventListener.
 *
 */
class VanillaServerGameplayEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASERVERGAMEPLAYEVENTLISTENER
public:
    class VanillaServerGameplayEventListener& operator=(class VanillaServerGameplayEventListener const &) = delete;
    VanillaServerGameplayEventListener(class VanillaServerGameplayEventListener const &) = delete;
    VanillaServerGameplayEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLASERVERGAMEPLAYEVENTLISTENER
    /**
     * @hash   -1119064954
     * @symbol ?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCVAPI enum EventResult onBlockInteractedWith(class Player &, class BlockPos const &);
    /**
     * @hash   288679252
     * @symbol ?onBlockPlacedByPlayer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
     */
    MCVAPI enum EventResult onBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    /**
     * @hash   581604577
     * @symbol ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerDamageEvent@@@Z
     */
    MCVAPI enum EventResult onEvent(struct PlayerDamageEvent const &);
    /**
     * @hash   -1795350697
     * @symbol ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUActorHurtEvent@@@Z
     */
    MCVAPI enum EventResult onEvent(struct ActorHurtEvent const &);
    /**
     * @hash   791671289
     * @symbol ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z
     */
    MCVAPI enum EventResult onEvent(struct PlayerOpenContainerEvent const &);
    /**
     * @hash   -1300414663
     * @symbol ?onPlayerMovementAnomaly@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
     */
    MCVAPI enum EventResult onPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   -118649345
     * @symbol ?onPlayerMovementCorrected@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
     */
    MCVAPI enum EventResult onPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
#endif

};