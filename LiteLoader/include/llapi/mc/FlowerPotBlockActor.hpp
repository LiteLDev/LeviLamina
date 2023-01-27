/**
 * @file  FlowerPotBlockActor.hpp
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
 * @brief MC class FlowerPotBlockActor.
 *
 */
class FlowerPotBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERPOTBLOCKACTOR
public:
    class FlowerPotBlockActor& operator=(class FlowerPotBlockActor const &) = delete;
    FlowerPotBlockActor(class FlowerPotBlockActor const &) = delete;
    FlowerPotBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FlowerPotBlockActor();
    /**
     * @hash   -1031815
     * @vftbl  1
     * @symbol  ?load\@FlowerPotBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -671452168
     * @vftbl  2
     * @symbol  ?save\@FlowerPotBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -1866567270
     * @vftbl  8
     * @symbol  ?onChanged\@FlowerPotBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
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
     * @hash   1867100315
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@FlowerPotBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -29793289
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@FlowerPotBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -101694971
     * @symbol  ??0FlowerPotBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI FlowerPotBlockActor(class BlockPos const &);
    /**
     * @hash   -1744827805
     * @symbol  ?getPlantItem\@FlowerPotBlockActor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getPlantItem() const;
    /**
     * @hash   537332749
     * @symbol  ?setPlantItem\@FlowerPotBlockActor\@\@QEAAXPEBVBlock\@\@\@Z
     */
    MCAPI void setPlantItem(class Block const *);

};