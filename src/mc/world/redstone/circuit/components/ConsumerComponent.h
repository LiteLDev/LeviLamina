#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

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
    // vIndex: 0, symbol: ??1ConsumerComponent@@UEAA@XZ
    virtual ~ConsumerComponent();

    // vIndex: 7, symbol: ?canConsumerPower@ConsumerComponent@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 11, symbol:
    // ?addSource@ConsumerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 12, symbol:
    // ?allowConnection@ConsumerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 14, symbol: ?evaluate@ConsumerComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 21, symbol: ?isSecondaryPowered@ConsumerComponent@@UEBA_NXZ
    virtual bool isSecondaryPowered() const;

    // vIndex: 23, symbol: ?getCircuitComponentType@ConsumerComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0ConsumerComponent@@QEAA@XZ
    MCAPI ConsumerComponent();

    // NOLINTEND
};
