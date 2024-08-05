#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/FacingID.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ConsumerComponent.h"

class PistonConsumer : public ::ConsumerComponent {
public:
    ::FacingID                 mBlockedFace;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::PistonConsumer;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PistonConsumer() = default;

    // vIndex: 6
    virtual bool canConsumePowerAnyDirection() const;

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

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI PistonConsumer();

    MCAPI void setBlockPowerFace(uchar blockFace);

    // NOLINTEND
};
