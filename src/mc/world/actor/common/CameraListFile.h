#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {

struct CameraListFile {
public:
    // prevent constructor by default
    CameraListFile& operator=(CameraListFile const&);
    CameraListFile(CameraListFile const&);
    CameraListFile();

public:
    // NOLINTBEGIN
    // symbol: ??1CameraListFile@CameraPresetsInternals@@QEAA@XZ
    MCAPI ~CameraListFile();

    // symbol: ?bindType@CameraListFile@CameraPresetsInternals@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND
};

}; // namespace CameraPresetsInternals
