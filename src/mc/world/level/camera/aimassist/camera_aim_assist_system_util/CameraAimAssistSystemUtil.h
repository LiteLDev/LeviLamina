#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"
#include "mc/world/level/camera/controlscheme/Scheme.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class HashedString;
class IConstBlockSource;
class Player;
class ServerPlayer;
class Vec2;
class Vec3;
struct CameraActivationEvent;
struct CameraAimAssistCachedFrustumComponent;
namespace CameraAimAssistErrorType { struct MissingDependencies; }
namespace CameraAimAssistErrorType { struct UnknownCategoryId; }
namespace CameraAimAssistErrorType { struct UnknownPresetId; }
namespace CameraAimAssistSystemUtil { struct BlockHitDetectResult; }
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
// clang-format on

namespace CameraAimAssistSystemUtil {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::CameraAimAssistSystemUtil::BlockHitDetectResult blockHitDetect(
    ::Vec3 const&                                    start,
    ::Vec3 const&                                    end,
    ::IConstBlockSource const&                       region,
    int                                              maxDist,
    bool                                             useSelectionBox,
    bool                                             targetingLiquid,
    ::std::function<bool(::Block const&)> const&     isAcceptedBlock,
    ::std::function<bool(::BlockType const&)> const& isBlockExcluded,
    ::std::function<int(::BlockType const&)> const&  getBlockPriority
);
#endif

MCNAPI void clearAimAssistForServerPlayer(::ServerPlayer& player);

#ifdef LL_PLAT_C
MCNAPI void clearAimAssistFromClient(::Player& player, bool allowAimAssist);

MCNAPI ::CameraAimAssistCachedFrustumComponent
createAimAssistFrustum(::Vec3 const& start, ::Vec3 const& viewDirection, ::Vec2 const& viewAngle, float distance);

MCNAPI bool isAimAssistSupportedCameraType(::CameraActivationEvent const& activationEvent);
#endif

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

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Result<
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

MCNAPI bool shouldRotatePlayerOnProjectile(::std::string_view cameraMode, ::ControlScheme::Scheme controlScheme);
#endif
// NOLINTEND

} // namespace CameraAimAssistSystemUtil
