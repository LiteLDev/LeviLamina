#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ControllerDirectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4> mUnk8c5a5d;
    ::ll::UntypedStorage<4, 8> mUnkd8f34a;
    // NOLINTEND

public:
    // prevent constructor by default
    ControllerDirectionEventData& operator=(ControllerDirectionEventData const&);
    ControllerDirectionEventData(ControllerDirectionEventData const&);
    ControllerDirectionEventData();
};
