#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebviewError {
public:
    // prevent constructor by default
    WebviewError& operator=(WebviewError const&);
    WebviewError(WebviewError const&);
    WebviewError();
};
