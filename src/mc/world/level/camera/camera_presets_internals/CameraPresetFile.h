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
    MCAPI ~CameraPresetFile();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace CameraPresetsInternals
