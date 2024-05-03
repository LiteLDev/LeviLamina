#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/world/level/biome/VanillaBiomeTypes.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Biome {
public:
    // Biome inner types define
    enum class BiomeTempCategory : int {
        Ocean  = 0x0,
        Cold   = 0x1,
        Medium = 0x2,
        Warm   = 0x3,
    };

public:
    // prevent constructor by default
    Biome& operator=(Biome const&);
    Biome(Biome const&);
    Biome();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Biome@@UEAA@XZ
    virtual ~Biome() = default;

    // symbol: ??0Biome@@QEAA@H@Z
    MCAPI explicit Biome(int id);

    // symbol:
    // ?addTag@Biome@@QEAAAEAV1@VHashedString@@AEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
    MCAPI class Biome& addTag(
        class HashedString                                                                                tag,
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>& tagRegistry
    );

    // symbol: ?cacheClientComponentData@Biome@@QEAAXXZ
    MCAPI void cacheClientComponentData();

    // symbol: ?canHaveSnowfall@Biome@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool canHaveSnowfall(class BlockSource const& region, class BlockPos const& pos) const;

    // symbol: ?getBiomeType@Biome@@QEBA?AW4VanillaBiomeTypes@@XZ
    MCAPI ::VanillaBiomeTypes getBiomeType() const;

    // symbol: ?getBirchFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getBirchFoliageColor(class BlockPos const& pos) const;

    // symbol: ?getDefaultBiomeTemperature@Biome@@QEBAMXZ
    MCAPI float getDefaultBiomeTemperature() const;

    // symbol: ?getDownfall@Biome@@QEBAMXZ
    MCAPI float getDownfall() const;

    // symbol: ?getEvergreenFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getEvergreenFoliageColor(class BlockPos const& pos) const;

    // symbol: ?getFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getFoliageColor(class BlockPos const& pos) const;

    // symbol: ?getMapBirchFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getMapBirchFoliageColor(class BlockPos const& pos) const;

    // symbol: ?getMapEvergreenFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getMapEvergreenFoliageColor(class BlockPos const& pos) const;

    // symbol: ?getMapFoliageColor@Biome@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getMapFoliageColor(class BlockPos const& pos) const;

    // symbol: ?getMapGrassColor@Biome@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getMapGrassColor(class BlockPos const& pos) const;

    // symbol:
    // ?getMobs@Biome@@QEBAAEBV?$vector@V?$shared_ptr@VMobSpawnerData@@@std@@V?$allocator@V?$shared_ptr@VMobSpawnerData@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class MobSpawnerData>> const& getMobs() const;

    // symbol:
    // ?getMobsMutable@Biome@@QEAAAEAV?$vector@V?$shared_ptr@VMobSpawnerData@@@std@@V?$allocator@V?$shared_ptr@VMobSpawnerData@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class MobSpawnerData>>& getMobsMutable();

    // symbol: ?getSnowAccumulationLayers@Biome@@QEBAHXZ
    MCAPI int getSnowAccumulationLayers() const;

    // symbol: ?getTemperature@Biome@@QEBAMAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI float getTemperature(class BlockSource const& region, class BlockPos const& pos) const;

    // symbol: ?getTemperatureCategory@Biome@@QEBA?AW4BiomeTempCategory@1@XZ
    MCAPI ::Biome::BiomeTempCategory getTemperatureCategory() const;

    // symbol: ?getTemperatureWorldGen@Biome@@QEBAMAEBVBlockPos@@F@Z
    MCAPI float getTemperatureWorldGen(class BlockPos const& pos, short seaLevel) const;

    // symbol: ?hasTag@Biome@@QEBA_NAEBVWellKnownTagID@@@Z
    MCAPI bool hasTag(class WellKnownTagID const& tagID) const;

    // symbol:
    // ?hasTag@Biome@@QEBA_NAEBU?$IDType@UBiomeTagIDType@@@@AEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
    MCAPI bool hasTag(
        struct IDType<struct BiomeTagIDType> const& tagID,
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
            tagRegistry
    ) const;

    // symbol:
    // ?hasTag@Biome@@QEBA_N_KAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
    MCAPI bool hasTag(
        uint64 tagHash,
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
            tagRegistry
    ) const;

    // symbol: ?isHumid@Biome@@QEBA_NXZ
    MCAPI bool isHumid() const;

    // symbol: ?isSnowCovered@Biome@@QEBA_NXZ
    MCAPI bool isSnowCovered() const;

    // symbol: ?setMapWaterColor@Biome@@QEAAAEAV1@H@Z
    MCAPI class Biome& setMapWaterColor(int color);

    // symbol: ?setNoRain@Biome@@QEAAAEAV1@XZ
    MCAPI class Biome& setNoRain();

    // symbol: ?setOceanRuinConfig@Biome@@QEAAAEAV1@AEBUOceanRuinConfiguration@@@Z
    MCAPI class Biome& setOceanRuinConfig(struct OceanRuinConfiguration const& config);

    // symbol:
    // ?writePacketData@Biome@@QEBAXAEAVCompoundTag@@AEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
    MCAPI void writePacketData(
        class CompoundTag&                                                                                tag,
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>& tagRegistry
    ) const;

    // symbol: ?buildCachedTemperatureNoise@Biome@@SAXAEAVLevelChunk@@@Z
    MCAPI static void buildCachedTemperatureNoise(class LevelChunk& chunk);

    // symbol: ?BACKCOMPAT_FOG_NAME@Biome@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const BACKCOMPAT_FOG_NAME;

    // symbol: ?DEFAULT_FOG_COLOR@Biome@@2VColor@mce@@B
    MCAPI static class mce::Color const DEFAULT_FOG_COLOR;

    // symbol: ?DEFAULT_FOG_ID@Biome@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const DEFAULT_FOG_ID;

    // symbol: ?DEFAULT_UNDERWATER_COLOR@Biome@@2VColor@mce@@B
    MCAPI static class mce::Color const DEFAULT_UNDERWATER_COLOR;

    // symbol: ?DEFAULT_WATER_COLOR@Biome@@2VColor@mce@@B
    MCAPI static class mce::Color const DEFAULT_WATER_COLOR;

    // symbol: ?RAIN_TEMP_THRESHOLD@Biome@@2MB
    MCAPI static float const RAIN_TEMP_THRESHOLD;

    // NOLINTEND
};
