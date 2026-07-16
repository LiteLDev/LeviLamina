#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KineticEffectConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk992d2b;
    ::ll::UntypedStorage<4, 4> mUnka7d9bd;
    ::ll::UntypedStorage<2, 2> mUnk7e79ec;
    // NOLINTEND

public:
    // prevent constructor by default
    KineticEffectConditions& operator=(KineticEffectConditions const&);
    KineticEffectConditions(KineticEffectConditions const&);
    KineticEffectConditions();
};
