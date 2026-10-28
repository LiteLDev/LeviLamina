#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"

class Material {
public:
    // Material inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // Material inner types define
    enum class Settings : int {
        Solid    = 0,
        Liquid   = 1,
        NonSolid = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::MaterialType> mType;
    bool                                                            mNeverBuildable      : 1;
    bool                                                            mLiquid              : 1;
    bool                                                            mBlocksMotion        : 1;
    bool                                                            mBlocksPrecipitation : 1;
    bool                                                            mSolid               : 1;
    bool                                                            mSuperHot            : 1;
    // NOLINTEND
};

class Material::Builder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::Material> mMaterial;
    // NOLINTEND
};