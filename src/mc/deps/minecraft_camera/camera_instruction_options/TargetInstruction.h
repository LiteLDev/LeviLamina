#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<4, 16> mUnk6b9ff5;
    ::ll::UntypedStorage<8, 8>  mUnk616e91;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetInstruction& operator=(TargetInstruction const&);
    TargetInstruction(TargetInstruction const&);
    TargetInstruction();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::TargetInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
