#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/material/MaterialType.h"

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
    ::ll::UntypedStorage<4, 4> mUnk2f9c1b;
    ::ll::UntypedStorage<1, 1> mUnka992cc;
    ::ll::UntypedStorage<1, 1> mUnk5efe4c;
    ::ll::UntypedStorage<1, 1> mUnk2aafbc;
    ::ll::UntypedStorage<1, 1> mUnk4e9dbe;
    ::ll::UntypedStorage<1, 1> mUnk8febda;
    ::ll::UntypedStorage<1, 1> mUnkea2e8c;
    // NOLINTEND

public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);
    Material();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool getBlocksMotion() const;

    MCFOLD bool getBlocksPrecipitation() const;

    MCFOLD bool isLiquid() const;

    MCFOLD bool isSolid() const;

    MCAPI bool isSolidBlocking() const;

    MCFOLD bool isSuperHot() const;

    MCAPI bool isTopSolid(bool includeWater, bool includeLeaves) const;

    MCAPI bool isType(::MaterialType type) const;

    MCAPI bool operator!=(::Material const& rhs) const;

    MCAPI bool operator==(::Material const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setupMaterials();

    MCAPI static ::Material const& getMaterial(::MaterialType type);

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
