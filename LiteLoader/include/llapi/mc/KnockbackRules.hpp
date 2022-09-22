/**
 * @file  KnockbackRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace KnockbackRules.
 *
 */
namespace KnockbackRules {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   275095758
     * @symbol ?doKnockbackAttack@KnockbackRules@@YAXAEAVMob@@0AEBVVec2@@MM@Z
     */
    MCAPI void doKnockbackAttack(class Mob &, class Mob &, class Vec2 const &, float, float);
    /**
     * @hash   1507448796
     * @symbol ?doKnockbackAttack@KnockbackRules@@YAXAEAVMob@@0AEBVVec3@@MM@Z
     */
    MCAPI void doKnockbackAttack(class Mob &, class Mob &, class Vec3 const &, float, float);
    /**
     * @hash   504284149
     * @symbol ?getScaledKnockbackForce@KnockbackRules@@YAMAEBVActor@@M@Z
     */
    MCAPI float getScaledKnockbackForce(class Actor const &, float);
    /**
     * @hash   103946464
     * @symbol ?isKnockbackResistant@KnockbackRules@@YA_NAEBVActor@@@Z
     */
    MCAPI bool isKnockbackResistant(class Actor const &);
    /**
     * @hash   -1134097966
     * @symbol ?shouldApplyKnockback@KnockbackRules@@YA_NAEBVMob@@@Z
     */
    MCAPI bool shouldApplyKnockback(class Mob const &);
    /**
     * @hash   -331412780
     * @symbol ?useLegacyKnockback@KnockbackRules@@YA_NAEBVLevel@@@Z
     */
    MCAPI bool useLegacyKnockback(class Level const &);

};