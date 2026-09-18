#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/v1_21_90/camera/CameraPreset.h"

namespace SharedTypes::v1_26_50 {

struct CameraPreset : public ::SharedTypes::v1_21_90::CameraPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mApplyInheritedStartingRotation;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mStartingRot;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
