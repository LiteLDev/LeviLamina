#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class RepeaterCapacitor : public ::SidePoweredComponent {

public:
    // prevent constructor by default
    RepeaterCapacitor& operator=(RepeaterCapacitor const&) = delete;
    RepeaterCapacitor(RepeaterCapacitor const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getStrength\@RepeaterCapacitor\@\@UEBAHXZ
     */
    virtual int getStrength() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?setStrength\@RepeaterCapacitor\@\@UEAAXH\@Z
     */
    virtual void setStrength(int); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?addSource\@RepeaterCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?checkLock\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkLock(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?evaluate\@RepeaterCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?updateDependencies\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17(); // NOLINT
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20(); // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@RepeaterCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const; // NOLINT
    /**
     * @symbol ??0RepeaterCapacitor\@\@QEAA\@XZ
     */
    MCAPI RepeaterCapacitor(); // NOLINT
    /**
     * @symbol ?setDelay\@RepeaterCapacitor\@\@QEAAXH\@Z
     */
    MCAPI void setDelay(int); // NOLINT
};
