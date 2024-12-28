#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobJumpComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk3a6030;
    ::ll::UntypedStorage<1, 1>  mUnk97fd1f;
    ::ll::UntypedStorage<4, 4>  mUnkf8f42e;
    // NOLINTEND

public:
    // prevent constructor by default
    MobJumpComponent& operator=(MobJumpComponent const&);
    MobJumpComponent(MobJumpComponent const&);
    MobJumpComponent();
};
