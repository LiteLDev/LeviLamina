#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct TargetInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mTargetCenterOffset;
    ::ll::TypedStorage<8, 8, int64>                    mTargetActorId;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::CameraInstructionOptions::TargetInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
