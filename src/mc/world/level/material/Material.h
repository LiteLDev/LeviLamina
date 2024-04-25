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
    // symbol: ?getBlocksMotion@Material@@QEBA_NXZ
    MCAPI bool getBlocksMotion() const;

    // symbol: ?getBlocksPrecipitation@Material@@QEBA_NXZ
    MCAPI bool getBlocksPrecipitation() const;

    // symbol: ?getTranslucency@Material@@QEBAMXZ
    MCAPI float getTranslucency() const;

    // symbol: ?isAlwaysDestroyable@Material@@QEBA_NXZ
    MCAPI bool isAlwaysDestroyable() const;

    // symbol: ?isLiquid@Material@@QEBA_NXZ
    MCAPI bool isLiquid() const;

    // symbol: ?isSolid@Material@@QEBA_NXZ
    MCAPI bool isSolid() const;

    // symbol: ?isSolidBlocking@Material@@QEBA_NXZ
    MCAPI bool isSolidBlocking() const;

    // symbol: ?isSuperHot@Material@@QEBA_NXZ
    MCAPI bool isSuperHot() const;

    // symbol: ?isTopSolid@Material@@QEBA_N_N0@Z
    MCAPI bool isTopSolid(bool includeWater, bool includeLeaves) const;

    // symbol: ?isType@Material@@QEBA_NW4MaterialType@@@Z
    MCAPI bool isType(::MaterialType surface) const;

    // symbol: ??9Material@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class Material const& rhs) const;

    // symbol: ??8Material@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class Material const& rhs) const;

    // symbol: ?addMaterial@Material@@SAXV?$unique_ptr@VMaterial@@U?$default_delete@VMaterial@@@std@@@std@@@Z
    MCAPI static void addMaterial(std::unique_ptr<class Material> mat);

    // symbol: ?getMaterial@Material@@SAAEBV1@W4MaterialType@@@Z
    MCAPI static class Material const& getMaterial(::MaterialType surface);

    // symbol: ?initMaterials@Material@@SAXXZ
    MCAPI static void initMaterials();

    // symbol: ?teardownMaterials@Material@@SAXXZ
    MCAPI static void teardownMaterials();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setupSurfaceMaterials@Material@@CAXXZ
    MCAPI static void _setupSurfaceMaterials();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mInitialized@Material@@0_NA
    MCAPI static bool mInitialized;

    // symbol:
    // ?mMaterials@Material@@0V?$vector@V?$unique_ptr@VMaterial@@U?$default_delete@VMaterial@@@std@@@std@@V?$allocator@V?$unique_ptr@VMaterial@@U?$default_delete@VMaterial@@@std@@@std@@@2@@std@@A
    MCAPI static std::vector<std::unique_ptr<class Material>> mMaterials;

    // NOLINTEND
};
