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

class BaseRailTransporter : public ::BaseCircuitComponent {
public:
    // BaseRailTransporter inner types define
    enum class RailType : int {
        Activator = 0,
        Power     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const>    mCircuitComponentType;
    ::ll::TypedStorage<4, 4, ::BaseRailTransporter::RailType> mRailType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;

    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;

    virtual ~BaseRailTransporter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
