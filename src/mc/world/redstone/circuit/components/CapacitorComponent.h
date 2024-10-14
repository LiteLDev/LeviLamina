#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class CapacitorComponent : public ::ProducerComponent {
public:
    // prevent constructor by default
    CapacitorComponent& operator=(CapacitorComponent const&);
    CapacitorComponent(CapacitorComponent const&);

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    MCAPI uchar getPoweroutDirection$() const;

    // NOLINTEND
};
