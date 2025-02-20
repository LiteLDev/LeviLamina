#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StateVectorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk452b3f;
    ::ll::UntypedStorage<4, 12> mUnkc275c4;
    ::ll::UntypedStorage<4, 12> mUnk4a2ea4;
    // NOLINTEND

public:
    // prevent constructor by default
    StateVectorComponent& operator=(StateVectorComponent const&);
    StateVectorComponent(StateVectorComponent const&);
    StateVectorComponent();
};
