#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ConsumerComponent.h"

class PistonConsumer : public ::ConsumerComponent {
public:
    // prevent constructor by default
    PistonConsumer& operator=(PistonConsumer const&);
    PistonConsumer(PistonConsumer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PistonConsumer() = default;

    // vIndex: 6
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 11
    virtual bool
    addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    // vIndex: 12
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI PistonConsumer();

    MCAPI void setBlockPowerFace(uchar blockFace);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool
    addSource$(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI bool allowConnection$(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    MCAPI bool canConsumePowerAnyDirection$() const;

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    // NOLINTEND
};
