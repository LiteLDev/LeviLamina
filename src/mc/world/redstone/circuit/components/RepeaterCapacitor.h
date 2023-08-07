#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class RepeaterCapacitor : public ::SidePoweredComponent {

public:
    enum class States {
        Off       = 0x0,
        On        = 0x1,
        OffLocked = 0x2,
        Onlocked  = 0x3,
    };
    States                     mOnStates[5];
    int                        mInsertAt;
    bool                       mPowered;
    bool                       mNextPower;
    bool                       mLocked;
    int                        mPulseCount;
    bool                       mPulse;
    bool                       mNextPulse;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::RepeaterCapacitor;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getStrength\@RepeaterCapacitor\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @vftbl 3
     * @symbol ?setStrength\@RepeaterCapacitor\@\@UEAAXH\@Z
     */
    virtual void setStrength(int);
    /**
     * @vftbl 11
     * @symbol ?addSource\@RepeaterCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /**
     * @vftbl 13
     * @symbol ?checkLock\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@RepeaterCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 16
     * @symbol ?updateDependencies\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
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
     * @symbol ?getCircuitComponentType\@RepeaterCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @symbol ??0RepeaterCapacitor\@\@QEAA\@XZ
     */
    MCAPI RepeaterCapacitor();
    /**
     * @symbol ?setDelay\@RepeaterCapacitor\@\@QEAAXH\@Z
     */
    MCAPI void setDelay(int);
    // NOLINTEND
};
