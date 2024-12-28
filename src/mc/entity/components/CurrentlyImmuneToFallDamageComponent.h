#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CurrentlyImmuneToFallDamageComponent {
public:
    // prevent constructor by default
    CurrentlyImmuneToFallDamageComponent& operator=(CurrentlyImmuneToFallDamageComponent const&);
    CurrentlyImmuneToFallDamageComponent(CurrentlyImmuneToFallDamageComponent const&);
    CurrentlyImmuneToFallDamageComponent();
};
