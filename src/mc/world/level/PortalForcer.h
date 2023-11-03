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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?deserialize@PortalForcer@@UEAAXAEBVCompoundTag@@@Z
    virtual void deserialize(class CompoundTag const&);

    // vIndex: 2, symbol: ?serialize@PortalForcer@@UEBAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag&) const;

    // symbol: ?addPortalRecord@PortalForcer@@QEAAAEBVPortalRecord@@V?$AutomaticID@VDimension@@H@@V2@@Z
    MCAPI class PortalRecord const& addPortalRecord(DimensionType, class PortalRecord);

    // symbol: ?addPortalRecord@PortalForcer@@QEAAAEBVPortalRecord@@V?$AutomaticID@VDimension@@H@@AEBVPortalShape@@@Z
    MCAPI class PortalRecord const& addPortalRecord(DimensionType, class PortalShape const&);

    // symbol: ?createPortal@PortalForcer@@QEAAAEBVPortalRecord@@AEBVActor@@H@Z
    MCAPI class PortalRecord const& createPortal(class Actor const&, int);

    // symbol: ?findPortal@PortalForcer@@QEBA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@HAEAV3@@Z
    MCAPI bool findPortal(DimensionType, class BlockPos const&, int, class BlockPos&) const;

    // symbol: ?force@PortalForcer@@QEAAXAEAVActor@@AEBUDimensionTransitionComponent@@@Z
    MCAPI void force(class Actor&, struct DimensionTransitionComponent const&);

    // symbol: ?portalRecordExists@PortalForcer@@QEBA_NV?$AutomaticID@VDimension@@H@@AEBVPortalRecord@@@Z
    MCAPI bool portalRecordExists(DimensionType, class PortalRecord const&) const;

    // symbol: ?removeMisalignedPortalRecords@PortalForcer@@QEAAXAEAVBlockSource@@AEBVPortalShape@@AEBVPortalRecord@@@Z
    MCAPI void removeMisalignedPortalRecords(class BlockSource&, class PortalShape const&, class PortalRecord const&);

    // symbol: ?removePortalRecord@PortalForcer@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void removePortalRecord(class BlockSource&, class BlockPos const&);

    // symbol: ?canPortalReplaceBlock@PortalForcer@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool canPortalReplaceBlock(class BlockSource&, class BlockPos const&);

    // symbol: ?MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION@PortalForcer@@2VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION;

    // symbol: ?PORTAL_FILE_ID@PortalForcer@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PORTAL_FILE_ID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findPortal@PortalForcer@@AEBA?AV?$optional@VPortalRecord@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@HAEAV5@@Z
    MCAPI std::optional<class PortalRecord>
          _findPortal(DimensionType, class BlockPos const&, int, class BlockPos&) const;

    // NOLINTEND
};
