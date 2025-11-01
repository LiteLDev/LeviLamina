#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class ConsumerComponent : public ::BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mSecondaryPowered;
    ::ll::TypedStorage<1, 1, bool> mPropagatePower;
    ::ll::TypedStorage<1, 1, bool> mPromotedToProducer;
    ::ll::TypedStorage<1, 1, bool> mAcceptHalfPulse;
    ::ll::TypedStorage<1, 1, bool> mAcceptSameDirection;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 14
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 12
    virtual bool allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    // vIndex: 11
    virtual bool addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered) /*override*/;

    // vIndex: 7
    virtual bool canConsumerPower() const /*override*/;

    // vIndex: 22
    virtual bool isSecondaryPowered() const /*override*/;

    // vIndex: 24
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;

    // vIndex: 0
    virtual ~ConsumerComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConsumerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCFOLD bool $canConsumerPower() const;

    MCAPI bool $isSecondaryPowered() const;

    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
