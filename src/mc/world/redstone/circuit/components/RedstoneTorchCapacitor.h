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
        ::ll::UntypedStorage<1, 1> mUnkea9d51;
        ::ll::UntypedStorage<1, 1> mUnk58ecb8;
        ::ll::UntypedStorage<1, 1> mUnk8cada1;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
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
    MCNAPI int _findStrongestStrength(::BlockPos const& targetPos, ::CircuitSystem& bPowerFromSelf, bool&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uchar $getPoweroutDirection() const;

    MCNAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCNAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCNAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    MCNAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI int $getStrength() const;

    MCNAPI bool $isHalfPulse() const;

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;

    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCNAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
