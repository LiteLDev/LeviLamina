#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AttachedRocketsComponent {
public:
    // prevent constructor by default
    AttachedRocketsComponent& operator=(AttachedRocketsComponent const&);
    AttachedRocketsComponent(AttachedRocketsComponent const&);
    AttachedRocketsComponent();

public:
    // NOLINTBEGIN
    MCAPI struct AttachedRocketsComponent& operator=(struct AttachedRocketsComponent&&);

    // NOLINTEND
};
