#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/saveddata/SavedData.h"

class PortalForcer : public ::SavedData {
public:
    // prevent constructor by default
    PortalForcer& operator=(PortalForcer const&);
    PortalForcer(PortalForcer const&);
    PortalForcer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PortalForcer() = default;

    // vIndex: 1
    virtual void deserialize(class CompoundTag const& tag);

    // vIndex: 2
    virtual void serialize(class CompoundTag& tag) const;

    MCAPI explicit PortalForcer(class Level& level);

    MCAPI class PortalRecord const& addPortalRecord(DimensionType dimensionType, class PortalRecord toAdd);

    MCAPI class PortalRecord const& addPortalRecord(DimensionType dimensionType, class PortalShape const& shape);

    MCAPI class PortalRecord const& createPortal(class Actor const& entity, int radius);

    MCAPI bool findPortal(
        DimensionType         dimensionId,
        class BlockPos const& centerBlockPos,
        int                   radius,
        class BlockPos&       targetBlockPos
    ) const;

    MCAPI void force(class Actor& entity, struct DimensionTransitionComponent const& portalEntranceComponent);

    MCAPI bool portalRecordExists(DimensionType dimensionType, class PortalRecord const& record) const;

    MCAPI void removeMisalignedPortalRecords(
        class BlockSource&        region,
        class PortalShape const&  referenceShape,
        class PortalRecord const& referenceRecord
    );

    MCAPI void removePortalRecord(class BlockSource& source, class BlockPos const& pos);

    MCAPI static bool canPortalReplaceBlock(class BlockSource& region, class BlockPos const& blockPos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<class PortalRecord> _findPortal(
        DimensionType         dimensionId,
        class BlockPos const& centerBlockPos,
        int                   radius,
        class BlockPos&       targetBlockPos
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Level& level);

    MCAPI void deserialize$(class CompoundTag const& tag);

    MCAPI void serialize$(class CompoundTag& tag) const;

    MCAPI static class BaseGameVersion const& MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION();

    MCAPI static std::string const& PORTAL_FILE_ID();

    // NOLINTEND
};
