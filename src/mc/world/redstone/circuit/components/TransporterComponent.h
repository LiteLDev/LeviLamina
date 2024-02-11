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
    // vIndex: 0, symbol: __gen_??1TransporterComponent@@UEAA@XZ
    virtual ~TransporterComponent() = default;

    // vIndex: 7, symbol: ?canConsumerPower@TransporterComponent@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 11, symbol:
    // ?addSource@TransporterComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 12, symbol:
    // ?allowConnection@TransporterComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 14, symbol: ?evaluate@TransporterComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 15, symbol: ?cacheValues@TransporterComponent@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 23, symbol: ?getCircuitComponentType@TransporterComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0TransporterComponent@@QEAA@XZ
    MCAPI TransporterComponent();

    // NOLINTEND
};
