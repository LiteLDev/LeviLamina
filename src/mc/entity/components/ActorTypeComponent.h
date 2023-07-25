#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTypeComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORTYPECOMPONENT
public:
    ActorTypeComponent& operator=(ActorTypeComponent const&) = delete;
    ActorTypeComponent(ActorTypeComponent const&)            = delete;
    ActorTypeComponent()                                     = delete;
#endif

public:
};
