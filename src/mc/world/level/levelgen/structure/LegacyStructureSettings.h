#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/Projection.h"

class LegacyStructureSettings {
public:
    // prevent constructor by default
    LegacyStructureSettings& operator=(LegacyStructureSettings const&);

public:
    // NOLINTBEGIN
    MCAPI LegacyStructureSettings();

    MCAPI LegacyStructureSettings(class LegacyStructureSettings const&);

    MCAPI LegacyStructureSettings(
        ::Mirror                 mirror,
        ::Rotation               rotation,
        class Block const*       ignoreBlock,
        class BoundingBox const& boundingBox
    );

    MCAPI void addSwapAuxValue(int oldvariation, int variation);

    MCAPI class BoundingBox const& getBoundingBox();

    MCAPI ::Mirror const& getMirror() const;

    MCAPI class BlockPos const& getRefPos() const;

    MCAPI ::Rotation const& getRotation() const;

    MCAPI class Block const& getSwappedBlock(class BlockPalette const& palette, class Block const& oldBlock) const;

    MCAPI void placeWaterBelowSeaLevel(bool water);

    MCAPI void setBlockRules(std::vector<std::unique_ptr<class StructurePoolBlockRule>> const* blockRules);

    MCAPI void setBlockTagRules(std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules);

    MCAPI void setBoundingBox(class BoundingBox const& boundingBox);

    MCAPI void setIgnoreBlock(class Block const* ignoreBlock);

    MCAPI void setIntegrity(float integrity);

    MCAPI void setMirror(::Mirror mirror);

    MCAPI void setProjection(::Projection projection);

    MCAPI void setRefPos(class BlockPos const& refPos);

    MCAPI void setRotation(::Rotation rotation);

    MCAPI void setSeed(uint seed);

    MCAPI void updateBoundingBoxFromChunkPos();

    MCAPI ~LegacyStructureSettings();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void*
    ctor$(::Mirror mirror, ::Rotation rotation, class Block const* ignoreBlock, class BoundingBox const& boundingBox);

    MCAPI void* ctor$(class LegacyStructureSettings const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static float const& INTEGRITY_MAX();

    MCAPI static float const& INTEGRITY_MIN();

    MCAPI static int const& MAX_STRUCTURE_SIZE();

    // NOLINTEND
};
