#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefaultInputCameraComponent {
public:
    // prevent constructor by default
    DefaultInputCameraComponent& operator=(DefaultInputCameraComponent const&);
    DefaultInputCameraComponent(DefaultInputCameraComponent const&);
    DefaultInputCameraComponent();
};
