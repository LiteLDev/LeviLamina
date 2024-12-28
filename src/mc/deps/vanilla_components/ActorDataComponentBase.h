#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ActorDataComponentBase {
public:
    // prevent constructor by default
    ActorDataComponentBase& operator=(ActorDataComponentBase const&);
    ActorDataComponentBase(ActorDataComponentBase const&);
    ActorDataComponentBase();
};
