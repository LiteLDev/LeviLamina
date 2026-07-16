#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace CameraInstructionOptions {

struct TargetInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mTargetCenterOffset;
    ::ll::TypedStorage<8, 8, int64>                    mTargetActorId;
    // NOLINTEND
};

} // namespace CameraInstructionOptions
