#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class CapacitorComponent : public ::ProducerComponent {
public:
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::CapacitorComponent;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CapacitorComponent@@UEAA@XZ
    virtual ~CapacitorComponent() = default;

    // vIndex: 23, symbol: ?getCircuitComponentType@CapacitorComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 25, symbol: ?getPoweroutDirection@CapacitorComponent@@UEBAEXZ
    virtual uchar getPoweroutDirection() const;

    // symbol: ??0CapacitorComponent@@QEAA@XZ
    MCAPI CapacitorComponent();

    // NOLINTEND
};
