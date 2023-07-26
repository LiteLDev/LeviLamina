/**
 * @file  VanillaServerGameplayEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?onBlockInteractedWith\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockInteractedWith(class Player &, class BlockPos const &);
    /**
     * @symbol  ?onBlockPlacedByPlayer\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCVAPI enum class EventResult onBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    /**
     * @symbol  ?onEvent\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEBUPlayerDamageEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerDamageEvent const &);
    /**
     * @symbol  ?onEvent\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEBUActorHurtEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ActorHurtEvent const &);
    /**
     * @symbol  ?onEvent\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEBUPlayerOpenContainerEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerOpenContainerEvent const &);
    /**
     * @symbol  ?onPlayerMovementAnomaly\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @symbol  ?onPlayerMovementCorrected\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
#endif

};