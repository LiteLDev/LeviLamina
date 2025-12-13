#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/levelgen/synth/YBlendingBugSettings.h"

class ImprovedNoise {
public:
    // ImprovedNoise inner types declare
    // clang-format off
    struct LegacyWorldgenYStart;
    // clang-format on

    // ImprovedNoise inner types define
    struct LegacyWorldgenYStart {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkdbae5b;
        ::ll::UntypedStorage<4, 4> mUnke0eb3a;
        ::ll::UntypedStorage<4, 4> mUnk4bc513;
        // NOLINTEND

    public:
        // prevent constructor by default
        LegacyWorldgenYStart& operator=(LegacyWorldgenYStart const&);
        LegacyWorldgenYStart(LegacyWorldgenYStart const&);
        LegacyWorldgenYStart();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                 mOrigin;
    ::ll::TypedStorage<4, 2048, int[512]>             mNoiseMap;
    ::ll::TypedStorage<4, 12, ::YBlendingBugSettings> mYBlendingSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _blendCubeCorners(
        ::Vec3 const& origin,
        int           X,
        int           Y,
        int           Z,
        float         u,
        float&        vv0,
        float&        vv1,
        float&        vv2,
        float&        vv3
    ) const;

    MCNAPI void readArea(
        float*        buffer,
        ::Vec3 const& pos,
        int           xCount,
        int           yCount,
        int           zCount,
        ::Vec3 const& s,
        float         pow,
        int           xStep,
        int           yStep,
        int           zStep
    ) const;
    // NOLINTEND
};
