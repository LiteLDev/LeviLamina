#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class ConsumerComponent : public ::BaseCircuitComponent {
public:
    bool                       mSecondaryPowered;
    bool                       mPropagatePower;
    bool                       mPromotedToProducer;
    bool                       mAcceptHalfPulse;
    bool                       mAcceptSameDirection;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::ConsumerComponent;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

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

    MCAPI bool isSecondaryPowered$() const;

    // NOLINTEND
};
