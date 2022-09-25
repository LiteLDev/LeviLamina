/**
 * @file  Biome.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class VanillaBiomeTypes;

#undef BEFORE_EXTRA

/**
 * @brief MC class Biome.
 *
 */
class Biome {

#define AFTER_EXTRA
    // Add Member There
public:
    enum class BiomeTempCategory;
    LIAPI int getId() const;
    LIAPI std::string const& getName() const;
    LIAPI static Biome* fromId(int id);
    LIAPI static Biome* fromName(std::string const& name);
    LIAPI static std::vector<Biome*> getBiomesByType(VanillaBiomeTypes type);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOME
public:
    class Biome& operator=(class Biome const &) = delete;
    Biome(class Biome const &) = delete;
    Biome() = delete;
#endif

public:
    /**
     * @hash   2000675919
     * @symbol ??0Biome@@QEAA@H@Z
     */
    MCAPI Biome(int);
    /**
     * @hash   1408027046
     * @symbol ?addTag@Biome@@QEAAAEAV1@VHashedString@@AEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
     */
    MCAPI class Biome & addTag(class HashedString, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> &);
    /**
     * @hash   989437866
     * @symbol ?canHaveSnowfall@Biome@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool canHaveSnowfall(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   -1562246696
     * @symbol ?getBiomeType@Biome@@QEBA?AW4VanillaBiomeTypes@@XZ
     */
    MCAPI enum VanillaBiomeTypes getBiomeType() const;
    /**
     * @hash   -1587574909
     * @symbol ?getBirchFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
     */
    MCAPI int getBirchFoliageColor(class BlockPos const &) const;
    /**
     * @hash   1544651490
     * @symbol ?getDefaultBiomeTemperature@Biome@@QEBAMXZ
     */
    MCAPI float getDefaultBiomeTemperature() const;
    /**
     * @hash   508238652
     * @symbol ?getDownfall@Biome@@QEBAMXZ
     */
    MCAPI float getDownfall() const;
    /**
     * @hash   1019921075
     * @symbol ?getEvergreenFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
     */
    MCAPI int getEvergreenFoliageColor(class BlockPos const &) const;
    /**
     * @hash   2032746533
     * @symbol ?getFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
     */
    MCAPI int getFoliageColor(class BlockPos const &) const;
    /**
     * @hash   1415100901
     * @symbol ?getMapBirchFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
     */
    MCAPI int getMapBirchFoliageColor(class BlockPos const &) const;
    /**
     * @hash   -27370507
     * @symbol ?getMapEvergreenFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
     */
    MCAPI int getMapEvergreenFoliageColor(class BlockPos const &) const;
    /**
     * @hash   -652256285
     * @symbol ?getMapFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
     */
    MCAPI int getMapFoliageColor(class BlockPos const &) const;
    /**
     * @hash   -245972173
     * @symbol ?getMapGrassColor@Biome@@QEBAHAEBVBlockPos@@@Z
     */
    MCAPI int getMapGrassColor(class BlockPos const &) const;
    /**
     * @hash   640417562
     * @symbol ?getMobs@Biome@@QEBAAEBV?$vector@VMobSpawnerData@@V?$allocator@VMobSpawnerData@@@std@@@std@@XZ
     */
    MCAPI std::vector<class MobSpawnerData> const & getMobs() const;
    /**
     * @hash   277486654
     * @symbol ?getMobsMutable@Biome@@QEAAAEAV?$vector@VMobSpawnerData@@V?$allocator@VMobSpawnerData@@@std@@@std@@XZ
     */
    MCAPI std::vector<class MobSpawnerData> & getMobsMutable();
    /**
     * @hash   -829086808
     * @symbol ?getSnowAccumulationLayers@Biome@@QEBAHXZ
     */
    MCAPI int getSnowAccumulationLayers() const;
    /**
     * @hash   -671257100
     * @symbol ?getTemperature@Biome@@QEBAMAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI float getTemperature(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   181269609
     * @symbol ?getTemperatureCategory@Biome@@QEBA?AW4BiomeTempCategory@1@XZ
     */
    MCAPI enum Biome::BiomeTempCategory getTemperatureCategory() const;
    /**
     * @hash   -2143528325
     * @symbol ?getTemperatureWorldGen@Biome@@QEBAMAEBVBlockPos@@F@Z
     */
    MCAPI float getTemperatureWorldGen(class BlockPos const &, short) const;
    /**
     * @hash   -85156086
     * @symbol ?hasTag@Biome@@QEBA_NAEBU?$IDType@UBiomeTagIDType@@@@AEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
     */
    MCAPI bool hasTag(struct IDType<struct BiomeTagIDType> const &, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const &) const;
    /**
     * @hash   -91717903
     * @symbol ?hasTag@Biome@@QEBA_NAEBVWellKnownTagID@@@Z
     */
    MCAPI bool hasTag(class WellKnownTagID const &) const;
    /**
     * @hash   451657366
     * @symbol ?hasTag@Biome@@QEBA_N_KAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
     */
    MCAPI bool hasTag(unsigned __int64, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const &) const;
    /**
     * @hash   367774618
     * @symbol ?initEntity@Biome@@QEAAXAEAVEntityRegistry@@@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @hash   -65877330
     * @symbol ?isHumid@Biome@@QEBA_NXZ
     */
    MCAPI bool isHumid() const;
    /**
     * @hash   1497694014
     * @symbol ?isSnowCovered@Biome@@QEBA_NXZ
     */
    MCAPI bool isSnowCovered() const;
    /**
     * @hash   1365272284
     * @symbol ?setColor@Biome@@QEAAAEAV1@H@Z
     */
    MCAPI class Biome & setColor(int);
    /**
     * @hash   -170091347
     * @symbol ?setColor@Biome@@QEAAAEAV1@H_N@Z
     */
    MCAPI class Biome & setColor(int, bool);
    /**
     * @hash   -1469686150
     * @symbol ?setDepthAndScale@Biome@@QEAAAEAV1@AEBUBiomeHeight@@@Z
     */
    MCAPI class Biome & setDepthAndScale(struct BiomeHeight const &);
    /**
     * @hash   -1011409476
     * @symbol ?setMapWaterColor@Biome@@QEAAAEAV1@H@Z
     */
    MCAPI class Biome & setMapWaterColor(int);
    /**
     * @hash   -1115977532
     * @symbol ?setName@Biome@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class Biome & setName(std::string const &);
    /**
     * @hash   -1170354019
     * @symbol ?setNoRain@Biome@@QEAAAEAV1@XZ
     */
    MCAPI class Biome & setNoRain();
    /**
     * @hash   -360618030
     * @symbol ?setOceanRuinConfig@Biome@@QEAAAEAV1@AEBUOceanRuinConfiguration@@@Z
     */
    MCAPI class Biome & setOceanRuinConfig(struct OceanRuinConfiguration const &);
    /**
     * @hash   -455103682
     * @symbol ?setOddColor@Biome@@QEAAAEAV1@H@Z
     */
    MCAPI class Biome & setOddColor(int);
    /**
     * @hash   1352947525
     * @symbol ?setSnowAccumulation@Biome@@QEAAAEAV1@MM@Z
     */
    MCAPI class Biome & setSnowAccumulation(float, float);
    /**
     * @hash   -458065080
     * @symbol ?writePacketData@Biome@@QEAAXAEAVCompoundTag@@AEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
     */
    MCAPI void writePacketData(class CompoundTag &, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> &);
    /**
     * @hash   -256180891
     * @symbol ?BACKCOMPAT_FOG_NAME@Biome@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const BACKCOMPAT_FOG_NAME;
    /**
     * @hash   -850002025
     * @symbol ?DEFAULT_FOG_COLOR@Biome@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const DEFAULT_FOG_COLOR;
    /**
     * @hash   -431538697
     * @symbol ?DEFAULT_FOG_ID@Biome@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const DEFAULT_FOG_ID;
    /**
     * @hash   2023659833
     * @symbol ?DEFAULT_UNDERWATER_COLOR@Biome@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const DEFAULT_UNDERWATER_COLOR;
    /**
     * @hash   2016216903
     * @symbol ?DEFAULT_WATER_COLOR@Biome@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const DEFAULT_WATER_COLOR;
    /**
     * @hash   -527968801
     * @symbol ?RAIN_TEMP_THRESHOLD@Biome@@2MB
     */
    MCAPI static float const RAIN_TEMP_THRESHOLD;
    /**
     * @hash   51673492
     * @symbol ?buildCachedTemperatureNoise@Biome@@SAXAEAVLevelChunk@@@Z
     */
    MCAPI static void buildCachedTemperatureNoise(class LevelChunk &);

};