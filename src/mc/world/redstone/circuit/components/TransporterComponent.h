#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class TransporterComponent : public ::BaseCircuitComponent {
public:
    int                        mNextStrength;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::TransporterComponent;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransporterComponent() = default;

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

    // vIndex: 15
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI TransporterComponent();

    // NOLINTEND
};
