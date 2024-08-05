#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct CameraInstruction {
public:
    // CameraInstruction inner types declare
    // clang-format off
    struct FadeInstruction;
    struct SetInstruction;
    // clang-format on

    // CameraInstruction inner types define
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
            // prevent constructor by default
            ColorOption& operator=(ColorOption const&);
            ColorOption(ColorOption const&);
            ColorOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction::ColorOption>
            read(class ReadOnlyBinaryStream&);

            // NOLINTEND
        };

        struct TimeOption {
        public:
            // prevent constructor by default
            TimeOption& operator=(TimeOption const&);
            TimeOption(TimeOption const&);
            TimeOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction::TimeOption>
            read(class ReadOnlyBinaryStream&);

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        FadeInstruction& operator=(FadeInstruction const&);
        FadeInstruction(FadeInstruction const&);
        FadeInstruction();

    public:
        // NOLINTBEGIN
        MCAPI bool operator==(struct CameraInstruction::FadeInstruction const& other) const;

        MCAPI static void bindType(struct cereal::ReflectionCtx&);

        MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction> read(class ReadOnlyBinaryStream&);

        // NOLINTEND
    };

    struct SetInstruction {
    public:
        // SetInstruction inner types declare
        // clang-format off
        struct EaseOption;
        struct FacingOption;
        struct PosOption;
        struct RotOption;
        // clang-format on

        // SetInstruction inner types define
        struct EaseOption {
        public:
            // prevent constructor by default
            EaseOption& operator=(EaseOption const&);
            EaseOption(EaseOption const&);
            EaseOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::EaseOption>
            read(class ReadOnlyBinaryStream&);

            // NOLINTEND
        };

        struct FacingOption {
        public:
            // prevent constructor by default
            FacingOption& operator=(FacingOption const&);
            FacingOption(FacingOption const&);
            FacingOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::FacingOption>
            read(class ReadOnlyBinaryStream&);

            // NOLINTEND
        };

        struct PosOption {
        public:
            // prevent constructor by default
            PosOption& operator=(PosOption const&);
            PosOption(PosOption const&);
            PosOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::PosOption>
            read(class ReadOnlyBinaryStream&);

            // NOLINTEND
        };

        struct RotOption {
        public:
            // prevent constructor by default
            RotOption& operator=(RotOption const&);
            RotOption(RotOption const&);
            RotOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::RotOption>
            read(class ReadOnlyBinaryStream&);

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        SetInstruction(SetInstruction const&);
        SetInstruction();

    public:
        // NOLINTBEGIN
        MCAPI struct CameraInstruction::SetInstruction& operator=(struct CameraInstruction::SetInstruction&&);

        MCAPI struct CameraInstruction::SetInstruction& operator=(struct CameraInstruction::SetInstruction const&);

        MCAPI bool operator==(struct CameraInstruction::SetInstruction const& other) const;

        MCAPI void write(class BinaryStream&) const;

        MCAPI static void bindType(struct cereal::ReflectionCtx&);

        MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction> read(class ReadOnlyBinaryStream&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CameraInstruction& operator=(CameraInstruction const&);
    CameraInstruction(CameraInstruction const&);
    CameraInstruction();

public:
    // NOLINTBEGIN
    MCAPI void write(class BinaryStream&) const;

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static class Bedrock::Result<struct CameraInstruction> read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
