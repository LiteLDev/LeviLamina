#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class PulseCapacitor : public ::CapacitorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mPowered;
    ::ll::TypedStorage<1, 1, bool>                         mNewPowered;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canConsumePowerAnyDirection() const /*override*/;

    virtual bool canConsumerPower() const /*override*/;

    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    virtual uchar getPoweroutDirection() const /*override*/;

    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    virtual void setStrength(int strength) /*override*/;

    virtual int getStrength() const /*override*/;

    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;

    virtual ~PulseCapacitor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canConsumePowerAnyDirection() const;

    MCFOLD bool $canConsumerPower() const;

    MCFOLD bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCFOLD uchar $getPoweroutDirection() const;

    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI void $setStrength(int strength);

    MCFOLD int $getStrength() const;

    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
