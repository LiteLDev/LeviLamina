#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class RepeaterCapacitor : public ::SidePoweredComponent {
public:
    enum class States : int {
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
    // vIndex: 0, symbol: __gen_??1RepeaterCapacitor@@UEAA@XZ
    virtual ~RepeaterCapacitor() = default;

    // vIndex: 1, symbol: ?getStrength@RepeaterCapacitor@@UEBAHXZ
    virtual int getStrength() const;

    // vIndex: 3, symbol: ?setStrength@RepeaterCapacitor@@UEAAXH@Z
    virtual void setStrength(int strength);

    // vIndex: 11, symbol:
    // ?addSource@RepeaterCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 13, symbol: ?checkLock@RepeaterCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual void checkLock(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 14, symbol: ?evaluate@RepeaterCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 15, symbol: ?cacheValues@RepeaterCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 16, symbol: ?updateDependencies@RepeaterCapacitor@@UEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
    virtual void updateDependencies(class CircuitSceneGraph& system, class BlockPos const& pos);

    // vIndex: 23, symbol: ?getCircuitComponentType@RepeaterCapacitor@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0RepeaterCapacitor@@QEAA@XZ
    MCAPI RepeaterCapacitor();

    // symbol: ?setDelay@RepeaterCapacitor@@QEAAXH@Z
    MCAPI void setDelay(int delay);

    // NOLINTEND
};
