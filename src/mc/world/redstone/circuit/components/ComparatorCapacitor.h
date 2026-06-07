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
    ::ll::TypedStorage<4, 4, ::ComparatorCapacitor::Mode>  mMode;
    ::ll::TypedStorage<4, 4, int>                          mRearStrength;
    ::ll::TypedStorage<4, 4, int>                          mSideStrengths;
    ::ll::TypedStorage<1, 1, bool>                         mHasAnalogBeenSet;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool addSource(
        ::CircuitSceneGraph&         info,
        ::CircuitTrackingInfo const& dampening,
        int&                         bDirectlyPowered,
        bool&
    ) /*override*/;

    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos) /*override*/;

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;

    virtual void setOldStrength(short strength) /*override*/;

    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComparatorCapacitor();

    MCAPI void clearAnalogStrength(uchar dir);

    MCAPI bool isSubtractMode();

    MCAPI void setAnalogStrength(int strength, uchar dir);

    MCFOLD void setMode(::ComparatorCapacitor::Mode mode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $addSource(::CircuitSceneGraph& info, ::CircuitTrackingInfo const& dampening, int& bDirectlyPowered, bool&);

    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);

    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCFOLD void $setOldStrength(short strength);

    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
