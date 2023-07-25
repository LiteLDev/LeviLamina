#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Biome {
public:
    // Biome inner types declare
    // clang-format off

    // clang-format on

    // Biome inner types define
    enum class BiomeTempCategory {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOME
public:
    Biome& operator=(Biome const&) = delete;
    Biome(Biome const&)            = delete;
    Biome()                        = delete;
#endif

public:
    /**
     * @symbol
     * ?addTag\@Biome\@\@QEAAAEAV1\@VHashedString\@\@AEAV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI class Biome&
    addTag(class HashedString, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>&);
    /**
     * @symbol ?cacheClientComponentData\@Biome\@\@QEAAXXZ
     */
    MCAPI void cacheClientComponentData();
    /**
     * @symbol ?canHaveSnowfall\@Biome\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canHaveSnowfall(class BlockSource const&, class BlockPos const&) const;
    /**
     * @symbol ?getBiomeType\@Biome\@\@QEBA?AW4VanillaBiomeTypes\@\@XZ
     */
    MCAPI enum class VanillaBiomeTypes getBiomeType() const;
    /**
     * @symbol ?getBirchFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getBirchFoliageColor(class BlockPos const&) const;
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
    MCAPI int getEvergreenFoliageColor(class BlockPos const&) const;
    /**
     * @symbol ?getFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getFoliageColor(class BlockPos const&) const;
    /**
     * @symbol ?getMapBirchFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapBirchFoliageColor(class BlockPos const&) const;
    /**
     * @symbol ?getMapEvergreenFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapEvergreenFoliageColor(class BlockPos const&) const;
    /**
     * @symbol ?getMapFoliageColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapFoliageColor(class BlockPos const&) const;
    /**
     * @symbol ?getMapGrassColor\@Biome\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getMapGrassColor(class BlockPos const&) const;
    /**
     * @symbol
     * ?getMobs\@Biome\@\@QEBAAEBV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerData> const& getMobs() const;
    /**
     * @symbol
     * ?getMobsMutable\@Biome\@\@QEAAAEAV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerData>& getMobsMutable();
    /**
     * @symbol ?getSnowAccumulationLayers\@Biome\@\@QEBAHXZ
     */
    MCAPI int getSnowAccumulationLayers() const;
    /**
     * @symbol ?getTemperature\@Biome\@\@QEBAMAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI float getTemperature(class BlockSource const&, class BlockPos const&) const;
    /**
     * @symbol ?getTemperatureCategory\@Biome\@\@QEBA?AW4BiomeTempCategory\@1\@XZ
     */
    MCAPI enum class Biome::BiomeTempCategory getTemperatureCategory() const;
    /**
     * @symbol ?getTemperatureWorldGen\@Biome\@\@QEBAMAEBVBlockPos\@\@F\@Z
     */
    MCAPI float getTemperatureWorldGen(class BlockPos const&, short) const;
    /**
     * @symbol
     * ?hasTag\@Biome\@\@QEBA_N_KAEBV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI bool
    hasTag(unsigned __int64, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&)
        const;
    /**
     * @symbol
     * ?hasTag\@Biome\@\@QEBA_NAEBU?$IDType\@UBiomeTagIDType\@\@\@\@AEBV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI bool
    hasTag(struct IDType<struct BiomeTagIDType> const&, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&)
        const;
    /**
     * @symbol ?hasTag\@Biome\@\@QEBA_NAEBVWellKnownTagID\@\@\@Z
     */
    MCAPI bool hasTag(class WellKnownTagID const&) const;
    /**
     * @symbol ?isHumid\@Biome\@\@QEBA_NXZ
     */
    MCAPI bool isHumid() const;
    /**
     * @symbol ?isSnowCovered\@Biome\@\@QEBA_NXZ
     */
    MCAPI bool isSnowCovered() const;
    /**
     * @symbol ?setColor\@Biome\@\@QEAAAEAV1\@H_N\@Z
     */
    MCAPI class Biome& setColor(int, bool);
    /**
     * @symbol ?setColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome& setColor(int);
    /**
     * @symbol ?setMapWaterColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome& setMapWaterColor(int);
    /**
     * @symbol ?setNoRain\@Biome\@\@QEAAAEAV1\@XZ
     */
    MCAPI class Biome& setNoRain();
    /**
     * @symbol ?setOceanRuinConfig\@Biome\@\@QEAAAEAV1\@AEBUOceanRuinConfiguration\@\@\@Z
     */
    MCAPI class Biome& setOceanRuinConfig(struct OceanRuinConfiguration const&);
    /**
     * @symbol ?setOddColor\@Biome\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class Biome& setOddColor(int);
    /**
     * @symbol
     * ?writePacketData\@Biome\@\@QEAAXAEAVCompoundTag\@\@AEAV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCAPI void
    writePacketData(class CompoundTag&, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>&);
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
    MCAPI static void buildCachedTemperatureNoise(class LevelChunk&);
};
