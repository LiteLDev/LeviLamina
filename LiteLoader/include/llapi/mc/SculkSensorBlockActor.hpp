/**
 * @file  SculkSensorBlockActor.hpp
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
 * @brief MC class SculkSensorBlockActor.
 *
 */
class SculkSensorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSENSORBLOCKACTOR
public:
    class SculkSensorBlockActor& operator=(class SculkSensorBlockActor const &) = delete;
    SculkSensorBlockActor(class SculkSensorBlockActor const &) = delete;
    SculkSensorBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SculkSensorBlockActor();
    /**
     * @hash   1939447693
     * @vftbl  1
     * @symbol ?load@SculkSensorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1016567132
     * @vftbl  2
     * @symbol ?save@SculkSensorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -1175636250
     * @vftbl  7
     * @symbol ?tick@SculkSensorBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   846373762
     * @vftbl  13
     * @symbol ?onRemoved@SculkSensorBlockActor@@UEAAXAEAVBlockSource@@@Z
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
     * @hash   -1125251319
     * @symbol ??0SculkSensorBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI SculkSensorBlockActor(class BlockPos const &);
    /**
     * @hash   187773496
     * @symbol ?getLatestReceivedVibrationFrequency@SculkSensorBlockActor@@QEBAHXZ
     */
    MCAPI int getLatestReceivedVibrationFrequency() const;
    /**
     * @hash   -678414987
     * @symbol ?onStepOn@SculkSensorBlockActor@@QEAAXAEAVBlockSource@@AEAVActor@@@Z
     */
    MCAPI void onStepOn(class BlockSource &, class Actor &);
    /**
     * @hash   -1776205697
     * @symbol ?TypeId@SculkSensorBlockActor@@2W4BlockActorType@@B
     */
    MCAPI static enum BlockActorType const TypeId;
    /**
     * @hash   -1055750183
     * @symbol ?TypeString@SculkSensorBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TypeString;
    /**
     * @hash   -1923498024
     * @symbol ?tryGet@SculkSensorBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static class SculkSensorBlockActor * tryGet(class BlockSource &, class BlockPos const &);

};