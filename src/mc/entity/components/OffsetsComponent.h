#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OffsetsComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OFFSETSCOMPONENT
public:
    OffsetsComponent& operator=(OffsetsComponent const&) = delete;
    OffsetsComponent(OffsetsComponent const&)            = delete;
    OffsetsComponent()                                   = delete;
#endif

public:
};
