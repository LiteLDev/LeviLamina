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

struct FovInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk729899;
    ::ll::UntypedStorage<1, 1> mUnk71273f;
    ::ll::UntypedStorage<4, 4> mUnkf5916e;
    ::ll::UntypedStorage<4, 4> mUnk588cfc;
    // NOLINTEND

public:
    // prevent constructor by default
    FovInstruction& operator=(FovInstruction const&);
    FovInstruction(FovInstruction const&);
    FovInstruction();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::FovInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
