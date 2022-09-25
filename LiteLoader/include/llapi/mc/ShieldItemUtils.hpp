/**
 * @file  ShieldItemUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShieldItemUtils.
 *
 */
class ShieldItemUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIELDITEMUTILS
public:
    class ShieldItemUtils& operator=(class ShieldItemUtils const &) = delete;
    ShieldItemUtils(class ShieldItemUtils const &) = delete;
    ShieldItemUtils() = delete;
#endif

public:
    /**
     * @hash   -393930517
     * @symbol ?isBlockedDamageCause@ShieldItemUtils@@SA_NAEBVActorDamageSource@@@Z
     */
    MCAPI static bool isBlockedDamageCause(class ActorDamageSource const &);

//private:

private:
    /**
     * @hash   -28867247
     * @symbol ?mAlwaysBlockableDamageCauses@ShieldItemUtils@@0V?$vector@W4ActorDamageCause@@V?$allocator@W4ActorDamageCause@@@std@@@std@@B
     */
    MCAPI static std::vector<enum ActorDamageCause> const mAlwaysBlockableDamageCauses;

};