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
            float r;
            float g;
            float b;

            // prevent constructor by default
            ColorOption& operator=(ColorOption const&);
            ColorOption(ColorOption const&);
            ColorOption();

        public:
            // NOLINTBEGIN
            // symbol:
            // ?read@ColorOption@FadeInstruction@CameraInstruction@@SA?AV?$Result@UColorOption@FadeInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction::ColorOption>
            read(class ReadOnlyBinaryStream&);

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
            // symbol:
            // ?read@TimeOption@FadeInstruction@CameraInstruction@@SA?AV?$Result@UTimeOption@FadeInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction::TimeOption>
            read(class ReadOnlyBinaryStream&);

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
        // symbol: ??8FadeInstruction@CameraInstruction@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct CameraInstruction::FadeInstruction const& other) const;

        // symbol: ?bindType@FadeInstruction@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
        MCAPI static void bindType(struct cereal::ReflectionCtx&);

        // symbol:
        // ?read@FadeInstruction@CameraInstruction@@SA?AV?$Result@UFadeInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
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
            uchar mType;
            float mTime;

            // prevent constructor by default
            EaseOption& operator=(EaseOption const&);
            EaseOption(EaseOption const&);
            EaseOption();

        public:
            // NOLINTBEGIN
            // symbol:
            // ?read@EaseOption@SetInstruction@CameraInstruction@@SA?AV?$Result@UEaseOption@SetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::EaseOption>
            read(class ReadOnlyBinaryStream&);

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
            // symbol:
            // ?read@FacingOption@SetInstruction@CameraInstruction@@SA?AV?$Result@UFacingOption@SetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::FacingOption>
            read(class ReadOnlyBinaryStream&);

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
            // symbol:
            // ?read@PosOption@SetInstruction@CameraInstruction@@SA?AV?$Result@UPosOption@SetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::PosOption>
            read(class ReadOnlyBinaryStream&);

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
            // symbol:
            // ?read@RotOption@SetInstruction@CameraInstruction@@SA?AV?$Result@URotOption@SetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::RotOption>
            read(class ReadOnlyBinaryStream&);

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
        // symbol: ??4SetInstruction@CameraInstruction@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct CameraInstruction::SetInstruction& operator=(struct CameraInstruction::SetInstruction&&);

        // symbol: ??4SetInstruction@CameraInstruction@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct CameraInstruction::SetInstruction& operator=(struct CameraInstruction::SetInstruction const&);

        // symbol: ??8SetInstruction@CameraInstruction@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct CameraInstruction::SetInstruction const& other) const;

        // symbol: ?write@SetInstruction@CameraInstruction@@QEBAXAEAVBinaryStream@@@Z
        MCAPI void write(class BinaryStream&) const;

        // symbol: ?bindType@SetInstruction@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
        MCAPI static void bindType(struct cereal::ReflectionCtx&);

        // symbol:
        // ?read@SetInstruction@CameraInstruction@@SA?AV?$Result@USetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
        MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction> read(class ReadOnlyBinaryStream&);

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
    // symbol: ?write@CameraInstruction@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // symbol: ?bindType@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?read@CameraInstruction@@SA?AV?$Result@UCameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<struct CameraInstruction> read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
