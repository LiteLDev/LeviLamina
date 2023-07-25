#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class OptionalGlobalT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTIONALGLOBALT
public:
    OptionalGlobalT& operator=(OptionalGlobalT const&) = delete;
    OptionalGlobalT(OptionalGlobalT const&)            = delete;
    OptionalGlobalT()                                  = delete;
#endif

public:
};
