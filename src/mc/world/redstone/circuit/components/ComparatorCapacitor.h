#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class ComparatorCapacitor : public ::SidePoweredComponent {
public:
    // ComparatorCapacitor inner types define
    enum class Mode : int {
        CompareMode  = 0,
        SubtractMode = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mRearAnalogStrength;
    ::ll::TypedStorage<4, 4, int>                          mSideAnalogStrengthRight;
    ::ll::TypedStorage<4, 4, int>                          mSideAnalogStrengthLeft;
    ::ll::TypedStorage<4, 4, int>                          mOldStrength;
    ::ll::TypedStorage<4, 4, ::ComparatorCapacitor::Mode>  mMode;
    ::ll::TypedStorage<4, 4, int>                          mRearStrength;
    ::ll::TypedStorage<4, 4, int>                          mSideStrengths;
    ::ll::TypedStorage<1, 1, bool>                         mHasAnalogBeenSet;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;

    // vIndex: 14
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 15
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 16
    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 17
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;

    // vIndex: 24
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;

    // vIndex: 0
    virtual ~ComparatorCapacitor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCNAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);

    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
