#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerCameraStatesComponent {
public:
    // prevent constructor by default
    ServerCameraStatesComponent& operator=(ServerCameraStatesComponent const&);
    ServerCameraStatesComponent(ServerCameraStatesComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ServerCameraStatesComponent@@QEAA@XZ
    MCAPI ServerCameraStatesComponent();

    // symbol: ??0ServerCameraStatesComponent@@QEAA@AEBVCameraPresets@@@Z
    MCAPI explicit ServerCameraStatesComponent(class CameraPresets const&);

    // symbol: ??4ServerCameraStatesComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ServerCameraStatesComponent& operator=(struct ServerCameraStatesComponent&&);

    // NOLINTEND
};
