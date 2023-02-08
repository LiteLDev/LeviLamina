/**
 * @file  Biome.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1369009825
     * @symbol  ??0Biome\@\@QEAA\@H\@Z
     */
    MCAPI Biome(int);
    /**
     * @hash   -1961504938
     * @symbol  ?addTag\@Biome\@\@QEAAAEAV1\@VHashedString\@\@AEAV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI class Biome & addTag(class HashedString, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> &);
    /**
     * @hash   -1107598201
     * @symbol  ?cacheClientComponentData\@Biome\@\@QEAAXXZ
     */
    MCAPI void cacheClientComponentData();
    /**
     * @hash   1915565098
     * @symbol  ?canHaveSnowfall\@Biome\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canHaveSnowfall(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   -636073336
     * @symbol  ?getBiomeType\@Biome\@\@QEBA?AW4VanillaBiomeTypes\@\@XZ
     */
    MCAPI enum class VanillaBiomeTypes getBiomeType() const;
    /**
     * @hash   -661401549
     * @symbol  ?getBirchFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getBirchFoliageColor(class BlockPos const &) const;
    /**
     * @hash   -1824142446
     * @symbol  ?getDefaultBiomeTemperature\@Biome\@\@QEBAMXZ
     */
    MCAPI float getDefaultBiomeTemperature() const;
    /**
     * @hash   2025310092
     * @symbol  ?getDownfall\@Biome\@\@QEBAMXZ
     */
    MCAPI float getDownfall() const;
    /**
     * @hash   1946079059
     * @symbol  ?getEvergreenFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getEvergreenFoliageColor(class BlockPos const &) const;
    /**
     * @hash   -1336062779
     * @symbol  ?getFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getFoliageColor(class BlockPos const &) const;
    /**
     * @hash   -1953923675
     * @symbol  ?getMapBirchFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapBirchFoliageColor(class BlockPos const &) const;
    /**
     * @hash   898572213
     * @symbol  ?getMapEvergreenFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapEvergreenFoliageColor(class BlockPos const &) const;
    /**
     * @hash   273686435
     * @symbol  ?getMapFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapFoliageColor(class BlockPos const &) const;
    /**
     * @hash   679970547
     * @symbol  ?getMapGrassColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapGrassColor(class BlockPos const &) const;
    /**
     * @hash   834399578
     * @symbol  ?getMobs\@Biome\@\@QEBAAEBV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerData> const & getMobs() const;
    /**
     * @hash   471468670
     * @symbol  ?getMobsMutable\@Biome\@\@QEAAAEAV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerData> & getMobsMutable();
    /**
     * @hash   96871288
     * @symbol  ?getSnowAccumulationLayers\@Biome\@\@QEBAHXZ
     */
    MCAPI int getSnowAccumulationLayers() const;
    /**
     * @hash   254700996
     * @symbol  ?getTemperature\@Biome\@\@QEBAMAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI float getTemperature(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   1107258457
     * @symbol  ?getTemperatureCategory\@Biome\@\@QEBA?AW4BiomeTempCategory\@1\@XZ
     */
    MCAPI enum class Biome::BiomeTempCategory getTemperatureCategory() const;
    /**
     * @hash   -1217539477
     * @symbol  ?getTemperatureWorldGen\@Biome\@\@QEBAMAEBVBlockPos\@\@F\@Z
     */
    MCAPI float getTemperatureWorldGen(class BlockPos const &, short) const;
    /**
     * @hash   840832762
     * @symbol  ?hasTag\@Biome\@\@QEBA_NAEBU?$IDType\@UBiomeTagIDType\@\@\@\@AEBV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI bool hasTag(struct IDType<struct BiomeTagIDType> const &, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const &) const;
    /**
     * @hash   834255569
     * @symbol  ?hasTag\@Biome\@\@QEBA_NAEBVWellKnownTagID\@\@\@Z
     */
    MCAPI bool hasTag(class WellKnownTagID const &) const;
    /**
     * @hash   1377615462
     * @symbol  ?hasTag\@Biome\@\@QEBA_N_KAEBV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI bool hasTag(unsigned __int64, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const &) const;
    /**
     * @hash   1293732714
     * @symbol  ?initEntity\@Biome\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @hash   860203774
     * @symbol  ?isHumid\@Biome\@\@QEBA_NXZ
     */
    MCAPI bool isHumid() const;
    /**
     * @hash   -1871192178
     * @symbol  ?isSnowCovered\@Biome\@\@QEBA_NXZ
     */
    MCAPI bool isSnowCovered() const;
    /**
     * @hash   -2003613908
     * @symbol  ?setColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome & setColor(int);
    /**
     * @hash   755989757
     * @symbol  ?setColor\@Biome\@\@QEAAAEAV1\@H_N\@Z
     */
    MCAPI class Biome & setColor(int, bool);
    /**
     * @hash   -543605046
     * @symbol  ?setDepthAndScale\@Biome\@\@QEAAAEAV1\@AEBUBiomeHeight\@\@\@Z
     */
    MCAPI class Biome & setDepthAndScale(struct BiomeHeight const &);
    /**
     * @hash   -85328372
     * @symbol  ?setMapWaterColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome & setMapWaterColor(int);
    /**
     * @hash   -189881052
     * @symbol  ?setName\@Biome\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Biome & setName(std::string const &);
    /**
     * @hash   -244196035
     * @symbol  ?setNoRain\@Biome\@\@QEAAAEAV1\@XZ
     */
    MCAPI class Biome & setNoRain();
    /**
     * @hash   565539954
     * @symbol  ?setOceanRuinConfig\@Biome\@\@QEAAAEAV1\@AEBUOceanRuinConfiguration\@\@\@Z
     */
    MCAPI class Biome & setOceanRuinConfig(struct OceanRuinConfiguration const &);
    /**
     * @hash   471054302
     * @symbol  ?setOddColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome & setOddColor(int);
    /**
     * @hash   -2015861787
     * @symbol  ?setSnowAccumulation\@Biome\@\@QEAAAEAV1\@MM\@Z
     */
    MCAPI class Biome & setSnowAccumulation(float, float);
    /**
     * @hash   468092904
     * @symbol  ?writePacketData\@Biome\@\@QEAAXAEAVCompoundTag\@\@AEAV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI void writePacketData(class CompoundTag &, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> &);
    /**
     * @hash   643499621
     * @symbol  ?BACKCOMPAT_FOG_NAME\@Biome\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const BACKCOMPAT_FOG_NAME;
    /**
     * @hash   235020791
     * @symbol  ?DEFAULT_FOG_COLOR\@Biome\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_FOG_COLOR;
    /**
     * @hash   468141815
     * @symbol  ?DEFAULT_FOG_ID\@Biome\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const DEFAULT_FOG_ID;
    /**
     * @hash   -1186284647
     * @symbol  ?DEFAULT_UNDERWATER_COLOR\@Biome\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_UNDERWATER_COLOR;
    /**
     * @hash   -1193727577
     * @symbol  ?DEFAULT_WATER_COLOR\@Biome\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_WATER_COLOR;
    /**
     * @hash   514781547
     * @symbol  ?RAIN_TEMP_THRESHOLD\@Biome\@\@2MB
     */
    MCAPI static float const RAIN_TEMP_THRESHOLD;
    /**
     * @hash   977093428
     * @symbol  ?buildCachedTemperatureNoise\@Biome\@\@SAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI static void buildCachedTemperatureNoise(class LevelChunk &);

};