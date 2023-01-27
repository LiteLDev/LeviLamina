/**
 * @file  LodestoneBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LodestoneBlockActor.
 *
 */
class LodestoneBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LODESTONEBLOCKACTOR
public:
    class LodestoneBlockActor& operator=(class LodestoneBlockActor const &) = delete;
    LodestoneBlockActor(class LodestoneBlockActor const &) = delete;
    LodestoneBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LodestoneBlockActor();
    /**
     * @hash   2113663120
     * @vftbl  1
     * @symbol  ?load\@LodestoneBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -638181649
     * @vftbl  2
     * @symbol  ?save\@LodestoneBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   55822409
     * @vftbl  7
     * @symbol  ?tick\@LodestoneBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   1280403045
     * @vftbl  13
     * @symbol  ?onRemoved\@LodestoneBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @hash   -802131614
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@LodestoneBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -1908924848
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@LodestoneBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1169230652
     * @symbol  ??0LodestoneBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LodestoneBlockActor(class BlockPos const &);
    /**
     * @hash   -579577422
     * @symbol  ?getTrackingHandle\@LodestoneBlockActor\@\@QEBAAEBVPositionTrackingId\@\@XZ
     */
    MCAPI class PositionTrackingId const & getTrackingHandle() const;
    /**
     * @hash   -2128240548
     * @symbol  ?hasTrackingHandle\@LodestoneBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool hasTrackingHandle() const;
    /**
     * @hash   -1211689577
     * @symbol  ?setTrackingHandle\@LodestoneBlockActor\@\@QEAA_NAEBVPositionTrackingId\@\@\@Z
     */
    MCAPI bool setTrackingHandle(class PositionTrackingId const &);

//private:

private:
    /**
     * @hash   1902367343
     * @symbol  ?sTagName_Handle\@LodestoneBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sTagName_Handle;

};