#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class RepeaterCapacitor : public ::SidePoweredComponent {
public:
    // prevent constructor by default
    RepeaterCapacitor& operator=(RepeaterCapacitor const&);
    RepeaterCapacitor(RepeaterCapacitor const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RepeaterCapacitor() = default;

    // vIndex: 1
    virtual int getStrength() const;

    // vIndex: 3
    virtual void setStrength(int strength);

    // vIndex: 11
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 13
    virtual void checkLock(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 15
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 16
    virtual void updateDependencies(class CircuitSceneGraph& system, class BlockPos const& pos);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI RepeaterCapacitor();

    MCAPI void setDelay(int delay);

    // NOLINTEND
};
