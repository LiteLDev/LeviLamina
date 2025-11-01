#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneOrientation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7b9647;
    ::ll::UntypedStorage<4, 4> mUnkfc37c2;
    ::ll::UntypedStorage<8, 48> mUnkac4bc7;
    ::ll::UntypedStorage<4, 64> mUnk3c8170;
    ::ll::UntypedStorage<4, 36> mUnkd169e4;
    ::ll::UntypedStorage<4, 36> mUnk71b914;
    ::ll::UntypedStorage<8, 8> mUnkc3d2c4;
    ::ll::UntypedStorage<8, 8> mUnk66959a;
    ::ll::UntypedStorage<4, 12> mUnkb30823;
    ::ll::UntypedStorage<1, 1> mUnk65f333;
    ::ll::UntypedStorage<1, 1> mUnke7eb93;
    ::ll::UntypedStorage<1, 1> mUnk957887;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneOrientation(BoneOrientation const&);
    BoneOrientation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void applyShortestPathBlend(::BoneOrientation const& blendOut, ::BoneOrientation const& blendIn, float blendInWeight, float);

    MCNAPI ::BoneOrientation& operator=(::BoneOrientation const& rhs);

    MCNAPI ~BoneOrientation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
