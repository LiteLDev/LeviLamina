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

class PoweredBlockComponent : public ::BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mPromotedToProducer;
    ::ll::TypedStorage<1, 1, bool>                         mAllowAsPowerSource;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // prevent constructor by default
    PoweredBlockComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    virtual bool addSource(
        ::CircuitSceneGraph&         info,
        ::CircuitTrackingInfo const& dampening,
        int&                         bDirectlyPowered,
        bool&
    ) /*override*/;

    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;

    virtual bool canConsumerPower() const /*override*/;

    virtual bool hasChildrenSource() const /*override*/;

    virtual int getStrength() const /*override*/;

    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PoweredBlockComponent(uchar connections);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uchar connections);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool
    $addSource(::CircuitSceneGraph& info, ::CircuitTrackingInfo const& dampening, int& bDirectlyPowered, bool&);

    MCFOLD bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCFOLD bool $canConsumerPower() const;

    MCFOLD bool $hasChildrenSource() const;

    MCAPI int $getStrength() const;

    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
