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
        ::ll::TypedStorage<4, 4, float const> startY;
        ::ll::TypedStorage<4, 4, int const>   startYUnit;
        ::ll::TypedStorage<4, 4, float const> startYFraction;
        // NOLINTEND
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
    MCAPI void _blendCubeCorners(
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

    MCAPI void
    _readArea(float* buffer, ::Vec3 const& pos, int xSize, int ySize, int zSize, ::Vec3 const& s, float pow) const;
    // NOLINTEND
};
