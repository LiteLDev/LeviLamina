#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CameraAimAssistPacketPayload.h"
#include "mc/platform/Result.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"
#include "mc/world/level/camera/controlscheme/Scheme.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Frustum;
class HashedString;
class IConstBlockSource;
class Player;
class ServerPlayer;
class Vec2;
class Vec3;
namespace CameraAimAssistErrorType { struct MissingDependencies; }
namespace CameraAimAssistErrorType { struct UnknownCategoryId; }
namespace CameraAimAssistErrorType { struct UnknownPresetId; }
namespace CameraAimAssistSystemUtil { struct BlockHitDetectResult; }
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
// clang-format on

namespace CameraAimAssistSystemUtil {
// functions
// NOLINTBEGIN
MCNAPI_C ::CameraAimAssistSystemUtil::BlockHitDetectResult blockHitDetect(
    ::Vec3 const&                                       start,
    ::Vec3 const&                                       end,
    ::IConstBlockSource const&                          region,
    int                                                 maxDist,
    bool                                                useSelectionBox,
    bool                                                targetingLiquid,
    ::std::function<bool(::Block const&)> const&        isAcceptedBlock,
    ::std::function<bool(::HashedString const&)> const& isBlockExcluded,
    ::std::function<int(::HashedString const&)> const&  getBlockPriority
);

MCNAPI void clearAimAssistForServerPlayer(::ServerPlayer& player);

MCNAPI_C ::Frustum createFrustumForCachedFrustumComponent(
    ::Vec3 const& start,
    ::Vec3 const& direction,
    ::Vec3 const& unitLeft,
    float         leftLength,
    ::Vec3 const& unitUp,
    float         upLength,
    ::Vec3 const& farCenter
);

MCNAPI_C ::CameraAimAssistSystemUtil::BlockHitDetectResult firstBlockHitDetect(
    ::IConstBlockSource const& region,
    ::BlockPos const&          currentBlockPos,
    ::Vec3 const&              start,
    ::Vec3 const&              end,
    ::Vec3 const&,
    ::std::function<bool(::Block const&)> const&        isAcceptedBlock,
    ::std::function<bool(::HashedString const&)> const& isBlockExcluded,
    ::std::function<int(::HashedString const&)> const&  getBlockPriority
);

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

MCNAPI_C ::Bedrock::Result<
    void,
    ::std::variant<
        ::CameraAimAssistErrorType::UnknownPresetId,
        ::CameraAimAssistErrorType::UnknownCategoryId,
        ::CameraAimAssistErrorType::MissingDependencies>>
setAimAssistFromClient(
    ::Player&                                    player,
    ::SharedTypes::v1_21_90::CameraPreset const& cameraPreset,
    bool                                         allowAimAssist
);

MCNAPI_C bool shouldRotatePlayerOnProjectile(::std::string_view cameraMode, ::ControlScheme::Scheme controlScheme);

MCNAPI_C bool stepAndUpdateCurrentBlockPos(
    ::Vec3&           currentPos,
    ::BlockPos&       currentBlockPos,
    ::Vec3 const&     endPos,
    ::BlockPos const& endBlockPos
);
// NOLINTEND

} // namespace CameraAimAssistSystemUtil
