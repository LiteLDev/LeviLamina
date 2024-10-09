#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class CapacitorComponent : public ::ProducerComponent {
public:
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::CapacitorComponent;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CapacitorComponent() = default;

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 25
    virtual uchar getPoweroutDirection() const;

    MCAPI CapacitorComponent();

    // NOLINTEND
};
