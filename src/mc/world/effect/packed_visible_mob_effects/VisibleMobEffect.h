#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackedVisibleMobEffects {

struct VisibleMobEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6dba82;
    ::ll::UntypedStorage<1, 1> mUnk9e3318;
    // NOLINTEND

public:
    // prevent constructor by default
    VisibleMobEffect& operator=(VisibleMobEffect const&);
    VisibleMobEffect(VisibleMobEffect const&);
    VisibleMobEffect();
};

} // namespace PackedVisibleMobEffects
