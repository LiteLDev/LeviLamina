#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class PoweredBlockComponent : public ::BaseCircuitComponent {
public:
    // prevent constructor by default
    PoweredBlockComponent& operator=(PoweredBlockComponent const&);
    PoweredBlockComponent(PoweredBlockComponent const&);
    PoweredBlockComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PoweredBlockComponent() = default;

    // vIndex: 1
    virtual int getStrength() const;

    // vIndex: 7
    virtual bool canConsumerPower() const;

    // vIndex: 11
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 12
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 20
    virtual bool hasChildrenSource() const;

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI explicit PoweredBlockComponent(uchar connections);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(uchar connections);

    MCAPI bool addSource$(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    MCAPI bool
    allowConnection$(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool canConsumerPower$() const;

    MCAPI bool evaluate$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    MCAPI int getStrength$() const;

    MCAPI bool hasChildrenSource$() const;

    // NOLINTEND
};
