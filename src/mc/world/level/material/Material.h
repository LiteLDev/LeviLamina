#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"

class Material {
public:
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
    ::ll::TypedStorage<1, 1, bool>                                  mNeverBuildable;
    ::ll::TypedStorage<1, 1, bool>                                  mLiquid;
    ::ll::TypedStorage<1, 1, bool>                                  mBlocksMotion;
    ::ll::TypedStorage<1, 1, bool>                                  mBlocksPrecipitation;
    ::ll::TypedStorage<1, 1, bool>                                  mSolid;
    ::ll::TypedStorage<1, 1, bool>                                  mSuperHot;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setupMaterials();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::unique_ptr<::Material>>& mMaterials();
    // NOLINTEND
};
