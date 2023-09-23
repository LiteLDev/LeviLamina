#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {

struct VerboseCameraList {
public:
    // prevent constructor by default
    VerboseCameraList(VerboseCameraList const&);
    VerboseCameraList();

public:
    // NOLINTBEGIN
    // symbol: ??4VerboseCameraList@CameraPresetsInternals@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct CameraPresetsInternals::VerboseCameraList&
    operator=(struct CameraPresetsInternals::VerboseCameraList const&);

    // symbol: ??4VerboseCameraList@CameraPresetsInternals@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct CameraPresetsInternals::VerboseCameraList&
    operator=(struct CameraPresetsInternals::VerboseCameraList&&);

    // symbol: ??1VerboseCameraList@CameraPresetsInternals@@QEAA@XZ
    MCAPI ~VerboseCameraList();

    // symbol: ?bindType@VerboseCameraList@CameraPresetsInternals@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND
};

}; // namespace CameraPresetsInternals
