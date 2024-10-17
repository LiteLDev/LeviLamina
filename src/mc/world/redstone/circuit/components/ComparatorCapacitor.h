#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
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
    // vIndex: 0
    virtual ~ComparatorCapacitor() = default;

    // vIndex: 11
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 15
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 16
    virtual void updateDependencies(class CircuitSceneGraph& system, class BlockPos const& pos);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI ComparatorCapacitor();

    MCAPI void clearAnalogStrength(uchar dir);

    MCAPI int getOldStrength();

    MCAPI bool isSubtractMode();

    MCAPI void setAnalogStrength(int strength, uchar dir);

    MCAPI void setMode(::ComparatorCapacitor::Mode mode);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI bool addSource$(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    MCAPI void cacheValues$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI bool evaluate$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    MCAPI void updateDependencies$(class CircuitSceneGraph& system, class BlockPos const& pos);

    // NOLINTEND
};
