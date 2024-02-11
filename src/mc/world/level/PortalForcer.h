#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/level/saveddata/SavedData.h"

class PortalForcer : public ::SavedData {
public:
    // prevent constructor by default
    PortalForcer& operator=(PortalForcer const&);
    PortalForcer(PortalForcer const&);
    PortalForcer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PortalForcer@@UEAA@XZ
    virtual ~PortalForcer() = default;

    // vIndex: 1, symbol: ?deserialize@PortalForcer@@UEAAXAEBVCompoundTag@@@Z
    virtual void deserialize(class CompoundTag const& tag);

    // vIndex: 2, symbol: ?serialize@PortalForcer@@UEBAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag& tag) const;

    // symbol: ??0PortalForcer@@QEAA@AEAVLevel@@@Z
    MCAPI explicit PortalForcer(class Level& level);

    // symbol: ?addPortalRecord@PortalForcer@@QEAAAEBVPortalRecord@@V?$AutomaticID@VDimension@@H@@V2@@Z
    MCAPI class PortalRecord const& addPortalRecord(DimensionType dimensionType, class PortalRecord toAdd);

    // symbol: ?addPortalRecord@PortalForcer@@QEAAAEBVPortalRecord@@V?$AutomaticID@VDimension@@H@@AEBVPortalShape@@@Z
    MCAPI class PortalRecord const& addPortalRecord(DimensionType dimensionType, class PortalShape const& shape);

    // symbol: ?createPortal@PortalForcer@@QEAAAEBVPortalRecord@@AEBVActor@@H@Z
    MCAPI class PortalRecord const& createPortal(class Actor const& entity, int radius);

    // symbol: ?findPortal@PortalForcer@@QEBA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@HAEAV3@@Z
    MCAPI bool findPortal(
        DimensionType         dimensionId,
        class BlockPos const& centerBlockPos,
        int                   radius,
        class BlockPos&       targetBlockPos
    ) const;

    // symbol: ?force@PortalForcer@@QEAAXAEAVActor@@AEBUDimensionTransitionComponent@@@Z
    MCAPI void force(class Actor& entity, struct DimensionTransitionComponent const&);

    // symbol: ?portalRecordExists@PortalForcer@@QEBA_NV?$AutomaticID@VDimension@@H@@AEBVPortalRecord@@@Z
    MCAPI bool portalRecordExists(DimensionType dimensionType, class PortalRecord const& record) const;

    // symbol: ?removeMisalignedPortalRecords@PortalForcer@@QEAAXAEAVBlockSource@@AEBVPortalShape@@AEBVPortalRecord@@@Z
    MCAPI void
    removeMisalignedPortalRecords(class BlockSource& region, class PortalShape const&, class PortalRecord const&);

    // symbol: ?removePortalRecord@PortalForcer@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void removePortalRecord(class BlockSource& source, class BlockPos const& pos);

    // symbol: ?canPortalReplaceBlock@PortalForcer@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool canPortalReplaceBlock(class BlockSource& region, class BlockPos const& blockPos);

    // symbol: ?MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION@PortalForcer@@2VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION;

    // symbol: ?PORTAL_FILE_ID@PortalForcer@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PORTAL_FILE_ID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findPortal@PortalForcer@@AEBA?AV?$optional@VPortalRecord@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@HAEAV5@@Z
    MCAPI std::optional<class PortalRecord> _findPortal(
        DimensionType         dimensionId,
        class BlockPos const& centerBlockPos,
        int                   radius,
        class BlockPos&       targetBlockPos
    ) const;

    // NOLINTEND
};
