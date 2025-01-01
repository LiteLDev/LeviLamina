#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class CircuitComponentList;
class CircuitSceneGraph;
class CircuitTrackingInfo;
// clang-format on

class SidePoweredComponent : public ::CapacitorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CircuitComponentList> mSideComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SidePoweredComponent() /*override*/;

    // vIndex: 26
    virtual uchar getPoweroutDirection() const /*override*/;

    // vIndex: 12
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    // vIndex: 6
    virtual bool canConsumePowerAnyDirection() const /*override*/;

    // vIndex: 7
    virtual bool canConsumerPower() const /*override*/;

    // vIndex: 10
    virtual void removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent) /*override*/;

    // vIndex: 23
    virtual void removeFromAnySourceList(::BaseCircuitComponent const* component) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uchar $getPoweroutDirection() const;

    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool $canConsumePowerAnyDirection() const;

    MCAPI bool $canConsumerPower() const;

    MCAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    MCAPI void $removeFromAnySourceList(::BaseCircuitComponent const* component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
