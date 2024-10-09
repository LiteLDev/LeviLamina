#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

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
            float r;
            float g;
            float b;

            // prevent constructor by default
            ColorOption& operator=(ColorOption const&);
            ColorOption(ColorOption const&);
            ColorOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction::ColorOption>
            read(class ReadOnlyBinaryStream& stream);

            // NOLINTEND
        };

        struct TimeOption {
        public:
            float mFadeInTime;
            float mWaitTime;
            float mFadeOutTime;

            // prevent constructor by default
            TimeOption& operator=(TimeOption const&);
            TimeOption(TimeOption const&);
            TimeOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction::TimeOption>
            read(class ReadOnlyBinaryStream& stream);

            // NOLINTEND
        };

    public:
        std::optional<TimeOption>  mTimeData;
        std::optional<ColorOption> mColor;

        // prevent constructor by default
        FadeInstruction& operator=(FadeInstruction const&);
        FadeInstruction(FadeInstruction const&);
        FadeInstruction();

    public:
        // NOLINTBEGIN
        MCAPI bool operator==(struct CameraInstruction::FadeInstruction const& other) const;

        MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

        MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction>
        read(class ReadOnlyBinaryStream& stream);

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
            uchar mType;
            float mTime;

            // prevent constructor by default
            EaseOption& operator=(EaseOption const&);
            EaseOption(EaseOption const&);
            EaseOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::EaseOption>
            read(class ReadOnlyBinaryStream& stream);

            // NOLINTEND
        };

        struct FacingOption {
        public:
            Vec3 mFacing;

            // prevent constructor by default
            FacingOption& operator=(FacingOption const&);
            FacingOption(FacingOption const&);
            FacingOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::FacingOption>
            read(class ReadOnlyBinaryStream& stream);

            // NOLINTEND
        };

        struct PosOption {
        public:
            Vec3 mPos;

            // prevent constructor by default
            PosOption& operator=(PosOption const&);
            PosOption(PosOption const&);
            PosOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::PosOption>
            read(class ReadOnlyBinaryStream& stream);

            // NOLINTEND
        };

        struct RotOption {
        public:
            Vec2 mRot;

            // prevent constructor by default
            RotOption& operator=(RotOption const&);
            RotOption(RotOption const&);
            RotOption();

        public:
            // NOLINTBEGIN
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::RotOption>
            read(class ReadOnlyBinaryStream& stream);

            // NOLINTEND
        };

    public:
        std::optional<uint>         mPreset;
        std::optional<EaseOption>   mEase;
        std::optional<PosOption>    mPos;
        std::optional<RotOption>    mRot;
        std::optional<FacingOption> mFacing;
        std::optional<bool>         mDefaul;

        // prevent constructor by default
        SetInstruction(SetInstruction const&);
        SetInstruction();

    public:
        // NOLINTBEGIN
        MCAPI struct CameraInstruction::SetInstruction& operator=(struct CameraInstruction::SetInstruction&&);

        MCAPI struct CameraInstruction::SetInstruction& operator=(struct CameraInstruction::SetInstruction const&);

        MCAPI bool operator==(struct CameraInstruction::SetInstruction const& other) const;

        MCAPI void write(class BinaryStream& stream) const;

        MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

        MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction>
        read(class ReadOnlyBinaryStream& stream);

        // NOLINTEND
    };

public:
    std::optional<SetInstruction>  mSetInstruction;
    std::optional<FadeInstruction> mFadeInstruction;

    // prevent constructor by default
    CameraInstruction& operator=(CameraInstruction const&);
    CameraInstruction(CameraInstruction const&);
    CameraInstruction();

public:
    // NOLINTBEGIN
    MCAPI void write(class BinaryStream& stream) const;

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static class Bedrock::Result<struct CameraInstruction> read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
