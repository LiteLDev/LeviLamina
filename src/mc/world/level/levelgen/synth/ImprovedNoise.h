#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct YBlendingBugSettings;
// clang-format on

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
    // prevent constructor by default
    ImprovedNoise& operator=(ImprovedNoise const&);
    ImprovedNoise(ImprovedNoise const&);
    ImprovedNoise();

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
