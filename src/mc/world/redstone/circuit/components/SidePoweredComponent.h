#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class SidePoweredComponent : public ::CapacitorComponent {
public:
    CircuitComponentList mSideComponents;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SidePoweredComponent();

    // vIndex: 6
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 7
    virtual bool canConsumerPower() const;

    // vIndex: 10
    virtual void removeSource(class BlockPos const& posSource, class BaseCircuitComponent const* pComponent);

    // vIndex: 12
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, bool&);

    // vIndex: 22
    virtual void removeFromAnySourceList(class BaseCircuitComponent const* component);

    // vIndex: 25
    virtual uchar getPoweroutDirection() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool allowConnection$(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, bool&);

    MCAPI bool canConsumePowerAnyDirection$() const;

    MCAPI bool canConsumerPower$() const;

    MCAPI uchar getPoweroutDirection$() const;

    MCAPI void removeFromAnySourceList$(class BaseCircuitComponent const* component);

    MCAPI void removeSource$(class BlockPos const& posSource, class BaseCircuitComponent const* pComponent);

    // NOLINTEND
};
