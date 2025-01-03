#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContentSource {
public:
    // prevent constructor by default
    ContentSource& operator=(ContentSource const&);
    ContentSource(ContentSource const&);
    ContentSource();
};
