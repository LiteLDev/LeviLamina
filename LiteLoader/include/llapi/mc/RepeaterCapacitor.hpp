/**
 * @file  RepeaterCapacitor.hpp
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
 * @brief MC class RepeaterCapacitor.
 *
 */
class RepeaterCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATERCAPACITOR
public:
    class RepeaterCapacitor& operator=(class RepeaterCapacitor const &) = delete;
    RepeaterCapacitor(class RepeaterCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RepeaterCapacitor();
    /**
     * @hash   1980692840
     * @vftbl  1
     * @symbol ?getStrength@RepeaterCapacitor@@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @hash   -1770708449
     * @vftbl  3
     * @symbol ?setStrength@RepeaterCapacitor@@UEAAXH@Z
     */
    virtual void setStrength(int);
    /**
     * @hash   155659018
     * @vftbl  6
     * @symbol ?canConsumePowerAnyDirection@RepeaterCapacitor@@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @hash   -134353795
     * @vftbl  7
     * @symbol ?canConsumerPower@RepeaterCapacitor@@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   -934907028
     * @vftbl  10
     * @symbol ?removeSource@RepeaterCapacitor@@UEAA_NAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @hash   -665611742
     * @vftbl  11
     * @symbol ?addSource@RepeaterCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   1514781034
     * @vftbl  12
     * @symbol ?allowConnection@RepeaterCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1473923594
     * @vftbl  13
     * @symbol ?checkLock@RepeaterCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void checkLock(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -255704002
     * @vftbl  14
     * @symbol ?evaluate@RepeaterCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -1846345817
     * @vftbl  15
     * @symbol ?cacheValues@RepeaterCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -343043352
     * @vftbl  16
     * @symbol ?updateDependencies@RepeaterCapacitor@@UEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   465967116
     * @vftbl  22
     * @symbol ?getCircuitComponentType@RepeaterCapacitor@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   -1677677665
     * @vftbl  24
     * @symbol ?getPoweroutDirection@RepeaterCapacitor@@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @hash   -1478692010
     * @symbol ??0RepeaterCapacitor@@QEAA@XZ
     */
    MCAPI RepeaterCapacitor();
    /**
     * @hash   134303622
     * @symbol ?setDelay@RepeaterCapacitor@@QEAAXH@Z
     */
    MCAPI void setDelay(int);

};