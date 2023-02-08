/**
 * @file  KnockbackRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -360332818
     * @symbol  ?doKnockbackAttack\@KnockbackRules\@\@YAXAEAVMob\@\@0AEBVVec2\@\@MM\@Z
     */
    MCAPI void doKnockbackAttack(class Mob &, class Mob &, class Vec2 const &, float, float);
    /**
     * @hash   872020220
     * @symbol  ?doKnockbackAttack\@KnockbackRules\@\@YAXAEAVMob\@\@0AEBVVec3\@\@MM\@Z
     */
    MCAPI void doKnockbackAttack(class Mob &, class Mob &, class Vec3 const &, float, float);
    /**
     * @hash   -131129051
     * @symbol  ?getScaledKnockbackForce\@KnockbackRules\@\@YAMAEBVActor\@\@M\@Z
     */
    MCAPI float getScaledKnockbackForce(class Actor const &, float);
    /**
     * @hash   -531451360
     * @symbol  ?isKnockbackResistant\@KnockbackRules\@\@YA_NAEBVActor\@\@\@Z
     */
    MCAPI bool isKnockbackResistant(class Actor const &);
    /**
     * @hash   -1769480414
     * @symbol  ?shouldApplyKnockback\@KnockbackRules\@\@YA_NAEBVMob\@\@\@Z
     */
    MCAPI bool shouldApplyKnockback(class Mob const &);
    /**
     * @hash   -966779852
     * @symbol  ?useLegacyKnockback\@KnockbackRules\@\@YA_NAEBVLevel\@\@\@Z
     */
    MCAPI bool useLegacyKnockback(class Level const &);

};