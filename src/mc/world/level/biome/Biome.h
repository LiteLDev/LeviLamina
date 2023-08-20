#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"

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
    // clang-format off
    [[nodiscard]] constexpr HashedString const& getHash()     const { return ll::memory::dAccess<HashedString>(this, 0x8); }
    [[nodiscard]] constexpr int   getDebugMapColor()          const { return ll::memory::dAccess<int>(this, 0x38); }
    [[nodiscard]] constexpr int   getDebugMapOddColor()       const { return ll::memory::dAccess<int>(this, 0x3C); }
    [[nodiscard]] constexpr float getTemperature()            const { return ll::memory::dAccess<float>(this, 0x40); }
    //[[nodiscard]]constexpr float getDownfall()              const { return ll::memory::dAccess<float>(this, 0x44); }
    [[nodiscard]] constexpr float getRedSporeDensity()        const { return ll::memory::dAccess<float>(this, 0x48); }
    [[nodiscard]] constexpr float getBlueSporeDensity()       const { return ll::memory::dAccess<float>(this, 0x4C); }
    [[nodiscard]] constexpr float getAshDensity()             const { return ll::memory::dAccess<float>(this, 0x50); }
    [[nodiscard]] constexpr float getWhiteAshDensity()        const { return ll::memory::dAccess<float>(this, 0x54); }
    [[nodiscard]] constexpr float getSnowAccumulation()       const { return ll::memory::dAccess<float>(this, 0x58); }
    [[nodiscard]] constexpr float getFoliageSnow()            const { return ll::memory::dAccess<float>(this, 0x5C); }
    [[nodiscard]] constexpr float getMinSnowLevel()           const { return ll::memory::dAccess<float>(this, 0x60); }
    [[nodiscard]] constexpr float getMaxSnowLevel()           const { return ll::memory::dAccess<float>(this, 0x64); }
    [[nodiscard]] constexpr float getDepth()                  const { return ll::memory::dAccess<float>(this, 0x68); }
    [[nodiscard]] constexpr float getScale()                  const { return ll::memory::dAccess<float>(this, 0x6C); }
    [[nodiscard]] constexpr mce::Color const& getWaterColor() const { return ll::memory::dAccess<mce::Color>(this, 0x70); }
    [[nodiscard]] constexpr float getWaterTransparency()      const { return ll::memory::dAccess<float>(this, 0x80); }
    [[nodiscard]] constexpr bool  getRain()                   const { return ll::memory::dAccess<bool>(this, 0x84); }
    [[nodiscard]] constexpr int   getId()                     const { return ll::memory::dAccess<int>(this, 0x88); }
    // clang-format on

    // WeakRefT<SharePtrRefTraits<FogDefinition const>> mFogDefinition;   // this+0x90
    // OceanRuinConfiguration                           mOceanRuinConfig; // this+0xA0
    // std::vector<MobSpawnerData, std::allocator<MobSpawnerData>> mMobs; // this+0xB0

    // PerlinSimplexNoise         mTemperatureNoise;       // this+0xC8
    // PerlinSimplexNoise         mFrozenTemperatureNoise; // this+0xF0
    // OwnerPtrT<EntityRefTraits> mEntity;                 // this+0x118
    // PerlinSimplexNoise         mBiomeInfoNoise;         // this+0x130
    // Biome::CachedClientComponentData mCachedClientComponentData;

    [[nodiscard]] constexpr std::string const& getName() const { return getHash().getString(); }

    // prevent constructor by default
    Biome& operator=(Biome const&) = delete;
    Biome(Biome const&)            = delete;
    Biome()                        = delete;

public:
    // NOLINTBEGIN
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
    hasTag(uint64_t, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&)
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
     * @symbol ?buildCachedTemperatureNoise\@Biome\@\@SAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI static void buildCachedTemperatureNoise(class LevelChunk&);
    /**
     * @symbol ?BACKCOMPAT_FOG_NAME\@Biome\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static std::string_view const BACKCOMPAT_FOG_NAME;
    /**
     * @symbol ?DEFAULT_FOG_COLOR\@Biome\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_FOG_COLOR;
    /**
     * @symbol ?DEFAULT_FOG_ID\@Biome\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static std::string_view const DEFAULT_FOG_ID;
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
    // NOLINTEND
};
