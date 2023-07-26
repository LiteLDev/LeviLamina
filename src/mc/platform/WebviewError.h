#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebviewError {

public:
    // prevent constructor by default
    WebviewError& operator=(WebviewError const&) = delete;
    WebviewError(WebviewError const&)            = delete;
    WebviewError()                               = delete;
};
