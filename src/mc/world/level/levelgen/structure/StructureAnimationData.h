#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class StructureAnimationData {
public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&);
    StructureAnimationData(StructureAnimationData const&);
    StructureAnimationData();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0StructureAnimationData@@QEAA@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVStructureSettings@@EAEBVBlockPos@@@Z
    MCAPI StructureAnimationData(
        std::unique_ptr<class CommandArea> cmdArea,
        uint64                             tickQueued,
        std::string const&                 structureName,
        class StructureSettings const&     structureSettings,
        uchar                              structureVersion,
        class BlockPos const&              placementPos
    );

    // symbol: ?allBlocksPlaced@StructureAnimationData@@QEBA_NXZ
    MCAPI bool allBlocksPlaced() const;

    // symbol: ?getBlocksExpectedToPlace@StructureAnimationData@@QEBAI_K@Z
    MCAPI uint getBlocksExpectedToPlace(uint64 currentTick) const;

    // symbol: ?getBlocksPlaced@StructureAnimationData@@QEBAIXZ
    MCAPI uint getBlocksPlaced() const;

    // symbol: ?getDimensionBlockSource@StructureAnimationData@@QEBAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getDimensionBlockSource() const;

    // symbol: ?getPosition@StructureAnimationData@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getPosition() const;

    // symbol: ?getQueueID@StructureAnimationData@@QEBAIXZ
    MCAPI uint getQueueID() const;

    // symbol:
    // ?getStructureName@StructureAnimationData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getStructureName() const;

    // symbol: ?getStructureSettings@StructureAnimationData@@QEBAAEBVStructureSettings@@XZ
    MCAPI class StructureSettings const& getStructureSettings() const;

    // symbol: ?getStructureVersion@StructureAnimationData@@QEBAEXZ
    MCAPI uchar getStructureVersion() const;

    // symbol: ?getTargetDimension@StructureAnimationData@@QEBAAEBV?$AutomaticID@VDimension@@H@@XZ
    MCAPI DimensionType const& getTargetDimension() const;

    // symbol: ?getTotalBlocks@StructureAnimationData@@QEBAIXZ
    MCAPI uint getTotalBlocks() const;

    // symbol: ?serialize@StructureAnimationData@@QEAAAEAVCompoundTag@@AEAV2@@Z
    MCAPI class CompoundTag& serialize(class CompoundTag& tag);

    // symbol: ?setBlocksPlaced@StructureAnimationData@@QEAAXI@Z
    MCAPI void setBlocksPlaced(uint);

    // symbol:
    // ?setCmdArea@StructureAnimationData@@QEAAXV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@@Z
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea> cmdArea);

    // symbol: ?setQueueID@StructureAnimationData@@QEAAXI@Z
    MCAPI void setQueueID(uint);

    // symbol: ?setTargetDimension@StructureAnimationData@@QEAAXAEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setTargetDimension(DimensionType const&);

    // symbol: ??1StructureAnimationData@@QEAA@XZ
    MCAPI ~StructureAnimationData();

    // symbol:
    // ?load@StructureAnimationData@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
    MCAPI static class StructureAnimationData load(std::string const& key, class CompoundTag const& tag);

    // NOLINTEND
};
