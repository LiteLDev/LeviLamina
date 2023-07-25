#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class ComparatorCapacitor : public ::SidePoweredComponent {
public:
    // ComparatorCapacitor inner types declare
    // clang-format off

    // clang-format on

    // ComparatorCapacitor inner types define
    enum class Mode {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORCAPACITOR
public:
    ComparatorCapacitor& operator=(ComparatorCapacitor const&) = delete;
    ComparatorCapacitor(ComparatorCapacitor const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 11
     * @symbol ?addSource\@ComparatorCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@ComparatorCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@ComparatorCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 16
     * @symbol ?updateDependencies\@ComparatorCapacitor\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@ComparatorCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @symbol ??0ComparatorCapacitor\@\@QEAA\@XZ
     */
    MCAPI ComparatorCapacitor();
    /**
     * @symbol ?clearAnalogStrength\@ComparatorCapacitor\@\@QEAAXE\@Z
     */
    MCAPI void clearAnalogStrength(unsigned char);
    /**
     * @symbol ?getOldStrength\@ComparatorCapacitor\@\@QEAAHXZ
     */
    MCAPI int getOldStrength();
    /**
     * @symbol ?isSubtractMode\@ComparatorCapacitor\@\@QEAA_NXZ
     */
    MCAPI bool isSubtractMode();
    /**
     * @symbol ?setAnalogStrength\@ComparatorCapacitor\@\@QEAAXHE\@Z
     */
    MCAPI void setAnalogStrength(int, unsigned char);
    /**
     * @symbol ?setMode\@ComparatorCapacitor\@\@QEAAXW4Mode\@1\@\@Z
     */
    MCAPI void setMode(enum class ComparatorCapacitor::Mode);
};
