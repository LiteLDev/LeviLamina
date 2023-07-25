#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuiltInMobComponents {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUILTINMOBCOMPONENTS
public:
    BuiltInMobComponents& operator=(BuiltInMobComponents const&) = delete;
    BuiltInMobComponents(BuiltInMobComponents const&)            = delete;
    BuiltInMobComponents()                                       = delete;
#endif

public:
};
