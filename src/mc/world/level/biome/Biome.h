#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Biome {
public:
    // Biome inner types define
    enum class BiomeTempCategory {};

public:
    // prevent constructor by default
    Biome& operator=(Biome const&);
    Biome(Biome const&);
    Biome();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Biome() = default;

    MCAPI explicit Biome(int id);

    MCAPI class Biome& addTag(
        class HashedString                                                                                tag,
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>& tagRegistry
    );

    MCAPI void cacheClientComponentData();

    MCAPI bool canHaveSnowfall(class BlockSource const& region, class BlockPos const& pos) const;

    MCAPI ::VanillaBiomeTypes getBiomeType() const;

    MCAPI int getBirchFoliageColor(class BlockPos const& pos) const;

    MCAPI float getDefaultBiomeTemperature() const;

    MCAPI float getDownfall() const;

    MCAPI int getEvergreenFoliageColor(class BlockPos const& pos) const;

    MCAPI int getFoliageColor(class BlockPos const& pos) const;

    MCAPI int getMapBirchFoliageColor(class BlockPos const& pos) const;

    MCAPI int getMapEvergreenFoliageColor(class BlockPos const& pos) const;

    MCAPI int getMapFoliageColor(class BlockPos const&) const;

    MCAPI int getMapGrassColor(class BlockPos const& pos) const;

    MCAPI std::vector<std::shared_ptr<class MobSpawnerData>> const& getMobs() const;

    MCAPI std::vector<std::shared_ptr<class MobSpawnerData>>& getMobsMutable();

    MCAPI int getSnowAccumulationLayers() const;

    MCAPI float getTemperature(class BlockSource const& region, class BlockPos const& pos) const;

    MCAPI ::Biome::BiomeTempCategory getTemperatureCategory() const;

    MCAPI float getTemperatureWorldGen(class BlockPos const& pos, short seaLevel) const;

    MCAPI bool hasTag(class WellKnownTagID const& tagID) const;

    MCAPI bool hasTag(
        struct IDType<struct BiomeTagIDType> const& tagID,
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
            tagRegistry
    ) const;

    MCAPI bool hasTag(
        uint64 tagHash,
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
            tagRegistry
    ) const;

    MCAPI bool isHumid() const;

    MCAPI bool isSnowCovered() const;

    MCAPI class Biome& setMapWaterColor(int color);

    MCAPI class Biome& setNoRain();

    MCAPI class Biome& setOceanRuinConfig(struct OceanRuinConfiguration const& config);

    MCAPI void writePacketData(
        class CompoundTag&                                                                                tag,
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>& tagRegistry
    ) const;

    MCAPI static void buildCachedTemperatureNoise(class LevelChunk& chunk);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static std::string_view const& BACKCOMPAT_FOG_NAME();

    MCAPI static class mce::Color const& DEFAULT_FOG_COLOR();

    MCAPI static std::string_view const& DEFAULT_FOG_ID();

    MCAPI static class mce::Color const& DEFAULT_UNDERWATER_COLOR();

    MCAPI static class mce::Color const& DEFAULT_WATER_COLOR();

    MCAPI static float const& RAIN_TEMP_THRESHOLD();

    // NOLINTEND
};
