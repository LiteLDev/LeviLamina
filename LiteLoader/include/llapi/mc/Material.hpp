/**
 * @file  Material.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   556010806
     * @symbol ?getBlocksMotion@Material@@QEBA_NXZ
     */
    MCAPI bool getBlocksMotion() const;
    /**
     * @hash   -797873490
     * @symbol ?getBlocksPrecipitation@Material@@QEBA_NXZ
     */
    MCAPI bool getBlocksPrecipitation() const;
    /**
     * @hash   -1007910940
     * @symbol ?getTranslucency@Material@@QEBAMXZ
     */
    MCAPI float getTranslucency() const;
    /**
     * @hash   993384712
     * @symbol ?isAlwaysDestroyable@Material@@QEBA_NXZ
     */
    MCAPI bool isAlwaysDestroyable() const;
    /**
     * @hash   1260185932
     * @symbol ?isLiquid@Material@@QEBA_NXZ
     */
    MCAPI bool isLiquid() const;
    /**
     * @hash   -975968662
     * @symbol ?isReplaceable@Material@@QEBA_NXZ
     */
    MCAPI bool isReplaceable() const;
    /**
     * @hash   -302157164
     * @symbol ?isSolid@Material@@QEBA_NXZ
     */
    MCAPI bool isSolid() const;
    /**
     * @hash   2142173966
     * @symbol ?isSolidBlocking@Material@@QEBA_NXZ
     */
    MCAPI bool isSolidBlocking() const;
    /**
     * @hash   95314952
     * @symbol ?isSuperHot@Material@@QEBA_NXZ
     */
    MCAPI bool isSuperHot() const;
    /**
     * @hash   -2107851141
     * @symbol ?isTopSolid@Material@@QEBA_N_N0@Z
     */
    MCAPI bool isTopSolid(bool, bool) const;
    /**
     * @hash   1014427003
     * @symbol ?isType@Material@@QEBA_NW4MaterialType@@@Z
     */
    MCAPI bool isType(enum class MaterialType) const;
    /**
     * @hash   -2052841709
     * @symbol ??9Material@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator!=(class Material const &) const;
    /**
     * @hash   1291389696
     * @symbol ??8Material@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class Material const &) const;
    /**
     * @hash   876818486
     * @symbol ?addMaterial@Material@@SAXV?$unique_ptr@VMaterial@@U?$default_delete@VMaterial@@@std@@@std@@@Z
     */
    MCAPI static void addMaterial(std::unique_ptr<class Material>);
    /**
     * @hash   2003541533
     * @symbol ?getMaterial@Material@@SAAEBV1@W4MaterialType@@@Z
     */
    MCAPI static class Material const & getMaterial(enum class MaterialType);
    /**
     * @hash   -1485302303
     * @symbol ?initMaterials@Material@@SAXXZ
     */
    MCAPI static void initMaterials();
    /**
     * @hash   -1993357743
     * @symbol ?teardownMaterials@Material@@SAXXZ
     */
    MCAPI static void teardownMaterials();

//private:
    /**
     * @hash   587568662
     * @symbol ?_setupSurfaceMaterials@Material@@CAXXZ
     */
    MCAPI static void _setupSurfaceMaterials();

private:
    /**
     * @hash   1394351580
     * @symbol ?mInitialized@Material@@0_NA
     */
    MCAPI static bool mInitialized;
    /**
     * @hash   68181757
     * @symbol ?mMaterials@Material@@0V?$vector@V?$unique_ptr@VMaterial@@U?$default_delete@VMaterial@@@std@@@std@@V?$allocator@V?$unique_ptr@VMaterial@@U?$default_delete@VMaterial@@@std@@@std@@@2@@std@@A
     */
    MCAPI static std::vector<std::unique_ptr<class Material>> mMaterials;

};