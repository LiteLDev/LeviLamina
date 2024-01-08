
#include "CustomDimension.h"

#include "ll/api/Logger.h"
#include "ll/api/service/Bedrock.h"

#include "mc/deps/core/mce/Color.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/DimensionConversionData.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/chunk/VanillaLevelChunkUpgrade.h"
#include "mc/world/level/dimension/NetherDimension.h"
#include "mc/world/level/dimension/OverworldDimension.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/dimension/end/TheEndDimension.h"
#include "mc/world/level/levelgen/VoidGenerator.h"
#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
#include "mc/world/level/levelgen/v1/NetherGenerator.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator2d.h"
#include "mc/world/level/levelgen/v1/TheEndGenerator.h"

namespace ll::dimension {

static ll::Logger loggerMoreDim("CustomDimension");

CustomDimension::CustomDimension(
    ILevel&                                      ilevel,
    Scheduler&                                   scheduler,
    CustomDimensionManager::DimensionInfo const& dimensionInfo
)
: Dimension(ilevel, dimensionInfo.id, {-64, 320}, scheduler, dimensionInfo.name) {
    loggerMoreDim.debug(__FUNCTION__ " dimension name:{}", dimensionInfo.name);
    mDefaultBrightness.sky = Brightness::MAX;
    generatorType          = dimensionInfo.generatorType;
    seed                   = dimensionInfo.seed;
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

void CustomDimension::init() {
    loggerMoreDim.debug(__FUNCTION__);
    setSkylight(false);
    Dimension::init();
}

std::unique_ptr<WorldGenerator> CustomDimension::createGenerator() {
    loggerMoreDim.debug(__FUNCTION__);
    auto& level     = getLevel();
    auto& levelData = level.getLevelData();
    auto  biome     = level.getBiomeRegistry().lookupByName(levelData.getBiomeOverride());

    switch (generatorType) {
    case GeneratorType::Overworld:
        return std::make_unique<OverworldGenerator2d>(
            *this,
            seed,
            false,
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
    default:
        return std::make_unique<VoidGenerator>(*this);
    }
}

void CustomDimension::upgradeLevelChunk(ChunkSource& cs, LevelChunk& lc, LevelChunk& generatedChunk) {
    loggerMoreDim.debug(__FUNCTION__);
    auto blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
    VanillaLevelChunkUpgrade::_upgradeLevelChunkViaMetaData(lc, generatedChunk, blockSource);
    VanillaLevelChunkUpgrade::_upgradeLevelChunkLegacy(lc, blockSource);
}

void CustomDimension::fixWallChunk(ChunkSource& cs, LevelChunk& lc) {
    loggerMoreDim.debug(__FUNCTION__);
    auto blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
    VanillaLevelChunkUpgrade::fixWallChunk(lc, blockSource);
}

bool CustomDimension::levelChunkNeedsUpgrade(LevelChunk const& lc) const {
    loggerMoreDim.debug(__FUNCTION__);
    return VanillaLevelChunkUpgrade::levelChunkNeedsUpgrade(lc);
}
void CustomDimension::_upgradeOldLimboEntity(CompoundTag& tag, ::LimboEntitiesVersion vers) {
    loggerMoreDim.debug(__FUNCTION__);
    auto isTemplate = getLevel().getLevelData().isFromWorldTemplate();
    return VanillaLevelChunkUpgrade::upgradeOldLimboEntity(tag, vers, isTemplate);
}

Vec3 CustomDimension::translatePosAcrossDimension(Vec3 const& fromPos, DimensionType fromId) const {
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

std::unique_ptr<ChunkSource>
CustomDimension::_wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource> cs, ::StorageVersion /*ver*/) {
    loggerMoreDim.debug(__FUNCTION__);
    return cs;
}

mce::Color CustomDimension::getBrightnessDependentFogColor(mce::Color const& color, float brightness) const {
    loggerMoreDim.debug(__FUNCTION__);
    float temp   = (brightness * 0.94f) + 0.06f;
    float temp2  = (brightness * 0.91f) + 0.09f;
    auto  result = color;
    result.r     = color.r * temp;
    result.g     = color.g * temp;
    result.b     = color.b * temp2;
    return result;
};

std::unique_ptr<StructureFeatureRegistry> CustomDimension::makeStructureFeatures(
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
