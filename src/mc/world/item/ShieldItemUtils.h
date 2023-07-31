#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShieldItemUtils {

public:
    // prevent constructor by default
    ShieldItemUtils& operator=(ShieldItemUtils const&) = delete;
    ShieldItemUtils(ShieldItemUtils const&)            = delete;
    ShieldItemUtils()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?isBlockedDamageCause\@ShieldItemUtils\@\@SA_NAEBVActorDamageSource\@\@\@Z
     */
    MCAPI static bool isBlockedDamageCause(class ActorDamageSource const&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mAlwaysBlockableDamageCauses\@ShieldItemUtils\@\@0V?$vector\@W4ActorDamageCause\@\@V?$allocator\@W4ActorDamageCause\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class ActorDamageCause> const mAlwaysBlockableDamageCauses;
    // NOLINTEND
};
