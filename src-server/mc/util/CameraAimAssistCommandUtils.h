#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class Player;
class Vec2;
// clang-format on

namespace CameraAimAssistCommandUtils {
// functions
// NOLINTBEGIN
MCNAPI void clearAimAssistForPlayerTargets(::CommandSelector<::Player> const& playerTargets, ::CommandOrigin const& origin, ::CommandOutput& output);

MCNAPI void setAimAssistForPlayerTargets(::std::string const& presetId, ::CameraAimAssist::TargetMode targetMode, ::Vec2 const& viewAngle, float distance, ::CommandSelector<::Player> const& playerTargets, ::CommandOrigin const& origin, ::CommandOutput& output, bool showDebugRender);
// NOLINTEND

}
