#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShieldItemUtils {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIELDITEMUTILS
public:
    ShieldItemUtils& operator=(ShieldItemUtils const&) = delete;
    ShieldItemUtils(ShieldItemUtils const&)            = delete;
    ShieldItemUtils()                                  = delete;
#endif

public:
    /**
     * @symbol ?isBlockedDamageCause\@ShieldItemUtils\@\@SA_NAEBVActorDamageSource\@\@\@Z
     */
    MCAPI static bool isBlockedDamageCause(class ActorDamageSource const&);

    // private:

private:
    /**
     * @symbol
     * ?mAlwaysBlockableDamageCauses\@ShieldItemUtils\@\@0V?$vector\@W4ActorDamageCause\@\@V?$allocator\@W4ActorDamageCause\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class ActorDamageCause> const mAlwaysBlockableDamageCauses;
};
