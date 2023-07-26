/**
 * @file  KnockbackRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?doKnockbackAttack\@KnockbackRules\@\@YAXAEAVMob\@\@0AEBVVec2\@\@MM\@Z
     */
    MCAPI void doKnockbackAttack(class Mob &, class Mob &, class Vec2 const &, float, float);
    /**
     * @symbol  ?doKnockbackAttack\@KnockbackRules\@\@YAXAEAVMob\@\@0AEBVVec3\@\@MM\@Z
     */
    MCAPI void doKnockbackAttack(class Mob &, class Mob &, class Vec3 const &, float, float);
    /**
     * @symbol  ?getScaledKnockbackForce\@KnockbackRules\@\@YAMAEBVActor\@\@M\@Z
     */
    MCAPI float getScaledKnockbackForce(class Actor const &, float);
    /**
     * @symbol  ?isKnockbackResistant\@KnockbackRules\@\@YA_NAEBVActor\@\@\@Z
     */
    MCAPI bool isKnockbackResistant(class Actor const &);
    /**
     * @symbol  ?shouldApplyKnockback\@KnockbackRules\@\@YA_NAEBVMob\@\@\@Z
     */
    MCAPI bool shouldApplyKnockback(class Mob const &);
    /**
     * @symbol  ?useLegacyKnockback\@KnockbackRules\@\@YA_NAEBVLevel\@\@\@Z
     */
    MCAPI bool useLegacyKnockback(class Level const &);

};