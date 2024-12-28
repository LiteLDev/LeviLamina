#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynamicRenderOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk7b895a;
    ::ll::UntypedStorage<4, 12> mUnkc2f2bc;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicRenderOffsetComponent& operator=(DynamicRenderOffsetComponent const&);
    DynamicRenderOffsetComponent(DynamicRenderOffsetComponent const&);
    DynamicRenderOffsetComponent();
};
