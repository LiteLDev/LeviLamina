#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ScalarOptional {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALAROPTIONAL
public:
    ScalarOptional& operator=(ScalarOptional const&) = delete;
    ScalarOptional(ScalarOptional const&)            = delete;
    ScalarOptional()                                 = delete;
#endif

public:
};
