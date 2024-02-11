#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class ComparatorCapacitor : public ::SidePoweredComponent {
public:
    // ComparatorCapacitor inner types define
    enum class Mode : int {
        CompareMode  = 0x0,
        SubtractMode = 0x1,
    };


    int                        mRearAnalogStrength;
    int                        mSideAnalogStrengthRight;
    int                        mSideAnalogStrengthLeft;
    int                        mOldStrength;
    Mode                       mMode;
    int                        mRearStrength;
    int                        mSideStrengths;
    bool                       mHasAnalogBeenSet;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::ComparatorCapacitor;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ComparatorCapacitor@@UEAA@XZ
    virtual ~ComparatorCapacitor() = default;

    // vIndex: 11, symbol:
    // ?addSource@ComparatorCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 14, symbol: ?evaluate@ComparatorCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 15, symbol: ?cacheValues@ComparatorCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 16, symbol: ?updateDependencies@ComparatorCapacitor@@UEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
    virtual void updateDependencies(class CircuitSceneGraph& system, class BlockPos const& pos);

    // vIndex: 23, symbol: ?getCircuitComponentType@ComparatorCapacitor@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0ComparatorCapacitor@@QEAA@XZ
    MCAPI ComparatorCapacitor();

    // symbol: ?clearAnalogStrength@ComparatorCapacitor@@QEAAXE@Z
    MCAPI void clearAnalogStrength(uchar dir);

    // symbol: ?getOldStrength@ComparatorCapacitor@@QEAAHXZ
    MCAPI int getOldStrength();

    // symbol: ?isSubtractMode@ComparatorCapacitor@@QEAA_NXZ
    MCAPI bool isSubtractMode();

    // symbol: ?setAnalogStrength@ComparatorCapacitor@@QEAAXHE@Z
    MCAPI void setAnalogStrength(int strength, uchar dir);

    // symbol: ?setMode@ComparatorCapacitor@@QEAAXW4Mode@1@@Z
    MCAPI void setMode(::ComparatorCapacitor::Mode mode);

    // NOLINTEND
};
