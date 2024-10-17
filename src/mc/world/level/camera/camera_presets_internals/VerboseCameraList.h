#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraPresetsInternals {

struct VerboseCameraList {
public:
    // prevent constructor by default
    VerboseCameraList(VerboseCameraList const&);
    VerboseCameraList();

public:
    // NOLINTBEGIN
    MCAPI struct CameraPresetsInternals::VerboseCameraList&
    operator=(struct CameraPresetsInternals::VerboseCameraList&&);

    MCAPI struct CameraPresetsInternals::VerboseCameraList&
    operator=(struct CameraPresetsInternals::VerboseCameraList const&);

    MCAPI ~VerboseCameraList();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CameraPresetsInternals
