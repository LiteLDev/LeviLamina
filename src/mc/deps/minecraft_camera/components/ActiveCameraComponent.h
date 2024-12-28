#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActiveCameraComponent {
public:
    // prevent constructor by default
    ActiveCameraComponent& operator=(ActiveCameraComponent const&);
    ActiveCameraComponent(ActiveCameraComponent const&);
    ActiveCameraComponent();
};
