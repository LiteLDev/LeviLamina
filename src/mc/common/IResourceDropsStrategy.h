#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IResourceDropsStrategy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRESOURCEDROPSSTRATEGY
public:
    IResourceDropsStrategy& operator=(IResourceDropsStrategy const&) = delete;
    IResourceDropsStrategy(IResourceDropsStrategy const&)            = delete;
    IResourceDropsStrategy()                                         = delete;
#endif

public:
};
