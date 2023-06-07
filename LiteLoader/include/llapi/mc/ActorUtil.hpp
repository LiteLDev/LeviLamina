/**
 * @file  ActorUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorUtil.
 *
 */
namespace ActorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?canActorBeKilled\@ActorUtil\@\@YA?BW4CanBeKilledResult\@1\@AEBVActor\@\@_N\@Z
     */
    MCAPI enum class ActorUtil::CanBeKilledResult const canActorBeKilled(class Actor const &, bool);
    /**
     * @symbol ?startFizzEffect\@ActorUtil\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void startFizzEffect(class Actor &);

};