
#include "MoreDimension.h"

#include "ll/api/service/GlobalService.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/DimensionConversionData.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/chunk/VanillaLevelChunkUpgrade.h"
#include "mc/world/level/dimension/NetherDimension.h"
#include "mc/world/level/dimension/OverworldDimension.h"
#include "mc/world/level/dimension/end/TheEndDimension.h"
#include "mc/world/level/levelgen/VoidGenerator.h"
#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
#include "mc/world/level/levelgen/v1/NetherGenerator.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator2d.h"
#include "mc/world/level/levelgen/v1/TheEndGenerator.h"


MoreDimension::MoreDimension(ILevel& ilevel, Scheduler& scheduler, MoreDimensionManager::DimensionInfo& dimensionInfo)
: Dimension(ilevel, dimensionInfo.id, DimensionHeightRange(-64, 320), scheduler, dimensionInfo.name) {
    loggerMoreDim.debug("MoreDimension::MoreDimension dimension name:{}", dimensionInfo.name);
    mDefaultBrightness.sky = Brightness::MAX;
    auto generatorType     = dimensionInfo.generatorType;
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

void MoreDimension::init() {
    loggerMoreDim.debug("MoreDimension::init");
    setSkylight(false);
    Dimension::init();
}

std::unique_ptr<WorldGenerator> MoreDimension::createGenerator() {
    loggerMoreDim.debug("MoreDimension::createGenerator");
    auto& level         = getLevel();
    auto& levelData     = level.getLevelData();
    auto  biome         = level.getBiomeRegistry().lookupByName(levelData.getBiomeOverride());
    auto  generatorType = ll::Global<MoreDimensionManager>->MoreDimensionMap.at(this->mId).generatorType;
    auto  seed          = ll::Global<MoreDimensionManager>->MoreDimensionMap.at(this->mId.id).seed;

    switch (generatorType) {
    case GeneratorType::Overworld:
        return std::make_unique<OverworldGenerator2d>(
            *this,
            seed,
            false,
            biome,
            makeStructureFeatures(seed, false, levelData.getBaseGameVersion(), levelData.getExperiments())
        );
    case GeneratorType::Nether:
        return std::make_unique<NetherGenerator>(
            *this,
            seed,
            biome,
            makeStructureFeatures(seed, false, levelData.getBaseGameVersion(), levelData.getExperiments())
        );
    case GeneratorType::TheEnd:
        return std::make_unique<TheEndGenerator>(
            *this,
            seed,
            biome,
            makeStructureFeatures(seed, false, levelData.getBaseGameVersion(), levelData.getExperiments())
        );
    case GeneratorType::Flat:
        return std::make_unique<FlatWorldGenerator>(*this, seed, levelData.getFlatWorldGeneratorOptions());
    default:
        return std::make_unique<VoidGenerator>(*this);
    }
}

void MoreDimension::upgradeLevelChunk(ChunkSource& cs, LevelChunk& lc, LevelChunk& generatedChunk) {
    loggerMoreDim.debug("MoreDimension::upgradeLevelChunk");
    BlockSource blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
    VanillaLevelChunkUpgrade::_upgradeLevelChunkViaMetaData(lc, generatedChunk, blockSource);
    VanillaLevelChunkUpgrade::_upgradeLevelChunkLegacy(lc, blockSource);
}

void MoreDimension::fixWallChunk(ChunkSource& cs, LevelChunk& lc) {
    loggerMoreDim.debug("MoreDimension::fixWallChunk");
    BlockSource blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
    VanillaLevelChunkUpgrade::fixWallChunk(lc, blockSource);
}

bool MoreDimension::levelChunkNeedsUpgrade(LevelChunk const& lc) const {
    loggerMoreDim.debug("MoreDimension::levelChunkNeedsUpgrade");
    return VanillaLevelChunkUpgrade::levelChunkNeedsUpgrade(lc);
}
void MoreDimension::_upgradeOldLimboEntity(CompoundTag& tag, ::LimboEntitiesVersion vers) {
    loggerMoreDim.debug("MoreDimension::_upgradeOldLimboEntity");
    auto isTemplate = this->getLevel().getLevelData().isFromWorldTemplate();
    return VanillaLevelChunkUpgrade::upgradeOldLimboEntity(tag, vers, isTemplate);
}

Vec3 MoreDimension::translatePosAcrossDimension(Vec3 const& fromPos, DimensionType fromId) const {
    loggerMoreDim.debug("MoreDimension::translatePosAcrossDimension");
    auto data  = getLevel().getDimensionConversionData();
    auto topos = Vec3();
    VanillaDimensions::convertPointBetweenDimensions(fromPos, topos, fromId, this->mId, data);
    if (topos.x >= 31999872) topos.x = 31999872;
    if (topos.x <= -31999872) topos.x = -31999872;
    if (topos.z >= 31999872) topos.z = 31999872;
    if (topos.z <= -31999872) topos.z = -31999872;
    return topos;
}

std::unique_ptr<ChunkSource>
MoreDimension::_wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource> cs, ::StorageVersion ver) {
    loggerMoreDim.debug("MoreDimension::_wrapStorageForVersionCompatibility");
    return cs;
}

mce::Color MoreDimension::getBrightnessDependentFogColor(mce::Color const& color, float brightness) const {
    loggerMoreDim.debug("MoreDimension::getBrightnessDependentFogColor");
    float temp   = (brightness * 0.94f) + 0.06f;
    float temp2  = (brightness * 0.91f) + 0.09f;
    auto  result = color;
    result.r     = color.r * temp;
    result.g     = color.g * temp;
    result.b     = color.b * temp2;
    return result;
};

std::unique_ptr<StructureFeatureRegistry> MoreDimension::makeStructureFeatures(
    uint                   seed,
    bool                   isLegacy,
    BaseGameVersion const& baseGameVersion,
    Experiments const&     experiments
) {
    loggerMoreDim.debug("MoreDimension::makeStructureFeatures");
    auto generatorType = ll::Global<MoreDimensionManager>->MoreDimensionMap.at(this->mId).generatorType;
    switch (generatorType) {
    case GeneratorType::Nether:
        return NetherDimension::makeStructureFeatures(seed, baseGameVersion);
    case GeneratorType::TheEnd:
        return TheEndDimension::makeStructureFeatures(*this, seed);
    default:
        return OverworldDimension::makeStructureFeatures(seed, isLegacy, baseGameVersion, experiments);
    }
};
