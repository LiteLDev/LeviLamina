#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class TransporterComponent : public ::BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mNextStrength;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 15
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 11
    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;

    // vIndex: 12
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    // vIndex: 7
    virtual bool canConsumerPower() const /*override*/;

    // vIndex: 17
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;

    // vIndex: 14
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 24
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;

    // vIndex: 0
    virtual ~TransporterComponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCNAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCNAPI bool $canConsumerPower() const;

    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCNAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
