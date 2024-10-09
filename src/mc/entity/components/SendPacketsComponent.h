#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendPacketsComponent {
public:
    // prevent constructor by default
    SendPacketsComponent& operator=(SendPacketsComponent const&);
    SendPacketsComponent(SendPacketsComponent const&);
    SendPacketsComponent();

public:
    // NOLINTBEGIN
    MCAPI struct SendPacketsComponent& operator=(struct SendPacketsComponent&&);

    // NOLINTEND
};
