#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AbilitiesComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABILITIESCOMPONENT
public:
    AbilitiesComponent& operator=(AbilitiesComponent const&) = delete;
    AbilitiesComponent(AbilitiesComponent const&)            = delete;
    AbilitiesComponent()                                     = delete;
#endif

public:
};
