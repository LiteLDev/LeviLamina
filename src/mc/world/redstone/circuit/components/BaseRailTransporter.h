#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class BaseRailTransporter : public ::BaseCircuitComponent {
public:
    enum class RailType : int {
        Activator = 0x0,
        Power     = 0x1,
    } mRailType;

    const CircuitComponentType mCircuitComponentType = CircuitComponentType::BaseRailTransporter;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool
    addSource$(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI bool allowConnection$(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, bool&);

    MCAPI bool evaluate$(class CircuitSystem&, class BlockPos const&);

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    // NOLINTEND
};
