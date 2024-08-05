#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"

class SidePoweredComponent : public ::CapacitorComponent {
public:
    // prevent constructor by default
    SidePoweredComponent& operator=(SidePoweredComponent const&);
    SidePoweredComponent(SidePoweredComponent const&);
    SidePoweredComponent();

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
};
