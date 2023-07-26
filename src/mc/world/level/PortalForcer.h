#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class PortalForcer {

public:
    // prevent constructor by default
    PortalForcer& operator=(PortalForcer const&) = delete;
    PortalForcer(PortalForcer const&)            = delete;
    PortalForcer()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?deserialize\@PortalForcer\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void deserialize(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?serialize\@PortalForcer\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?addPortalRecord\@PortalForcer\@\@QEAAAEBVPortalRecord\@\@V?$AutomaticID\@VDimension\@\@H\@\@V2\@\@Z
     */
    MCAPI class PortalRecord const&
        addPortalRecord(class AutomaticID<class Dimension, int>, class PortalRecord); // NOLINT
    /**
     * @symbol
     * ?addPortalRecord\@PortalForcer\@\@QEAAAEBVPortalRecord\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVPortalShape\@\@\@Z
     */
    MCAPI class PortalRecord const&
    addPortalRecord(class AutomaticID<class Dimension, int>, class PortalShape const&); // NOLINT
    /**
     * @symbol ?createPortal\@PortalForcer\@\@QEAAAEBVPortalRecord\@\@AEBVActor\@\@H\@Z
     */
    MCAPI class PortalRecord const& createPortal(class Actor const&, int); // NOLINT
    /**
     * @symbol ?force\@PortalForcer\@\@QEAAXAEAVActor\@\@AEBUDimensionTransitionComponent\@\@\@Z
     */
    MCAPI void force(class Actor&, struct DimensionTransitionComponent const&); // NOLINT
    /**
     * @symbol ?portalRecordExists\@PortalForcer\@\@QEBA_NV?$AutomaticID\@VDimension\@\@H\@\@AEBVPortalRecord\@\@\@Z
     */
    MCAPI bool portalRecordExists(class AutomaticID<class Dimension, int>, class PortalRecord const&) const; // NOLINT
    /**
     * @symbol
     * ?removeMisalignedPortalRecords\@PortalForcer\@\@QEAAXAEAVBlockSource\@\@AEBVPortalShape\@\@AEBVPortalRecord\@\@\@Z
     */
    MCAPI void
    removeMisalignedPortalRecords(class BlockSource&, class PortalShape const&, class PortalRecord const&); // NOLINT
    /**
     * @symbol ?removePortalRecord\@PortalForcer\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void removePortalRecord(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?canPortalReplaceBlock\@PortalForcer\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool canPortalReplaceBlock(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION\@PortalForcer\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION; // NOLINT
    /**
     * @symbol
     * ?PORTAL_FILE_ID\@PortalForcer\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PORTAL_FILE_ID; // NOLINT

    // private:
    /**
     * @symbol
     * ?_findPortal\@PortalForcer\@\@AEBA?AV?$optional\@VPortalRecord\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@HAEAV5\@\@Z
     */
    MCAPI class std::optional<class PortalRecord>
    _findPortal(class AutomaticID<class Dimension, int>, class BlockPos const&, int, class BlockPos&) const; // NOLINT

private:
};
