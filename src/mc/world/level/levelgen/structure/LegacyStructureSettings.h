#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Mirror.h"
#include "mc/enums/Projection.h"
#include "mc/enums/Rotation.h"

class LegacyStructureSettings {
public:
    // prevent constructor by default
    LegacyStructureSettings& operator=(LegacyStructureSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LegacyStructureSettings@@QEAA@XZ
    MCAPI LegacyStructureSettings();

    // symbol: ??0LegacyStructureSettings@@QEAA@AEBV0@@Z
    MCAPI LegacyStructureSettings(class LegacyStructureSettings const&);

    // symbol: ??0LegacyStructureSettings@@QEAA@W4Mirror@@W4Rotation@@PEBVBlock@@AEBVBoundingBox@@@Z
    MCAPI LegacyStructureSettings(
        ::Mirror                 mirror,
        ::Rotation               rotation,
        class Block const*       ignoreBlock,
        class BoundingBox const& boundingBox
    );

    // symbol: ?addSwapAuxValue@LegacyStructureSettings@@QEAAXHH@Z
    MCAPI void addSwapAuxValue(int oldvariation, int variation);

    // symbol:
    // ?getBlockRules@LegacyStructureSettings@@QEBAPEBV?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockRule>> const* getBlockRules() const;

    // symbol: ?getBoundingBox@LegacyStructureSettings@@QEAAAEBVBoundingBox@@XZ
    MCAPI class BoundingBox const& getBoundingBox();

    // symbol: ?getIgnoreBlock@LegacyStructureSettings@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getIgnoreBlock() const;

    // symbol: ?getMirror@LegacyStructureSettings@@QEBAAEBW4Mirror@@XZ
    MCAPI ::Mirror const& getMirror() const;

    // symbol: ?getRefPos@LegacyStructureSettings@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getRefPos() const;

    // symbol: ?getRotation@LegacyStructureSettings@@QEBAAEBW4Rotation@@XZ
    MCAPI ::Rotation const& getRotation() const;

    // symbol: ?getSwappedBlock@LegacyStructureSettings@@QEBAAEBVBlock@@AEBVBlockPalette@@AEBV2@@Z
    MCAPI class Block const& getSwappedBlock(class BlockPalette const& palette, class Block const& oldBlock) const;

    // symbol: ?isIgnoreJigsawBlocks@LegacyStructureSettings@@QEBA_NXZ
    MCAPI bool isIgnoreJigsawBlocks() const;

    // symbol: ?isIgnoreStructureBlocks@LegacyStructureSettings@@QEBA_NXZ
    MCAPI bool isIgnoreStructureBlocks() const;

    // symbol: ?isPlacingWaterBelowSeaLevel@LegacyStructureSettings@@QEBA_NXZ
    MCAPI bool isPlacingWaterBelowSeaLevel() const;

    // symbol: ?placeWaterBelowSeaLevel@LegacyStructureSettings@@QEAAX_N@Z
    MCAPI void placeWaterBelowSeaLevel(bool water);

    // symbol:
    // ?setBlockRules@LegacyStructureSettings@@QEAAXPEBV?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@std@@@Z
    MCAPI void setBlockRules(std::vector<std::unique_ptr<class StructurePoolBlockRule>> const* blockRules);

    // symbol:
    // ?setBlockTagRules@LegacyStructureSettings@@QEAAXPEBV?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@std@@@Z
    MCAPI void setBlockTagRules(std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules);

    // symbol: ?setBoundingBox@LegacyStructureSettings@@QEAAXAEBVBoundingBox@@@Z
    MCAPI void setBoundingBox(class BoundingBox const& boundingBox);

    // symbol: ?setIgnoreBlock@LegacyStructureSettings@@QEAAXPEBVBlock@@@Z
    MCAPI void setIgnoreBlock(class Block const* ignoreBlock);

    // symbol: ?setIntegrity@LegacyStructureSettings@@QEAAXM@Z
    MCAPI void setIntegrity(float integrity);

    // symbol: ?setMirror@LegacyStructureSettings@@QEAAXW4Mirror@@@Z
    MCAPI void setMirror(::Mirror mirror);

    // symbol: ?setProjection@LegacyStructureSettings@@QEAAXW4Projection@@@Z
    MCAPI void setProjection(::Projection projection);

    // symbol: ?setRefPos@LegacyStructureSettings@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setRefPos(class BlockPos const& refPos);

    // symbol: ?setRotation@LegacyStructureSettings@@QEAAXW4Rotation@@@Z
    MCAPI void setRotation(::Rotation rotation);

    // symbol: ?setSeed@LegacyStructureSettings@@QEAAXI@Z
    MCAPI void setSeed(uint seed);

    // symbol: ?updateBoundingBoxFromChunkPos@LegacyStructureSettings@@QEAAXXZ
    MCAPI void updateBoundingBoxFromChunkPos();

    // symbol: ??1LegacyStructureSettings@@QEAA@XZ
    MCAPI ~LegacyStructureSettings();

    // symbol: ?INTEGRITY_MAX@LegacyStructureSettings@@2MB
    MCAPI static float const INTEGRITY_MAX;

    // symbol: ?INTEGRITY_MIN@LegacyStructureSettings@@2MB
    MCAPI static float const INTEGRITY_MIN;

    // symbol: ?MAX_STRUCTURE_SIZE@LegacyStructureSettings@@2HB
    MCAPI static int const MAX_STRUCTURE_SIZE;

    // NOLINTEND
};
