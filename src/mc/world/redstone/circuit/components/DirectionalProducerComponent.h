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
    // vIndex: 0, symbol: __gen_??1DirectionalProducerComponent@@UEAA@XZ
    virtual ~DirectionalProducerComponent() = default;

    // vIndex: 12, symbol:
    // ?allowConnection@DirectionalProducerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // symbol: ??0DirectionalProducerComponent@@QEAA@XZ
    MCAPI DirectionalProducerComponent();

    // symbol: ?setAllowedConnections@DirectionalProducerComponent@@QEAAXV?$bitset@$05@std@@@Z
    MCAPI void setAllowedConnections(std::bitset<6>);

    // NOLINTEND
};
