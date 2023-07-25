#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CurrentTickComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CURRENTTICKCOMPONENT
public:
    CurrentTickComponent& operator=(CurrentTickComponent const&) = delete;
    CurrentTickComponent(CurrentTickComponent const&)            = delete;
    CurrentTickComponent()                                       = delete;
#endif

public:
};
