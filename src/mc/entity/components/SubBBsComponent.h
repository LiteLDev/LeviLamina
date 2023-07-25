#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubBBsComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBBBSCOMPONENT
public:
    SubBBsComponent& operator=(SubBBsComponent const&) = delete;
    SubBBsComponent(SubBBsComponent const&)            = delete;
    SubBBsComponent()                                  = delete;
#endif

public:
};
