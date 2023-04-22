/**
 * @file  Biome.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

enum class VanillaBiomeTypes : int{
        Beach = 0x0,
        Desert = 0x1,
        ExtremeHills = 0x2,
        FlatWorld = 0x3,
        Forest = 0x4,
        Hell = 0x5,
        //TODO: confirm IcePlainsSpikes
        IcePlainsSpikes = 0x6, // The Ice Plains Spikes Biome is a rare variant of the ice plains biome, containing unique ice structures. It is quite cold, with most water frozen as ice. 
        Jungle = 0x7,
        Mesa = 0x8, // Mesa is a very rare biome which is made up from red sand, cacti, dead bushes and plateaus. The red sand is only one layer thick. Red sand is found in the Mesa itself, not its variants. Water patches are found but are not a variant. 
        MushroomIsland = 0x9,
        Ocean = 0xA,
        Plain = 0xB,
        River = 0xC,
        Savanna = 0xD, // A savanna is a dry biome with scattered acacia trees. It typically generates bordering a desert, forest or plains biome and has three variations total. 
        RockyBeach = 0xE,
        Swamp = 0xF, // The Minecraft Swamp biome is a waterlogged area, consisting of many small islands separated by vast canals of water. In the Bedrock Edition, this water is a murky brown color, and this version also allows for Huge Mushrooms to appear on the islands.
        TaigaForest = 0x10,
        TheEnd = 0x11,
        Custom = 0x12, // Dirve by bahavior pack?
    };

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
     * @symbol ??0Biome\@\@QEAA\@H\@Z
     */
    MCAPI Biome(int);
    /**
     * @symbol ?addTag\@Biome\@\@QEAAAEAV1\@VHashedString\@\@AEAV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI class Biome & addTag(class HashedString, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> &);
    /**
     * @symbol ?cacheClientComponentData\@Biome\@\@QEAAXXZ
     */
    MCAPI void cacheClientComponentData();
    /**
     * @symbol ?canHaveSnowfall\@Biome\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canHaveSnowfall(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol ?getBiomeType\@Biome\@\@QEBA?AW4VanillaBiomeTypes\@\@XZ
     */
    MCAPI enum class VanillaBiomeTypes getBiomeType() const;
    /**
     * @symbol ?getBirchFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getBirchFoliageColor(class BlockPos const &) const;
    /**
     * @symbol ?getDefaultBiomeTemperature\@Biome\@\@QEBAMXZ
     */
    MCAPI float getDefaultBiomeTemperature() const;
    /**
     * @symbol ?getDownfall\@Biome\@\@QEBAMXZ
     */
    MCAPI float getDownfall() const;
    /**
     * @symbol ?getEvergreenFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getEvergreenFoliageColor(class BlockPos const &) const;
    /**
     * @symbol ?getFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getFoliageColor(class BlockPos const &) const;
    /**
     * @symbol ?getMapBirchFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapBirchFoliageColor(class BlockPos const &) const;
    /**
     * @symbol ?getMapEvergreenFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapEvergreenFoliageColor(class BlockPos const &) const;
    /**
     * @symbol ?getMapFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapFoliageColor(class BlockPos const &) const;
    /**
     * @symbol ?getMapGrassColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapGrassColor(class BlockPos const &) const;
    /**
     * @symbol ?getMobs\@Biome\@\@QEBAAEBV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerData> const & getMobs() const;
    /**
     * @symbol ?getMobsMutable\@Biome\@\@QEAAAEAV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerData> & getMobsMutable();
    /**
     * @symbol ?getSnowAccumulationLayers\@Biome\@\@QEBAHXZ
     */
    MCAPI int getSnowAccumulationLayers() const;
    /**
     * @symbol ?getTemperature\@Biome\@\@QEBAMAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI float getTemperature(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol ?getTemperatureCategory\@Biome\@\@QEBA?AW4BiomeTempCategory\@1\@XZ
     */
    MCAPI enum class Biome::BiomeTempCategory getTemperatureCategory() const;
    /**
     * @symbol ?getTemperatureWorldGen\@Biome\@\@QEBAMAEBVBlockPos\@\@F\@Z
     */
    MCAPI float getTemperatureWorldGen(class BlockPos const &, short) const;
    /**
     * @symbol ?hasTag\@Biome\@\@QEBA_NAEBU?$IDType\@UBiomeTagIDType\@\@\@\@AEBV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI bool hasTag(struct IDType<struct BiomeTagIDType> const &, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const &) const;
    /**
     * @symbol ?hasTag\@Biome\@\@QEBA_N_KAEBV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI bool hasTag(unsigned __int64, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const &) const;
    /**
     * @symbol ?hasTag\@Biome\@\@QEBA_NAEBVWellKnownTagID\@\@\@Z
     */
    MCAPI bool hasTag(class WellKnownTagID const &) const;
    /**
     * @symbol ?initEntity\@Biome\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @symbol ?isHumid\@Biome\@\@QEBA_NXZ
     */
    MCAPI bool isHumid() const;
    /**
     * @symbol ?isSnowCovered\@Biome\@\@QEBA_NXZ
     */
    MCAPI bool isSnowCovered() const;
    /**
     * @symbol ?setColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome & setColor(int);
    /**
     * @symbol ?setColor\@Biome\@\@QEAAAEAV1\@H_N\@Z
     */
    MCAPI class Biome & setColor(int, bool);
    /**
     * @symbol ?setDepthAndScale\@Biome\@\@QEAAAEAV1\@AEBUBiomeHeight\@\@\@Z
     */
    MCAPI class Biome & setDepthAndScale(struct BiomeHeight const &);
    /**
     * @symbol ?setMapWaterColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome & setMapWaterColor(int);
    /**
     * @symbol ?setName\@Biome\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Biome & setName(std::string const &);
    /**
     * @symbol ?setNoRain\@Biome\@\@QEAAAEAV1\@XZ
     */
    MCAPI class Biome & setNoRain();
    /**
     * @symbol ?setOceanRuinConfig\@Biome\@\@QEAAAEAV1\@AEBUOceanRuinConfiguration\@\@\@Z
     */
    MCAPI class Biome & setOceanRuinConfig(struct OceanRuinConfiguration const &);
    /**
     * @symbol ?setOddColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome & setOddColor(int);
    /**
     * @symbol ?setSnowAccumulation\@Biome\@\@QEAAAEAV1\@MM\@Z
     */
    MCAPI class Biome & setSnowAccumulation(float, float);
    /**
     * @symbol ?writePacketData\@Biome\@\@QEAAXAEAVCompoundTag\@\@AEAV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI void writePacketData(class CompoundTag &, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> &);
    /**
     * @symbol ?BACKCOMPAT_FOG_NAME\@Biome\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const BACKCOMPAT_FOG_NAME;
    /**
     * @symbol ?DEFAULT_FOG_COLOR\@Biome\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_FOG_COLOR;
    /**
     * @symbol ?DEFAULT_FOG_ID\@Biome\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const DEFAULT_FOG_ID;
    /**
     * @symbol ?DEFAULT_UNDERWATER_COLOR\@Biome\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_UNDERWATER_COLOR;
    /**
     * @symbol ?DEFAULT_WATER_COLOR\@Biome\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_WATER_COLOR;
    /**
     * @symbol ?RAIN_TEMP_THRESHOLD\@Biome\@\@2MB
     */
    MCAPI static float const RAIN_TEMP_THRESHOLD;
    /**
     * @symbol ?buildCachedTemperatureNoise\@Biome\@\@SAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI static void buildCachedTemperatureNoise(class LevelChunk &);

};
