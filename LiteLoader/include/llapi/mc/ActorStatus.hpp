/**
 * @file  ActorStatus.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorStatus.
 *
 */
namespace ActorStatus {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   1561513256
     * @symbol  ?canDash\@ActorStatus\@\@YA_NAEBVActorStatusProvider\@\@\@Z
     */
    MCAPI bool canDash(class ActorStatusProvider const &);
    /**
     * @hash   -1360358232
     * @symbol  ?hasDashCooldown\@ActorStatus\@\@YA_NAEBVActorStatusProvider\@\@\@Z
     */
    MCAPI bool hasDashCooldown(class ActorStatusProvider const &);
    /**
     * @hash   2009915560
     * @symbol  ?setCanDash\@ActorStatus\@\@YAX_NAEAVActorStatusProvider\@\@\@Z
     */
    MCAPI void setCanDash(bool, class ActorStatusProvider &);
    /**
     * @hash   1728017256
     * @symbol  ?setHasDashCooldown\@ActorStatus\@\@YAX_NAEAVActorStatusProvider\@\@\@Z
     */
    MCAPI void setHasDashCooldown(bool, class ActorStatusProvider &);

};