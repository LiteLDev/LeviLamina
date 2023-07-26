#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Options {

public:
    // prevent constructor by default
    Options& operator=(Options const&) = delete;
    Options(Options const&)            = delete;
    Options()                          = delete;
};
