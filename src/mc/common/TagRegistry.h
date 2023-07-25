#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class TagRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAGREGISTRY
public:
    TagRegistry& operator=(TagRegistry const&) = delete;
    TagRegistry(TagRegistry const&)            = delete;
    TagRegistry()                              = delete;
#endif

public:
};
