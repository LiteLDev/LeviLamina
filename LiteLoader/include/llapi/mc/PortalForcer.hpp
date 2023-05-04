/**
 * @file  PortalForcer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PortalForcer.
 *
 */
class PortalForcer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALFORCER
public:
    class PortalForcer& operator=(class PortalForcer const &) = delete;
    PortalForcer(class PortalForcer const &) = delete;
    PortalForcer() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?deserialize\@PortalForcer\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void deserialize(class CompoundTag const &);
    /**
     * @vftbl 2
     * @symbol ?serialize\@PortalForcer\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag &) const;
    /**
     * @symbol ?addPortalRecord\@PortalForcer\@\@QEAAAEBVPortalRecord\@\@V?$AutomaticID\@VDimension\@\@H\@\@V2\@\@Z
     */
    MCAPI class PortalRecord const & addPortalRecord(class AutomaticID<class Dimension, int>, class PortalRecord);
    /**
     * @symbol ?addPortalRecord\@PortalForcer\@\@QEAAAEBVPortalRecord\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVPortalShape\@\@\@Z
     */
    MCAPI class PortalRecord const & addPortalRecord(class AutomaticID<class Dimension, int>, class PortalShape const &);
    /**
     * @symbol ?createPortal\@PortalForcer\@\@QEAAAEBVPortalRecord\@\@AEBVActor\@\@H\@Z
     */
    MCAPI class PortalRecord const & createPortal(class Actor const &, int);
    /**
     * @symbol ?force\@PortalForcer\@\@QEAAXAEAVActor\@\@AEBUDimensionTransitionComponent\@\@\@Z
     */
    MCAPI void force(class Actor &, struct DimensionTransitionComponent const &);
    /**
     * @symbol ?portalRecordExists\@PortalForcer\@\@QEBA_NV?$AutomaticID\@VDimension\@\@H\@\@AEBVPortalRecord\@\@\@Z
     */
    MCAPI bool portalRecordExists(class AutomaticID<class Dimension, int>, class PortalRecord const &) const;
    /**
     * @symbol ?removeMisalignedPortalRecords\@PortalForcer\@\@QEAAXAEAVBlockSource\@\@AEBVPortalShape\@\@AEBVPortalRecord\@\@\@Z
     */
    MCAPI void removeMisalignedPortalRecords(class BlockSource &, class PortalShape const &, class PortalRecord const &);
    /**
     * @symbol ?removePortalRecord\@PortalForcer\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void removePortalRecord(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION\@PortalForcer\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION;
    /**
     * @symbol ?PORTAL_FILE_ID\@PortalForcer\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PORTAL_FILE_ID;
    /**
     * @symbol ?canPortalReplaceBlock\@PortalForcer\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool canPortalReplaceBlock(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_findPortal\@PortalForcer\@\@AEBA?AV?$optional\@VPortalRecord\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@HAEAV5\@\@Z
     */
    MCAPI class std::optional<class PortalRecord> _findPortal(class AutomaticID<class Dimension, int>, class BlockPos const &, int, class BlockPos &) const;

private:

};
