/**
 * @file  Material.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Material.
 *
 */
class Material {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIAL
public:
    class Material& operator=(class Material const &) = delete;
    Material(class Material const &) = delete;
    Material() = delete;
#endif

public:
    /**
     * @symbol  ?getBlocksMotion\@Material\@\@QEBA_NXZ
     */
    MCAPI bool getBlocksMotion() const;
    /**
     * @symbol  ?getBlocksPrecipitation\@Material\@\@QEBA_NXZ
     */
    MCAPI bool getBlocksPrecipitation() const;
    /**
     * @symbol  ?getTranslucency\@Material\@\@QEBAMXZ
     */
    MCAPI float getTranslucency() const;
    /**
     * @symbol  ?isAlwaysDestroyable\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isAlwaysDestroyable() const;
    /**
     * @symbol  ?isLiquid\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isLiquid() const;
    /**
     * @symbol  ?isSolid\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSolid() const;
    /**
     * @symbol  ?isSolidBlocking\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlocking() const;
    /**
     * @symbol  ?isSuperHot\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSuperHot() const;
    /**
     * @symbol  ?isTopSolid\@Material\@\@QEBA_N_N0\@Z
     */
    MCAPI bool isTopSolid(bool, bool) const;
    /**
     * @symbol  ?isType\@Material\@\@QEBA_NW4MaterialType\@\@\@Z
     */
    MCAPI bool isType(enum class MaterialType) const;
    /**
     * @symbol  ??9Material\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Material const &) const;
    /**
     * @symbol  ??8Material\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Material const &) const;
    /**
     * @symbol  ?addMaterial\@Material\@\@SAXV?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void addMaterial(std::unique_ptr<class Material>);
    /**
     * @symbol  ?getMaterial\@Material\@\@SAAEBV1\@W4MaterialType\@\@\@Z
     */
    MCAPI static class Material const & getMaterial(enum class MaterialType);
    /**
     * @symbol  ?initMaterials\@Material\@\@SAXXZ
     */
    MCAPI static void initMaterials();
    /**
     * @symbol  ?teardownMaterials\@Material\@\@SAXXZ
     */
    MCAPI static void teardownMaterials();

//private:
    /**
     * @symbol  ?_setupSurfaceMaterials\@Material\@\@CAXXZ
     */
    MCAPI static void _setupSurfaceMaterials();

private:
    /**
     * @symbol  ?mInitialized\@Material\@\@0_NA
     */
    MCAPI static bool mInitialized;
    /**
     * @symbol  ?mMaterials\@Material\@\@0V?$vector\@V?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class Material>> mMaterials;

};