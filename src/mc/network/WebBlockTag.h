#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebBlockTag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBBLOCKTAG
public:
    WebBlockTag& operator=(WebBlockTag const&) = delete;
    WebBlockTag(WebBlockTag const&)            = delete;
    WebBlockTag()                              = delete;
#endif

public:
};
