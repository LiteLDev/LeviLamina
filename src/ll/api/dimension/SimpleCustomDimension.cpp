
#include "SimpleCustomDimension.h"

#include "ll/api/Logger.h"
#include "ll/api/service/Bedrock.h"

#include "mc/deps/core/mce/Color.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/DimensionConversionData.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/biome/VanillaBiomeNames.h"
#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/chunk/VanillaLevelChunkUpgrade.h"
#include "mc/world/level/dimension/NetherDimension.h"
#include "mc/world/level/dimension/OverworldDimension.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/dimension/end/TheEndDimension.h"
#include "mc/world/level/levelgen/VoidGenerator.h"
#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
#include "mc/world/level/levelgen/v1/NetherGenerator.h"
#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"
#include "mc/world/level/levelgen/v1/TheEndGenerator.h"

#include "magic_enum.hpp"

namespace ll::dimension {

static ll::Logger loggerMoreDim("SimpleCustomDim");

SimpleCustomDimension::SimpleCustomDimension(std::string const& name, DimensionFactoryInfo const& info)
: Dimension(info.level, info.dimId, {-64, 320}, info.scheduler, name) {
    loggerMoreDim.debug("{} dimension name:{}", __FUNCTION__, name);
    mDefaultBrightness.sky = Brightness::MAX;
    generatorType          = *magic_enum::enum_cast<GeneratorType>((std::string_view)info.data["generatorType"]);
    seed                   = info.data["seed"];
    switch (generatorType) {
    case GeneratorType::TheEnd: {
        mSeaLevel                = 63;
        mHasWeather              = false;
        mDimensionBrightnessRamp = std::make_unique<OverworldBrightnessRamp>();
    }
    case GeneratorType::Nether: {
        mSeaLevel                = 32;
        mHasWeather              = false;
        mDimensionBrightnessRamp = std::make_unique<NetherBrightnessRamp>();
    }
    default:
        mSeaLevel                = 63;
        mHasWeather              = true;
        mDimensionBrightnessRamp = std::make_unique<OverworldBrightnessRamp>();
    }
    mDimensionBrightnessRamp->buildBrightnessRamp();
}

CompoundTag SimpleCustomDimension::generateNewData(uint seed, GeneratorType generatorType) {
    CompoundTag result;
    result["seed"]          = seed;
    result["generatorType"] = magic_enum::enum_name(generatorType);
    return result;
}

void SimpleCustomDimension::init() {
    loggerMoreDim.debug(__FUNCTION__);
    setSkylight(false);
    Dimension::init();
}

std::unique_ptr<WorldGenerator> SimpleCustomDimension::createGenerator() {
    loggerMoreDim.debug(__FUNCTION__);
    auto& level     = getLevel();
    auto& levelData = level.getLevelData();
    auto  biome     = level.getBiomeRegistry().lookupByName(levelData.getBiomeOverride());

    switch (generatorType) {
    case GeneratorType::Overworld:
        return std::make_unique<OverworldGeneratorMultinoise>(
            *this,
            LevelSeed64::fromUnsigned32(seed),
            biome,
            makeStructureFeatures(false, levelData.getBaseGameVersion(), levelData.getExperiments())
        );
    case GeneratorType::Nether:
        return std::make_unique<NetherGenerator>(
            *this,
            seed,
            biome,
            makeStructureFeatures(false, levelData.getBaseGameVersion(), levelData.getExperiments())
        );
    case GeneratorType::TheEnd:
        return std::make_unique<TheEndGenerator>(
            *this,
            seed,
            biome,
            makeStructureFeatures(false, levelData.getBaseGameVersion(), levelData.getExperiments())
        );
    case GeneratorType::Flat:
        return std::make_unique<FlatWorldGenerator>(*this, seed, levelData.getFlatWorldGeneratorOptions());
    default: {
        auto generator    = std::make_unique<VoidGenerator>(*this);
        generator->mBiome = level.getBiomeRegistry().lookupByHash(VanillaBiomeNames::Ocean);
        return std::move(generator);
    }
    }
}

void SimpleCustomDimension::upgradeLevelChunk(ChunkSource& cs, LevelChunk& lc, LevelChunk& generatedChunk) {
    loggerMoreDim.debug(__FUNCTION__);
    auto blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
    VanillaLevelChunkUpgrade::_upgradeLevelChunkViaMetaData(lc, generatedChunk, blockSource);
    VanillaLevelChunkUpgrade::_upgradeLevelChunkLegacy(lc, blockSource);
}

void SimpleCustomDimension::fixWallChunk(ChunkSource& cs, LevelChunk& lc) {
    loggerMoreDim.debug(__FUNCTION__);
    auto blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
    VanillaLevelChunkUpgrade::fixWallChunk(lc, blockSource);
}

bool SimpleCustomDimension::levelChunkNeedsUpgrade(LevelChunk const& lc) const {
    loggerMoreDim.debug(__FUNCTION__);
    return VanillaLevelChunkUpgrade::levelChunkNeedsUpgrade(lc);
}
void SimpleCustomDimension::_upgradeOldLimboEntity(CompoundTag& tag, ::LimboEntitiesVersion vers) {
    loggerMoreDim.debug(__FUNCTION__);
    auto isTemplate = getLevel().getLevelData().isFromWorldTemplate();
    return VanillaLevelChunkUpgrade::upgradeOldLimboEntity(tag, vers, isTemplate);
}

Vec3 SimpleCustomDimension::translatePosAcrossDimension(Vec3 const& fromPos, DimensionType fromId) const {
    loggerMoreDim.debug(__FUNCTION__);
    Vec3 topos;
    VanillaDimensions::convertPointBetweenDimensions(
        fromPos,
        topos,
        fromId,
        mId,
        getLevel().getDimensionConversionData()
    );
    constexpr auto clampVal = 32000000.0f - 128.0f;

    topos.x = std::clamp(topos.x, -clampVal, clampVal);
    topos.z = std::clamp(topos.z, -clampVal, clampVal);

    return topos;
}

short SimpleCustomDimension::getCloudHeight() const { return 192; }

bool SimpleCustomDimension::hasPrecipitationFog() const { return true; }

std::unique_ptr<ChunkSource>
SimpleCustomDimension::_wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource> cs, ::StorageVersion /*ver*/) {
    loggerMoreDim.debug(__FUNCTION__);
    return cs;
}

mce::Color SimpleCustomDimension::getBrightnessDependentFogColor(mce::Color const& color, float brightness) const {
    loggerMoreDim.debug(__FUNCTION__);
    float temp   = (brightness * 0.94f) + 0.06f;
    float temp2  = (brightness * 0.91f) + 0.09f;
    auto  result = color;
    result.r     = color.r * temp;
    result.g     = color.g * temp;
    result.b     = color.b * temp2;
    return result;
};

std::unique_ptr<StructureFeatureRegistry> SimpleCustomDimension::makeStructureFeatures(
    bool                   isLegacy,
    BaseGameVersion const& baseGameVersion,
    Experiments const&     experiments
) {
    loggerMoreDim.debug(__FUNCTION__);
    switch (generatorType) {
    case GeneratorType::Nether:
        return NetherDimension::makeStructureFeatures(seed, baseGameVersion);
    case GeneratorType::TheEnd:
        return TheEndDimension::makeStructureFeatures(*this, seed);
    default:
        return OverworldDimension::makeStructureFeatures(seed, isLegacy, baseGameVersion, experiments);
    }
};
} // namespace ll::dimension
