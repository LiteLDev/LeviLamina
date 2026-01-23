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

struct FadeInstruction {
public:
    // FadeInstruction inner types declare
    // clang-format off
    struct ColorOption;
    struct TimeOption;
    // clang-format on

    // FadeInstruction inner types define
    struct ColorOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk55966d;
        ::ll::UntypedStorage<4, 4> mUnkcd05c2;
        ::ll::UntypedStorage<4, 4> mUnk1f3986;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorOption& operator=(ColorOption const&);
        ColorOption(ColorOption const&);
        ColorOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::FadeInstruction::ColorOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

    struct TimeOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk9dc74f;
        ::ll::UntypedStorage<4, 4> mUnk75ff6b;
        ::ll::UntypedStorage<4, 4> mUnkdc92c1;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeOption& operator=(TimeOption const&);
        TimeOption(TimeOption const&);
        TimeOption();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::FadeInstruction::TimeOption>
        read(::ReadOnlyBinaryStream& stream);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk452934;
    ::ll::UntypedStorage<4, 16> mUnk9ec57a;
    // NOLINTEND

public:
    // prevent constructor by default
    FadeInstruction& operator=(FadeInstruction const&);
    FadeInstruction(FadeInstruction const&);
    FadeInstruction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::CameraInstructionOptions::FadeInstruction const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::CameraInstructionOptions::FadeInstruction> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
