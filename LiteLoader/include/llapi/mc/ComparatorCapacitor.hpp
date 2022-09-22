/**
 * @file  ComparatorCapacitor.hpp
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
 * @brief MC class ComparatorCapacitor.
 *
 */
class ComparatorCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class Mode;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORCAPACITOR
public:
    class ComparatorCapacitor& operator=(class ComparatorCapacitor const &) = delete;
    ComparatorCapacitor(class ComparatorCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ComparatorCapacitor();
    /**
     * @hash   -540809704
     * @vftbl  6
     * @symbol ?canConsumePowerAnyDirection@ComparatorCapacitor@@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @hash   2109317003
     * @vftbl  7
     * @symbol ?canConsumerPower@ComparatorCapacitor@@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   -923147766
     * @vftbl  10
     * @symbol ?removeSource@ComparatorCapacitor@@UEAA_NAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @hash   1591003584
     * @vftbl  11
     * @symbol ?addSource@ComparatorCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   -1844059236
     * @vftbl  12
     * @symbol ?allowConnection@ComparatorCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1260507300
     * @vftbl  14
     * @symbol ?evaluate@ComparatorCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   264419141
     * @vftbl  15
     * @symbol ?cacheValues@ComparatorCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   2033156518
     * @vftbl  16
     * @symbol ?updateDependencies@ComparatorCapacitor@@UEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
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
     * @hash   -1969225958
     * @vftbl  22
     * @symbol ?getCircuitComponentType@ComparatorCapacitor@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   1215037997
     * @vftbl  24
     * @symbol ?getPoweroutDirection@ComparatorCapacitor@@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @hash   -632860232
     * @symbol ??0ComparatorCapacitor@@QEAA@XZ
     */
    MCAPI ComparatorCapacitor();
    /**
     * @hash   1521725691
     * @symbol ?clearAnalogStrength@ComparatorCapacitor@@QEAAXE@Z
     */
    MCAPI void clearAnalogStrength(unsigned char);
    /**
     * @hash   -1007165172
     * @symbol ?getOldStrength@ComparatorCapacitor@@QEAAHXZ
     */
    MCAPI int getOldStrength();
    /**
     * @hash   -1884386360
     * @symbol ?isSubtractMode@ComparatorCapacitor@@QEAA_NXZ
     */
    MCAPI bool isSubtractMode();
    /**
     * @hash   199617588
     * @symbol ?setAnalogStrength@ComparatorCapacitor@@QEAAXHE@Z
     */
    MCAPI void setAnalogStrength(int, unsigned char);
    /**
     * @hash   -1494954927
     * @symbol ?setMode@ComparatorCapacitor@@QEAAXW4Mode@1@@Z
     */
    MCAPI void setMode(enum ComparatorCapacitor::Mode);

};