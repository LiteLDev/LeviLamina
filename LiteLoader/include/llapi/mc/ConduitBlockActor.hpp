/**
 * @file  ConduitBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~ConduitBlockActor();
    /**
     * @hash   -984843107
     * @vftbl  1
     * @symbol ?load@ConduitBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   109601196
     * @vftbl  2
     * @symbol ?save@ConduitBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -900109738
     * @vftbl  7
     * @symbol ?tick@ConduitBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   1027992991
     * @vftbl  18
     * @symbol ?hasAlphaLayer@ConduitBlockActor@@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   825972831
     * @vftbl  35
     * @symbol ?_getUpdatePacket@ConduitBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -62594557
     * @vftbl  36
     * @symbol ?_onUpdatePacket@ConduitBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   218548441
     * @symbol ??0ConduitBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI ConduitBlockActor(class BlockPos const &);

//private:
    /**
     * @hash   -1627728642
     * @symbol ?_animateTick@ConduitBlockActor@@AEBAXAEAVBlockSource@@@Z
     */
    MCAPI void _animateTick(class BlockSource &) const;
    /**
     * @hash   -2109219178
     * @symbol ?_checkShape@ConduitBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _checkShape(class BlockSource &);
    /**
     * @hash   -893881755
     * @symbol ?_updateTarget@ConduitBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _updateTarget(class BlockSource &);

private:

};