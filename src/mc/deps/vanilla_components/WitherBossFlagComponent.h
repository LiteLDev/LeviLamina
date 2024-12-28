#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitherBossFlagComponent {
public:
    // prevent constructor by default
    WitherBossFlagComponent& operator=(WitherBossFlagComponent const&);
    WitherBossFlagComponent(WitherBossFlagComponent const&);
    WitherBossFlagComponent();
};
