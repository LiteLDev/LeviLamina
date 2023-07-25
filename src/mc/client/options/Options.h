#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Options {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTIONS
public:
    Options& operator=(Options const&) = delete;
    Options(Options const&)            = delete;
    Options()                          = delete;
#endif

public:
};
