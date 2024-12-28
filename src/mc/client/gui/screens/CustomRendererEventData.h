#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomRendererEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke60ec2;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomRendererEventData& operator=(CustomRendererEventData const&);
    CustomRendererEventData(CustomRendererEventData const&);
    CustomRendererEventData();
};
