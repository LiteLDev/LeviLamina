#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class PulseCapacitor : public ::CapacitorComponent {
public:
    bool                         mPowered;
    bool                         mNewPowered;
    ::CircuitComponentType const mCircuitComponentType = CircuitComponentType::PulseCapacitor;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PulseCapacitor() = default;

    // vIndex: 1
    virtual int getStrength() const;

    // vIndex: 3
    virtual void setStrength(int strength);

    // vIndex: 6
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 7
    virtual bool canConsumerPower() const;

    // vIndex: 12
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 25
    virtual uchar getPoweroutDirection() const;

    MCAPI PulseCapacitor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI bool
    allowConnection$(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool canConsumePowerAnyDirection$() const;

    MCAPI bool canConsumerPower$() const;

    MCAPI bool evaluate$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    MCAPI uchar getPoweroutDirection$() const;

    MCAPI int getStrength$() const;

    MCAPI void setStrength$(int strength);

    // NOLINTEND
};
