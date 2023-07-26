#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebBlockTag {

public:
    // prevent constructor by default
    WebBlockTag& operator=(WebBlockTag const&) = delete;
    WebBlockTag(WebBlockTag const&)            = delete;
    WebBlockTag()                              = delete;
};
