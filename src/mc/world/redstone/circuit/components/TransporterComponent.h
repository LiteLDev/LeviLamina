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
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;

    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    virtual bool canConsumerPower() const /*override*/;

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;

    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;

    virtual ~TransporterComponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCFOLD bool $canConsumerPower() const;

    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
