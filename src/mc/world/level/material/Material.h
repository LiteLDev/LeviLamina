#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Material {

public:
    // prevent constructor by default
    Material& operator=(Material const&) = delete;
    Material(Material const&)            = delete;
    Material()                           = delete;

public:
    /**
     * @symbol ?getBlocksMotion\@Material\@\@QEBA_NXZ
     */
    MCAPI bool getBlocksMotion() const; // NOLINT
    /**
     * @symbol ?getBlocksPrecipitation\@Material\@\@QEBA_NXZ
     */
    MCAPI bool getBlocksPrecipitation() const; // NOLINT
    /**
     * @symbol ?getTranslucency\@Material\@\@QEBAMXZ
     */
    MCAPI float getTranslucency() const; // NOLINT
    /**
     * @symbol ?isAlwaysDestroyable\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isAlwaysDestroyable() const; // NOLINT
    /**
     * @symbol ?isLiquid\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isLiquid() const; // NOLINT
    /**
     * @symbol ?isSolid\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSolid() const; // NOLINT
    /**
     * @symbol ?isSolidBlocking\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlocking() const; // NOLINT
    /**
     * @symbol ?isSuperHot\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSuperHot() const; // NOLINT
    /**
     * @symbol ?isTopSolid\@Material\@\@QEBA_N_N0\@Z
     */
    MCAPI bool isTopSolid(bool, bool) const; // NOLINT
    /**
     * @symbol ?isType\@Material\@\@QEBA_NW4MaterialType\@\@\@Z
     */
    MCAPI bool isType(enum class MaterialType) const; // NOLINT
    /**
     * @symbol ??9Material\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Material const&) const; // NOLINT
    /**
     * @symbol ??8Material\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Material const&) const; // NOLINT
    /**
     * @symbol
     * ?addMaterial\@Material\@\@SAXV?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void addMaterial(std::unique_ptr<class Material>); // NOLINT
    /**
     * @symbol ?getMaterial\@Material\@\@SAAEBV1\@W4MaterialType\@\@\@Z
     */
    MCAPI static class Material const& getMaterial(enum class MaterialType); // NOLINT
    /**
     * @symbol ?initMaterials\@Material\@\@SAXXZ
     */
    MCAPI static void initMaterials(); // NOLINT
    /**
     * @symbol ?teardownMaterials\@Material\@\@SAXXZ
     */
    MCAPI static void teardownMaterials(); // NOLINT

    // private:
    /**
     * @symbol ?_setupSurfaceMaterials\@Material\@\@CAXXZ
     */
    MCAPI static void _setupSurfaceMaterials(); // NOLINT

private:
    /**
     * @symbol ?mInitialized\@Material\@\@0_NA
     */
    MCAPI static bool mInitialized; // NOLINT
    /**
     * @symbol
     * ?mMaterials\@Material\@\@0V?$vector\@V?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class Material>> mMaterials; // NOLINT
};
