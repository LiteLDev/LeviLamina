#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneOrientation {
public:
    // prevent constructor by default
    BoneOrientation& operator=(BoneOrientation const&);
    BoneOrientation(BoneOrientation const&);
    BoneOrientation();

public:
    // NOLINTBEGIN
    // symbol: ?applyShortestPathBlend@BoneOrientation@@QEAAXAEBV1@0MM@Z
    MCAPI void applyShortestPathBlend(
        class BoneOrientation const& blendOut,
        class BoneOrientation const& blendIn,
        float                        blendInWeight,
        float
    );

    // symbol: ?getName@BoneOrientation@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getName() const;

    // symbol: ?getPivot@BoneOrientation@@QEAAAEAVVec3@@XZ
    MCAPI class Vec3& getPivot();

    // symbol: ?getPivot@BoneOrientation@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getPivot() const;

    // symbol: ?setDefaultPose@BoneOrientation@@QEAAXXZ
    MCAPI void setDefaultPose();

    // NOLINTEND
};
