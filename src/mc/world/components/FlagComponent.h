#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class FlagComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLAGCOMPONENT
public:
    FlagComponent& operator=(FlagComponent const&) = delete;
    FlagComponent(FlagComponent const&)            = delete;
    FlagComponent()                                = delete;
#endif

public:
};
