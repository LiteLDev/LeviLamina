#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class BaseRailTransporter : public ::BaseCircuitComponent {
public:
    // prevent constructor by default
    BaseRailTransporter& operator=(BaseRailTransporter const&);
    BaseRailTransporter(BaseRailTransporter const&);
    BaseRailTransporter();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseRailTransporter() = default;

    // vIndex: 11
    virtual bool
    addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    // vIndex: 12
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, bool&);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // NOLINTEND
};
