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
    virtual ~SidePoweredComponent() /*override*/;

    virtual uchar getPoweroutDirection() const /*override*/;

    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    virtual bool canConsumePowerAnyDirection() const /*override*/;

    virtual bool canConsumerPower() const /*override*/;

    virtual void removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent) /*override*/;

    virtual void removeFromAnySourceList(::BaseCircuitComponent const* component) /*override*/;
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
