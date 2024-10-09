#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class StructureAnimationData {
public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&);
    StructureAnimationData(StructureAnimationData const&);
    StructureAnimationData();

public:
    // NOLINTBEGIN
    MCAPI StructureAnimationData(
        std::unique_ptr<class CommandArea> cmdArea,
        uint64                             tickQueued,
        std::string const&                 structureName,
        class StructureSettings const&     structureSettings,
        uchar                              structureVersion,
        class BlockPos const&              placementPos
    );

    MCAPI bool allBlocksPlaced() const;

    MCAPI uint getBlocksExpectedToPlace(uint64 currentTick) const;

    MCAPI uint getBlocksPlaced() const;

    MCAPI class BlockSource& getDimensionBlockSource() const;

    MCAPI class BlockPos const& getPosition() const;

    MCAPI uint getQueueID() const;

    MCAPI std::string const& getStructureName() const;

    MCAPI class StructureSettings const& getStructureSettings() const;

    MCAPI uchar getStructureVersion() const;

    MCAPI DimensionType const& getTargetDimension() const;

    MCAPI uint getTotalBlocks() const;

    MCAPI class CompoundTag& serialize(class CompoundTag& tag);

    MCAPI void setBlocksPlaced(uint blocksPlaced);

    MCAPI void setCmdArea(std::unique_ptr<class CommandArea> cmdArea);

    MCAPI void setQueueID(uint queueID);

    MCAPI void setTargetDimension(DimensionType const& targetDimension);

    MCAPI ~StructureAnimationData();

    MCAPI static class StructureAnimationData load(std::string const& key, class CompoundTag const& tag);

    // NOLINTEND
};
