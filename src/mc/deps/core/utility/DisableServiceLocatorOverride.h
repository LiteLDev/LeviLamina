#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DisableServiceLocatorOverride {
public:
    // prevent constructor by default
    DisableServiceLocatorOverride& operator=(DisableServiceLocatorOverride const&);
    DisableServiceLocatorOverride(DisableServiceLocatorOverride const&);
    DisableServiceLocatorOverride();
};
