#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"

class SidePoweredComponent : public ::CapacitorComponent {
public:
    CircuitComponentList mSideComponents;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SidePoweredComponent@@UEAA@XZ
    virtual ~SidePoweredComponent();

    // vIndex: 6, symbol: ?canConsumePowerAnyDirection@SidePoweredComponent@@UEBA_NXZ
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 7, symbol: ?canConsumerPower@SidePoweredComponent@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 10, symbol: ?removeSource@SidePoweredComponent@@UEAAXAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
    virtual void removeSource(class BlockPos const& posSource, class BaseCircuitComponent const* pComponent);

    // vIndex: 12, symbol:
    // ?allowConnection@SidePoweredComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, bool&);

    // vIndex: 22, symbol: ?removeFromAnySourceList@SidePoweredComponent@@MEAAXPEBVBaseCircuitComponent@@@Z
    virtual void removeFromAnySourceList(class BaseCircuitComponent const* component);

    // vIndex: 25, symbol: ?getPoweroutDirection@SidePoweredComponent@@UEBAEXZ
    virtual uchar getPoweroutDirection() const;

    // NOLINTEND
};
