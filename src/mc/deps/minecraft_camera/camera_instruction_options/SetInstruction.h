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

struct SetInstruction {
public:
    // SetInstruction inner types declare
    // clang-format off
    struct EaseOption;
    struct EntityOffsetOption;
    struct FacingOption;
    struct PosOption;
    struct RotOption;
    struct ViewOffsetOption;
    // clang-format on

    // SetInstruction inner types define
    struct EaseOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk6a055f;
        ::ll::UntypedStorage<4, 4> mUnk422d8d;
        // NOLINTEND

    public:
        // prevent constructor by default
        EaseOption& operator=(EaseOption const&);
        EaseOption(EaseOption const&);
        EaseOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::EaseOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct EntityOffsetOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkb44364;
        ::ll::UntypedStorage<4, 4> mUnkf765f6;
        ::ll::UntypedStorage<4, 4> mUnk8b11d1;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntityOffsetOption& operator=(EntityOffsetOption const&);
        EntityOffsetOption(EntityOffsetOption const&);
        EntityOffsetOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::EntityOffsetOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct FacingOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk74da4b;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacingOption& operator=(FacingOption const&);
        FacingOption(FacingOption const&);
        FacingOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::FacingOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct PosOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk1335c1;
        // NOLINTEND

    public:
        // prevent constructor by default
        PosOption& operator=(PosOption const&);
        PosOption(PosOption const&);
        PosOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::PosOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct RotOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkcb577d;
        ::ll::UntypedStorage<4, 4> mUnkcd1291;
        // NOLINTEND

    public:
        // prevent constructor by default
        RotOption& operator=(RotOption const&);
        RotOption(RotOption const&);
        RotOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::RotOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct ViewOffsetOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkba5793;
        ::ll::UntypedStorage<4, 4> mUnk531490;
        // NOLINTEND

    public:
        // prevent constructor by default
        ViewOffsetOption& operator=(ViewOffsetOption const&);
        ViewOffsetOption(ViewOffsetOption const&);
        ViewOffsetOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction::ViewOffsetOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb511ba;
    ::ll::UntypedStorage<4, 12> mUnkc21473;
    ::ll::UntypedStorage<4, 16> mUnk166779;
    ::ll::UntypedStorage<4, 12> mUnkd3f807;
    ::ll::UntypedStorage<4, 16> mUnk881239;
    ::ll::UntypedStorage<4, 12> mUnk8c304f;
    ::ll::UntypedStorage<4, 16> mUnk16e02a;
    ::ll::UntypedStorage<1, 2>  mUnke52388;
    ::ll::UntypedStorage<1, 1>  mUnkf29831;
    // NOLINTEND

public:
    // prevent constructor by default
    SetInstruction& operator=(SetInstruction const&);
    SetInstruction(SetInstruction const&);
    SetInstruction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction const& other) const;

    MCNAPI void write(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::SetInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
