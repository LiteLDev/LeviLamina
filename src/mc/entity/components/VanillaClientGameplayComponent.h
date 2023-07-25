#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaClientGameplayComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLACLIENTGAMEPLAYCOMPONENT
public:
    VanillaClientGameplayComponent& operator=(VanillaClientGameplayComponent const&) = delete;
    VanillaClientGameplayComponent(VanillaClientGameplayComponent const&)            = delete;
    VanillaClientGameplayComponent()                                                 = delete;
#endif

public:
};
