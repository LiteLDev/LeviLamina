#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"

class Material {
public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);
    Material();

public:
    // NOLINTBEGIN
    MCAPI bool getBlocksMotion() const;

    MCAPI bool getBlocksPrecipitation() const;

    MCAPI float getTranslucency() const;

    MCAPI bool isAlwaysDestroyable() const;

    MCAPI bool isLiquid() const;

    MCAPI bool isSolid() const;

    MCAPI bool isSolidBlocking() const;

    MCAPI bool isSuperHot() const;

    MCAPI bool isTopSolid(bool includeWater, bool includeLeaves) const;

    MCAPI bool isType(::MaterialType surface) const;

    MCAPI bool operator!=(class Material const& rhs) const;

    MCAPI bool operator==(class Material const& rhs) const;

    MCAPI static void addMaterial(std::unique_ptr<class Material> mat);

    MCAPI static class Material const& getMaterial(::MaterialType surface);

    MCAPI static void initMaterials();

    MCAPI static void teardownMaterials();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _setupSurfaceMaterials();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool mInitialized;

    MCAPI static std::vector<std::unique_ptr<class Material>> mMaterials;

    // NOLINTEND
};
