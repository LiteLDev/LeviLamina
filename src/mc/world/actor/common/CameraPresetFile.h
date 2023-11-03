#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraPresetsInternals {

struct CameraPresetFile {
public:
    // prevent constructor by default
    CameraPresetFile& operator=(CameraPresetFile const&);
    CameraPresetFile(CameraPresetFile const&);
    CameraPresetFile();

public:
    // NOLINTBEGIN
    // symbol: ??1CameraPresetFile@CameraPresetsInternals@@QEAA@XZ
    MCAPI ~CameraPresetFile();

    // symbol: ?bindType@CameraPresetFile@CameraPresetsInternals@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace CameraPresetsInternals
