/**
 * @file  ConduitBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConduitBlockActor.
 *
 */
class ConduitBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDUITBLOCKACTOR
public:
    class ConduitBlockActor& operator=(class ConduitBlockActor const &) = delete;
    ConduitBlockActor(class ConduitBlockActor const &) = delete;
    ConduitBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ConduitBlockActor();
    /**
     * @hash   -262278739
     * @vftbl  1
     * @symbol  ?load\@ConduitBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   832165564
     * @vftbl  2
     * @symbol  ?save\@ConduitBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -177560746
     * @vftbl  7
     * @symbol  ?tick\@ConduitBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @hash   1127890863
     * @vftbl  20
     * @symbol  ?hasAlphaLayer\@ConduitBlockActor\@\@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
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
     * @hash   1029612575
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@ConduitBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   807794675
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@ConduitBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   940236377
     * @symbol  ??0ConduitBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ConduitBlockActor(class BlockPos const &);

//private:
    /**
     * @hash   -905994578
     * @symbol  ?_animateTick\@ConduitBlockActor\@\@AEBAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _animateTick(class BlockSource &) const;
    /**
     * @hash   -1386823946
     * @symbol  ?_checkShape\@ConduitBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _checkShape(class BlockSource &);
    /**
     * @hash   -171378891
     * @symbol  ?_updateTarget\@ConduitBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateTarget(class BlockSource &);

private:

};