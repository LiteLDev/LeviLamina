#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

namespace CameraAimAssist {
// functions
// NOLINTBEGIN
MCAPI ::Bedrock::Result<::CameraAimAssist::TargetMode> readTargetMode(::ReadOnlyBinaryStream& stream);
// NOLINTEND

} // namespace CameraAimAssist
