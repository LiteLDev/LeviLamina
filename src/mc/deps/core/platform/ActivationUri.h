#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActivationUri {

public:
    // prevent constructor by default
    ActivationUri& operator=(ActivationUri const&) = delete;
    ActivationUri(ActivationUri const&)            = delete;
    ActivationUri()                                = delete;
};
