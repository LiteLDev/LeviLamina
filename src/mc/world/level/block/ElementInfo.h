#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ElementInfo {
public:
    // prevent constructor by default
    ElementInfo& operator=(ElementInfo const&);
    ElementInfo(ElementInfo const&);
    ElementInfo();
};
