#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class RedstoneTorchCapacitor : public ::CapacitorComponent {
public:
    // RedstoneTorchCapacitor inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // RedstoneTorchCapacitor inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mOn;
        ::ll::TypedStorage<1, 1, bool> mHalfFrame;
        ::ll::TypedStorage<1, 1, bool> mChanged;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RedstoneTorchCapacitor*>          mNextOrder;
    ::ll::TypedStorage<4, 4, int>                                mSelfPowerCount;
    ::ll::TypedStorage<1, 6, ::RedstoneTorchCapacitor::State[2]> mState;
    ::ll::TypedStorage<1, 1, bool>                               mCanReigniteFromBurnout;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const>       mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RedstoneTorchCapacitor() /*override*/ = default;

    // vIndex: 26
    virtual uchar getPoweroutDirection() const /*override*/;

    // vIndex: 12
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    // vIndex: 11
    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;

    // vIndex: 10
    virtual void removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent) /*override*/;

    // vIndex: 14
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 15
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 1
    virtual int getStrength() const /*override*/;

    // vIndex: 19
    virtual bool isHalfPulse() const /*override*/;

    // vIndex: 24
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;

    // vIndex: 17
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;

    // vIndex: 16
    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _findStrongestStrength(::BlockPos const& targetPos, ::CircuitSystem&, bool& bPowerFromSelf);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uchar $getPoweroutDirection() const;

    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI int $getStrength() const;

    MCAPI bool $isHalfPulse() const;

    MCAPI ::CircuitComponentType $getCircuitComponentType() const;

    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
