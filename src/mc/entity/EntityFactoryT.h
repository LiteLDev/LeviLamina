#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct EntityFactoryT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYFACTORYT
public:
    EntityFactoryT& operator=(EntityFactoryT const&) = delete;
    EntityFactoryT(EntityFactoryT const&)            = delete;
    EntityFactoryT()                                 = delete;
#endif

public:
};
