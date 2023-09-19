#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenChangedEventing {
public:
    // prevent constructor by default
    IScreenChangedEventing& operator=(IScreenChangedEventing const&);
    IScreenChangedEventing(IScreenChangedEventing const&);
    IScreenChangedEventing();
};
