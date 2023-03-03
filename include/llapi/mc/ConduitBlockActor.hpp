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
     * @vftbl  1
     * @symbol  ?load\@ConduitBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@ConduitBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
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
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@ConduitBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@ConduitBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ??0ConduitBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ConduitBlockActor(class BlockPos const &);

//private:
    /**
     * @symbol  ?_animateTick\@ConduitBlockActor\@\@AEBAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _animateTick(class BlockSource &) const;
    /**
     * @symbol  ?_checkShape\@ConduitBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _checkShape(class BlockSource &);
    /**
     * @symbol  ?_updateTarget\@ConduitBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateTarget(class BlockSource &);

private:

};