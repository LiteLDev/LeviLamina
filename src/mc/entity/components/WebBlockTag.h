#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebBlockTag {
public:
    // prevent constructor by default
    WebBlockTag& operator=(WebBlockTag const&);
    WebBlockTag(WebBlockTag const&);
    WebBlockTag();
};
