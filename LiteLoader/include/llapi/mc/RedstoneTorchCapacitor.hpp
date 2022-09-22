/**
 * @file  RedstoneTorchCapacitor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RedstoneTorchCapacitor.
 *
 */
class RedstoneTorchCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONETORCHCAPACITOR
public:
    class RedstoneTorchCapacitor& operator=(class RedstoneTorchCapacitor const &) = delete;
    RedstoneTorchCapacitor(class RedstoneTorchCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RedstoneTorchCapacitor();
    /**
     * @hash   1474208920
     * @vftbl  1
     * @symbol ?getStrength@RedstoneTorchCapacitor@@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @hash   1068842284
     * @vftbl  10
     * @symbol ?removeSource@RedstoneTorchCapacitor@@UEAA_NAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @hash   -1297030766
     * @vftbl  11
     * @symbol ?addSource@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   -800141526
     * @vftbl  12
     * @symbol ?allowConnection@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1776019378
     * @vftbl  14
     * @symbol ?evaluate@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -430069865
     * @vftbl  15
     * @symbol ?cacheValues@RedstoneTorchCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -1090790230
     * @vftbl  16
     * @symbol ?updateDependencies@RedstoneTorchCapacitor@@EEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @hash   816290874
     * @vftbl  18
     * @symbol ?isHalfPulse@RedstoneTorchCapacitor@@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   -1005038548
     * @vftbl  22
     * @symbol ?getCircuitComponentType@RedstoneTorchCapacitor@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   982131327
     * @vftbl  24
     * @symbol ?getPoweroutDirection@RedstoneTorchCapacitor@@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @hash   -1398737866
     * @symbol ??0RedstoneTorchCapacitor@@QEAA@XZ
     */
    MCAPI RedstoneTorchCapacitor();
    /**
     * @hash   -497250109
     * @symbol ?resetBurnOutCount@RedstoneTorchCapacitor@@QEAAXXZ
     */
    MCAPI void resetBurnOutCount();
    /**
     * @hash   -759653586
     * @symbol ?setOn@RedstoneTorchCapacitor@@QEAAX_N@Z
     */
    MCAPI void setOn(bool);

//private:
    /**
     * @hash   1150086170
     * @symbol ?FindStrongestStrength@RedstoneTorchCapacitor@@AEAAHAEBVBlockPos@@AEAVCircuitSystem@@AEA_N@Z
     */
    MCAPI int FindStrongestStrength(class BlockPos const &, class CircuitSystem &, bool &);

private:

};