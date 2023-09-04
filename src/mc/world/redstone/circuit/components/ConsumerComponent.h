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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 7, symbol: ?canConsumerPower@ConsumerComponent@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 11, symbol:
    // ?addSource@ConsumerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);

    // vIndex: 12, symbol:
    // ?allowConnection@ConsumerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 14, symbol: ?evaluate@ConsumerComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: ?isSecondaryPowered@ConsumerComponent@@UEBA_NXZ
    virtual bool isSecondaryPowered() const;

    // vIndex: 23, symbol: ?getCircuitComponentType@ConsumerComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??1ConsumerComponent@@UEAA@XZ
    MCVAPI ~ConsumerComponent();

    // symbol: ??0ConsumerComponent@@QEAA@XZ
    MCAPI ConsumerComponent();

    // NOLINTEND
};
