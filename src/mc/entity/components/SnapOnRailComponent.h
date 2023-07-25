#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SnapOnRailComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPONRAILCOMPONENT
public:
    SnapOnRailComponent& operator=(SnapOnRailComponent const&) = delete;
    SnapOnRailComponent(SnapOnRailComponent const&)            = delete;
    SnapOnRailComponent()                                      = delete;
#endif

public:
};
