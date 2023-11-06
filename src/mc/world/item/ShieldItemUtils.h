#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"

class ShieldItemUtils {
public:
    // prevent constructor by default
    ShieldItemUtils& operator=(ShieldItemUtils const&);
    ShieldItemUtils(ShieldItemUtils const&);
    ShieldItemUtils();

public:
    // NOLINTBEGIN
    // symbol: ?isBlockedDamageCause@ShieldItemUtils@@SA_NAEBVActorDamageSource@@@Z
    MCAPI static bool isBlockedDamageCause(class ActorDamageSource const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mAlwaysBlockableDamageCauses@ShieldItemUtils@@0V?$vector@W4ActorDamageCause@@V?$allocator@W4ActorDamageCause@@@std@@@std@@B
    MCAPI static std::vector<::ActorDamageCause> const mAlwaysBlockableDamageCauses;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mAlwaysBlockableDamageCauses() { return mAlwaysBlockableDamageCauses; }

    // NOLINTEND
};
