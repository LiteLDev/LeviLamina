#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WebviewInterface {

public:
    // prevent constructor by default
    WebviewInterface& operator=(WebviewInterface const&) = delete;
    WebviewInterface(WebviewInterface const&)            = delete;
    WebviewInterface()                                   = delete;
};
