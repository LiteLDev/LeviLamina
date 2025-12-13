#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CameraAimAssistPacketPayload.h"
#include "mc/platform/Result.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ServerPlayer;
class Vec2;
namespace CameraAimAssistErrorType { struct MissingDependencies; }
namespace CameraAimAssistErrorType { struct UnknownCategoryId; }
namespace CameraAimAssistErrorType { struct UnknownPresetId; }
// clang-format on

namespace CameraAimAssistSystemUtil {
// functions
// NOLINTBEGIN
MCNAPI void clearAimAssistForServerPlayer(::ServerPlayer& player);

MCNAPI ::std::optional<::CameraAimAssistPacketPayload::TargetMode>
getPacketTargetMode(::CameraAimAssist::TargetMode targetMode);

MCNAPI ::Bedrock::Result<
    void,
    ::std::variant<
        ::CameraAimAssistErrorType::UnknownPresetId,
        ::CameraAimAssistErrorType::UnknownCategoryId,
        ::CameraAimAssistErrorType::MissingDependencies>>
setAimAssistForServerPlayer(
    ::ServerPlayer&               player,
    ::HashedString const&         presetId,
    ::CameraAimAssist::TargetMode targetMode,
    ::Vec2 const&                 viewAngle,
    float                         distance,
    bool                          showDebugRender
);
// NOLINTEND

} // namespace CameraAimAssistSystemUtil
