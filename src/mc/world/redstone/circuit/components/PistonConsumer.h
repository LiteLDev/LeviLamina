#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ConsumerComponent.h"

// auto generated forward declare list
// clang-format off
class CircuitSceneGraph;
class CircuitTrackingInfo;
// clang-format on

class PistonConsumer : public ::ConsumerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                        mBlockedFace;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PistonConsumer() /*override*/ = default;

    virtual bool canConsumePowerAnyDirection() const /*override*/;

    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;

    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canConsumePowerAnyDirection() const;

    MCFOLD bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI ::CircuitComponentType $getCircuitComponentType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
