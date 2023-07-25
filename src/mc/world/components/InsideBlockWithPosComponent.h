#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct InsideBlockWithPosComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKWITHPOSCOMPONENT
public:
    InsideBlockWithPosComponent& operator=(InsideBlockWithPosComponent const&) = delete;
    InsideBlockWithPosComponent(InsideBlockWithPosComponent const&)            = delete;
    InsideBlockWithPosComponent()                                              = delete;
#endif

public:
};
