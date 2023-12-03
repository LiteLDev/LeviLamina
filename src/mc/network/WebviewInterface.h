#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WebviewInterface {
public:
    // prevent constructor by default
    WebviewInterface& operator=(WebviewInterface const&);
    WebviewInterface(WebviewInterface const&);
    WebviewInterface();
};
