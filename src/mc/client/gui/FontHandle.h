#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FontHandle {
public:
    // prevent constructor by default
    FontHandle& operator=(FontHandle const&);
    FontHandle(FontHandle const&);
    FontHandle();
};
