/**
 * @file  Material.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1286761258
     * @symbol  ?getBlocksMotion\@Material\@\@QEBA_NXZ
     */
    MCAPI bool getBlocksMotion() const;
    /**
     * @hash   1616393742
     * @symbol  ?getBlocksPrecipitation\@Material\@\@QEBA_NXZ
     */
    MCAPI bool getBlocksPrecipitation() const;
    /**
     * @hash   -742428924
     * @symbol  ?getTranslucency\@Material\@\@QEBAMXZ
     */
    MCAPI float getTranslucency() const;
    /**
     * @hash   142738264
     * @symbol  ?isAlwaysDestroyable\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isAlwaysDestroyable() const;
    /**
     * @hash   409662492
     * @symbol  ?isLiquid\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isLiquid() const;
    /**
     * @hash   1529368852
     * @symbol  ?isSolid\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSolid() const;
    /**
     * @hash   -1353118322
     * @symbol  ?isSolidBlocking\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlocking() const;
    /**
     * @hash   911794328
     * @symbol  ?isSuperHot\@Material\@\@QEBA_NXZ
     */
    MCAPI bool isSuperHot() const;
    /**
     * @hash   -1308191509
     * @symbol  ?isTopSolid\@Material\@\@QEBA_N_N0\@Z
     */
    MCAPI bool isTopSolid(bool, bool) const;
    /**
     * @hash   1814086635
     * @symbol  ?isType\@Material\@\@QEBA_NW4MaterialType\@\@\@Z
     */
    MCAPI bool isType(enum class MaterialType) const;
    /**
     * @hash   -1253059069
     * @symbol  ??9Material\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Material const &) const;
    /**
     * @hash   2091172336
     * @symbol  ??8Material\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Material const &) const;
    /**
     * @hash   1676431990
     * @symbol  ?addMaterial\@Material\@\@SAXV?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void addMaterial(std::unique_ptr<class Material>);
    /**
     * @hash   -1491812259
     * @symbol  ?getMaterial\@Material\@\@SAAEBV1\@W4MaterialType\@\@\@Z
     */
    MCAPI static class Material const & getMaterial(enum class MaterialType);
    /**
     * @hash   -685688799
     * @symbol  ?initMaterials\@Material\@\@SAXXZ
     */
    MCAPI static void initMaterials();
    /**
     * @hash   -1193698111
     * @symbol  ?teardownMaterials\@Material\@\@SAXXZ
     */
    MCAPI static void teardownMaterials();

//private:
    /**
     * @hash   1387351302
     * @symbol  ?_setupSurfaceMaterials\@Material\@\@CAXXZ
     */
    MCAPI static void _setupSurfaceMaterials();

private:
    /**
     * @hash   -1997583236
     * @symbol  ?mInitialized\@Material\@\@0_NA
     */
    MCAPI static bool mInitialized;
    /**
     * @hash   971214237
     * @symbol  ?mMaterials\@Material\@\@0V?$vector\@V?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VMaterial\@\@U?$default_delete\@VMaterial\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class Material>> mMaterials;

};