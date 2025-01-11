#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Vec3;
// clang-format on

class BoneOrientation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk7b9647;
    ::ll::UntypedStorage<4, 4>   mUnkfc37c2;
    ::ll::UntypedStorage<8, 48>  mUnkac4bc7;
    ::ll::UntypedStorage<8, 48>  mUnk5130e1;
    ::ll::UntypedStorage<4, 64>  mUnk73d5c3;
    ::ll::UntypedStorage<4, 64>  mUnk3c8170;
    ::ll::UntypedStorage<4, 4>   mUnke7eb93;
    ::ll::UntypedStorage<4, 36>  mUnkd169e4;
    ::ll::UntypedStorage<4, 36>  mUnk71b914;
    ::ll::UntypedStorage<4, 12>  mUnkb30823;
    ::ll::UntypedStorage<8, 216> mUnk6ae9fd;
    ::ll::UntypedStorage<4, 4>   mUnk65f333;
    ::ll::UntypedStorage<1, 1>   mUnk957887;
    ::ll::UntypedStorage<1, 1>   mUnkb5b12d;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneOrientation& operator=(BoneOrientation const&);
    BoneOrientation(BoneOrientation const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BoneOrientation();

    MCAPI void applyShortestPathBlend(
        ::BoneOrientation const& blendOut,
        ::BoneOrientation const& blendIn,
        float                    blendInWeight,
        float
    );

    MCFOLD ::HashedString const& getName() const;

    MCAPI ::Vec3 const& getPivot() const;

    MCFOLD ::Vec3& getPivot();

    MCAPI void setDefaultPose();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
