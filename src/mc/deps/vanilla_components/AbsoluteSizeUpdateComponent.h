#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct AbsoluteSizeUpdateComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mHeadOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mEyeOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mBreathingOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mMouthOffset;
    // NOLINTEND
};
