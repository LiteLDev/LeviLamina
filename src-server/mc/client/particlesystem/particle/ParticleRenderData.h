#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticleRenderData {
public:
    // ParticleRenderData inner types declare
    // clang-format off
    struct ParticleData;
    // clang-format on

    // ParticleRenderData inner types define
    enum class FaceCameraMode : int {
        None               = 0,
        RotateXYZ          = 1,
        RotateY            = 2,
        LookatXYZ          = 3,
        LookatY            = 4,
        LookatDirection    = 5,
        DirectionX         = 6,
        DirectionY         = 7,
        DirectionZ         = 8,
        EmitterTransformXY = 9,
        EmitterTransformXZ = 10,
        EmitterTransformYZ = 11,
    };

    struct ParticleData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnk9f9399;
        ::ll::UntypedStorage<1, 2>  mUnkb0a700;
        ::ll::UntypedStorage<4, 8>  mUnk5350f5;
        ::ll::UntypedStorage<4, 8>  mUnk7811d4;
        ::ll::UntypedStorage<4, 12> mUnk7de824;
        ::ll::UntypedStorage<4, 12> mUnkbe72b2;
        ::ll::UntypedStorage<4, 8>  mUnk3c117f;
        ::ll::UntypedStorage<4, 16> mUnkc655e2;
        ::ll::UntypedStorage<4, 4>  mUnkf8527f;
        ::ll::UntypedStorage<2, 2>  mUnk9f8005;
        ::ll::UntypedStorage<2, 2>  mUnkdb6a19;
        ::ll::UntypedStorage<4, 4>  mUnke8c4cc;
        ::ll::UntypedStorage<4, 64> mUnk383de6;
        ::ll::UntypedStorage<4, 4>  mUnk10a3e6;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParticleData& operator=(ParticleData const&);
        ParticleData(ParticleData const&);
        ParticleData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka80f66;
    ::ll::UntypedStorage<8, 24> mUnk12d8cc;
    ::ll::UntypedStorage<8, 24> mUnkeee99b;
    ::ll::UntypedStorage<8, 24> mUnke8c71b;
    ::ll::UntypedStorage<8, 64> mUnkad0153;
    ::ll::UntypedStorage<8, 64> mUnke15179;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleRenderData& operator=(ParticleRenderData const&);
    ParticleRenderData(ParticleRenderData const&);
    ParticleRenderData();
};
