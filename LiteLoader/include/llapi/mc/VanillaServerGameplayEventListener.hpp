/**
 * @file  VanillaServerGameplayEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1011294570
     * @symbol  ?onBlockInteractedWith\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockInteractedWith(class Player &, class BlockPos const &);
    /**
     * @hash   396603396
     * @symbol  ?onBlockPlacedByPlayer\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCVAPI enum class EventResult onBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    /**
     * @hash   687545217
     * @symbol  ?onEvent\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEBUPlayerDamageEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerDamageEvent const &);
    /**
     * @hash   -1689410057
     * @symbol  ?onEvent\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEBUActorHurtEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ActorHurtEvent const &);
    /**
     * @hash   899641561
     * @symbol  ?onEvent\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEBUPlayerOpenContainerEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerOpenContainerEvent const &);
    /**
     * @hash   -1192352135
     * @symbol  ?onPlayerMovementAnomaly\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   -10540689
     * @symbol  ?onPlayerMovementCorrected\@VanillaServerGameplayEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
#endif

};