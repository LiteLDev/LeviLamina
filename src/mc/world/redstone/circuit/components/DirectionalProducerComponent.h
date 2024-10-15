#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class DirectionalProducerComponent : public ::ProducerComponent {
public:
    // prevent constructor by default
    DirectionalProducerComponent& operator=(DirectionalProducerComponent const&);
    DirectionalProducerComponent(DirectionalProducerComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DirectionalProducerComponent() = default;

    // vIndex: 12
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI DirectionalProducerComponent();

    MCAPI void setAllowedConnections(std::bitset<6> allowedConnections);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI bool
    allowConnection$(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // NOLINTEND
};
