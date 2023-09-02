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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 7, symbol: ?canConsumerPower@TransporterComponent@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 11, symbol:
    // ?addSource@TransporterComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);

    // vIndex: 12, symbol:
    // ?allowConnection@TransporterComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 14, symbol: ?evaluate@TransporterComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);

    // vIndex: 15, symbol: ?cacheValues@TransporterComponent@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?getCircuitComponentType@TransporterComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0TransporterComponent@@QEAA@XZ
    MCAPI TransporterComponent();

    // NOLINTEND
};
