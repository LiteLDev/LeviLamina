#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerCameraStatesComponent {
public:
    // prevent constructor by default
    ServerCameraStatesComponent& operator=(ServerCameraStatesComponent const&);
    ServerCameraStatesComponent(ServerCameraStatesComponent const&);

public:
    // NOLINTBEGIN
    MCAPI ServerCameraStatesComponent();

    MCAPI explicit ServerCameraStatesComponent(class CameraPresets const& presets);

    MCAPI struct ServerCameraStatesComponent& operator=(struct ServerCameraStatesComponent&&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
