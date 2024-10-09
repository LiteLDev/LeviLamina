#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraPresetsInternals {

struct CameraListFile {
public:
    // prevent constructor by default
    CameraListFile& operator=(CameraListFile const&);
    CameraListFile(CameraListFile const&);
    CameraListFile();

public:
    // NOLINTBEGIN
    MCAPI ~CameraListFile();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace CameraPresetsInternals
