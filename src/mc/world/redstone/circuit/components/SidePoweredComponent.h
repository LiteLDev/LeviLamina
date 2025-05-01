#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
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
    // member functions
    // NOLINTBEGIN
    MCNAPI void _removeSideSource(::BlockPos const& posSource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uchar $getPoweroutDirection() const;

    MCNAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCNAPI bool $canConsumePowerAnyDirection() const;

    MCNAPI bool $canConsumerPower() const;

    MCNAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    MCNAPI void $removeFromAnySourceList(::BaseCircuitComponent const* component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
