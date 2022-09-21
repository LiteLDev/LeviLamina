/**
 * @file  MC/MobSpawnerBlockActor.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~MobSpawnerBlockActor();
    /**
     * @hash   -597017577
     * @vftbl  1
     * @symbol ?load@MobSpawnerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1236269914
     * @vftbl  2
     * @symbol ?save@MobSpawnerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1055842640
     * @vftbl  7
     * @symbol ?tick@MobSpawnerBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   -1292456244
     * @vftbl  13
     * @symbol ?onRemoved@MobSpawnerBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
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
     * @hash   -685842071
     * @vftbl  35
     * @symbol ?_getUpdatePacket@MobSpawnerBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -41385607
     * @vftbl  36
     * @symbol ?_onUpdatePacket@MobSpawnerBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -103644909
     * @symbol ??0MobSpawnerBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI MobSpawnerBlockActor(class BlockPos const &);
    /**
     * @hash   -547852674
     * @symbol ?getSpawner@MobSpawnerBlockActor@@QEAAAEAVBaseMobSpawner@@XZ
     */
    MCAPI class BaseMobSpawner & getSpawner();

};