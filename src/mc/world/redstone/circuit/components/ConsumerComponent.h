#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class ConsumerComponent : public ::BaseCircuitComponent {
public:
    // prevent constructor by default
    ConsumerComponent& operator=(ConsumerComponent const&);
    ConsumerComponent(ConsumerComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConsumerComponent();

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

    // vIndex: 21
    virtual bool isSecondaryPowered() const;

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI ConsumerComponent();

    // NOLINTEND
};
