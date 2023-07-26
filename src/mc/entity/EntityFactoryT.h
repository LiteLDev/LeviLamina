#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct EntityFactoryT {

public:
    // prevent constructor by default
    EntityFactoryT& operator=(EntityFactoryT const&) = delete;
    EntityFactoryT(EntityFactoryT const&)            = delete;
    EntityFactoryT()                                 = delete;
};
