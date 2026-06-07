#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct FovInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mFov;
    ::ll::TypedStorage<1, 1, bool>         mFovClear;
    ::ll::TypedStorage<4, 4, float>        mFovEaseTime;
    ::ll::TypedStorage<4, 4, ::EasingType> mFovEaseType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::CameraInstructionOptions::FovInstruction const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
