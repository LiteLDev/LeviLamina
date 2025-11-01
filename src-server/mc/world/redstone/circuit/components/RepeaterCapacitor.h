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

class RepeaterCapacitor : public ::SidePoweredComponent {
public:
    // RepeaterCapacitor inner types define
    enum class States : int {
        Off = 0,
        On = 1,
        OffLocked = 2,
        OnLocked = 3,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::RepeaterCapacitor::States[5]> mOnStates;
    ::ll::TypedStorage<4, 4, int> mInsertAt;
    ::ll::TypedStorage<1, 1, bool> mPowered;
    ::ll::TypedStorage<1, 1, bool> mNextPower;
    ::ll::TypedStorage<1, 1, bool> mLocked;
    ::ll::TypedStorage<4, 4, int> mPulseCount;
    ::ll::TypedStorage<1, 1, bool> mPulse;
    ::ll::TypedStorage<1, 1, bool> mNextPulse;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual bool addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered) /*override*/;

    // vIndex: 16
    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 13
    virtual void checkLock(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 14
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 15
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    // vIndex: 3
    virtual void setStrength(int strength) /*override*/;

    // vIndex: 1
    virtual int getStrength() const /*override*/;

    // vIndex: 17
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;

    // vIndex: 24
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;

    // vIndex: 0
    virtual ~RepeaterCapacitor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);

    MCAPI void $checkLock(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI void $setStrength(int strength);

    MCAPI int $getStrength() const;

    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
