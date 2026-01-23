#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct SplineInstruction {
public:
    // SplineInstruction inner types declare
    // clang-format off
    struct SplineRotationOption;
    // clang-format on

    // SplineInstruction inner types define
    struct SplineRotationOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk7277dc;
        ::ll::UntypedStorage<4, 4>  mUnk946c73;
        // NOLINTEND

    public:
        // prevent constructor by default
        SplineRotationOption& operator=(SplineRotationOption const&);
        SplineRotationOption(SplineRotationOption const&);
        SplineRotationOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SplineInstruction::SplineRotationOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd74858;
    ::ll::UntypedStorage<1, 1>  mUnk9e368d;
    ::ll::UntypedStorage<8, 24> mUnk4ada9a;
    ::ll::UntypedStorage<8, 24> mUnk829cbd;
    ::ll::UntypedStorage<8, 24> mUnk7335d9;
    // NOLINTEND

public:
    // prevent constructor by default
    SplineInstruction(SplineInstruction const&);
    SplineInstruction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraInstructionOptions::SplineInstruction& operator=(::CameraInstructionOptions::SplineInstruction&&);

    MCNAPI ::CameraInstructionOptions::SplineInstruction&
    operator=(::CameraInstructionOptions::SplineInstruction const&);

    MCNAPI bool operator==(::CameraInstructionOptions::SplineInstruction const& other) const;

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~SplineInstruction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SplineInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraInstructionOptions
