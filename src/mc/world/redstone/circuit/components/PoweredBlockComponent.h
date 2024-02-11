#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class PoweredBlockComponent : public ::BaseCircuitComponent {
public:
    bool                       mPromotedToProducer;
    bool                       mAllowAsPowerSource;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::PoweredBlockComponent;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PoweredBlockComponent@@UEAA@XZ
    virtual ~PoweredBlockComponent() = default;

    // vIndex: 1, symbol: ?getStrength@PoweredBlockComponent@@UEBAHXZ
    virtual int getStrength() const;

    // vIndex: 7, symbol: ?canConsumerPower@PoweredBlockComponent@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 11, symbol:
    // ?addSource@PoweredBlockComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 12, symbol:
    // ?allowConnection@PoweredBlockComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 14, symbol: ?evaluate@PoweredBlockComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 20, symbol: ?hasChildrenSource@PoweredBlockComponent@@UEBA_NXZ
    virtual bool hasChildrenSource() const;

    // vIndex: 23, symbol: ?getCircuitComponentType@PoweredBlockComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0PoweredBlockComponent@@QEAA@E@Z
    MCAPI explicit PoweredBlockComponent(uchar connections);

    // NOLINTEND
};
