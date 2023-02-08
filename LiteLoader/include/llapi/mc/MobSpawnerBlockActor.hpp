/**
 * @file  MobSpawnerBlockActor.hpp
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
 * @brief MC class MobSpawnerBlockActor.
 *
 */
class MobSpawnerBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNERBLOCKACTOR
public:
    class MobSpawnerBlockActor& operator=(class MobSpawnerBlockActor const &) = delete;
    MobSpawnerBlockActor(class MobSpawnerBlockActor const &) = delete;
    MobSpawnerBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MobSpawnerBlockActor();
    /**
     * @hash   282089847
     * @vftbl  1
     * @symbol  ?load\@MobSpawnerBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -357147114
     * @vftbl  2
     * @symbol  ?save\@MobSpawnerBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1934965440
     * @vftbl  7
     * @symbol  ?tick\@MobSpawnerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   -413333444
     * @vftbl  13
     * @symbol  ?onRemoved\@MobSpawnerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
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
     * @hash   -482202327
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@MobSpawnerBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   829003625
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@MobSpawnerBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   775462515
     * @symbol  ??0MobSpawnerBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MobSpawnerBlockActor(class BlockPos const &);
    /**
     * @hash   -671142034
     * @symbol  ?getSpawner\@MobSpawnerBlockActor\@\@QEAAAEAVBaseMobSpawner\@\@XZ
     */
    MCAPI class BaseMobSpawner & getSpawner();

};