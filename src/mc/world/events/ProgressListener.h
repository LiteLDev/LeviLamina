#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProgressListener {

public:
    // prevent constructor by default
    ProgressListener& operator=(ProgressListener const&) = delete;
    ProgressListener(ProgressListener const&)            = delete;
    ProgressListener()                                   = delete;
};
