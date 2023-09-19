#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class DirectionalProducerComponent : public ::ProducerComponent {
public:
    // prevent constructor by default
    DirectionalProducerComponent& operator=(DirectionalProducerComponent const&);
    DirectionalProducerComponent(DirectionalProducerComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 12, symbol:
    // ?allowConnection@DirectionalProducerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // symbol: ??0DirectionalProducerComponent@@QEAA@XZ
    MCAPI DirectionalProducerComponent();

    // symbol: ?setAllowedConnections@DirectionalProducerComponent@@QEAAXV?$bitset@$05@std@@@Z
    MCAPI void setAllowedConnections(std::bitset<6>);

    // NOLINTEND
};
