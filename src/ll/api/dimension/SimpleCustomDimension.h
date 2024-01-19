#pragma once

#include "ll/api/dimension/CustomDimensionManager.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/NetherBrightnessRamp.h"
#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
#include "mc/world/level/levelgen/structure/StructureFeatureRegistry.h"

class BaseGameVersion;
class Experiments;
class ChunkSource;
class LevelChunk;

namespace ll::dimension {

class SimpleCustomDimension : public Dimension {
    uint          seed;
    GeneratorType generatorType;

public:
    LLNDAPI SimpleCustomDimension(std::string const& name, DimensionFactoryInfo const& info);

    LLNDAPI static CompoundTag generateNewData(uint seed = 123, GeneratorType generatorType = GeneratorType::Overworld);

    void init() override;

    std::unique_ptr<WorldGenerator> createGenerator() override;

    void upgradeLevelChunk(ChunkSource& chunkSource, LevelChunk& oldLc, LevelChunk& newLc) override;

    void fixWallChunk(ChunkSource& cs, LevelChunk& lc) override;

    bool levelChunkNeedsUpgrade(LevelChunk const& lc) const override;

    void _upgradeOldLimboEntity(CompoundTag& tag, ::LimboEntitiesVersion vers) override;

    Vec3 translatePosAcrossDimension(Vec3 const& pos, DimensionType did) const override;

    std::unique_ptr<ChunkSource>
    _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource> cs, ::StorageVersion ver) override;


    mce::Color getBrightnessDependentFogColor(mce::Color const& color, float brightness) const override;

    short getCloudHeight() const override;

    bool hasPrecipitationFog() const override;

    std::unique_ptr<StructureFeatureRegistry>
    makeStructureFeatures(bool isLegacy, BaseGameVersion const& baseGameVersion, Experiments const& experiments);
};
} // namespace ll::dimension
