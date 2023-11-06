#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class PoweredBlockComponent : public ::BaseCircuitComponent {
public:
    // prevent constructor by default
    PoweredBlockComponent& operator=(PoweredBlockComponent const&);
    PoweredBlockComponent(PoweredBlockComponent const&);
    PoweredBlockComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PoweredBlockComponent();

    // vIndex: 1, symbol: ?getStrength@PoweredBlockComponent@@UEBAHXZ
    virtual int getStrength() const;

    // vIndex: 7, symbol: ?canConsumerPower@PoweredBlockComponent@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 11, symbol:
    // ?addSource@PoweredBlockComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);

    // vIndex: 12, symbol:
    // ?allowConnection@PoweredBlockComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 14, symbol: ?evaluate@PoweredBlockComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?getCircuitComponentType@PoweredBlockComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ?hasChildrenSource@PoweredBlockComponent@@UEBA_NXZ
    MCVAPI bool hasChildrenSource() const;

    // symbol: ??0PoweredBlockComponent@@QEAA@E@Z
    MCAPI explicit PoweredBlockComponent(uchar);

    // NOLINTEND
};
