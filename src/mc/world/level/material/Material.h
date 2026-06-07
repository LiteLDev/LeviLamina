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
    // member functions
    // NOLINTBEGIN
    MCFOLD bool getBlocksMotion() const;

    MCFOLD bool isLiquid() const;

    MCFOLD bool isSolid() const;

    MCAPI bool isSolidBlocking() const;

    MCFOLD bool isSuperHot() const;

    MCAPI bool isTopSolid(bool includeWater, bool includeLeaves) const;

    MCAPI bool isType(::SharedTypes::v1_26_20::MaterialType type) const;

    MCAPI bool operator!=(::Material const& rhs) const;

    MCAPI bool operator==(::Material const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setupMaterials();

    MCAPI static ::Material const& getMaterial(::SharedTypes::v1_26_20::MaterialType type);

    MCAPI static void initMaterials();

    MCAPI static void teardownMaterials();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& mInitialized();

    MCAPI static ::std::vector<::std::unique_ptr<::Material>>& mMaterials();
    // NOLINTEND
};
