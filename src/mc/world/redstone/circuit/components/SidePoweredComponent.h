#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"

class SidePoweredComponent : public ::CapacitorComponent {
public:
    // prevent constructor by default
    SidePoweredComponent& operator=(SidePoweredComponent const&);
    SidePoweredComponent(SidePoweredComponent const&);
    SidePoweredComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?canConsumePowerAnyDirection@SidePoweredComponent@@UEBA_NXZ
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 7, symbol: ?canConsumerPower@SidePoweredComponent@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 10, symbol: ?removeSource@SidePoweredComponent@@UEAAXAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
    virtual void removeSource(class BlockPos const&, class BaseCircuitComponent const*);

    // vIndex: 12, symbol:
    // ?allowConnection@SidePoweredComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 22, symbol: ?removeFromAnySourceList@SidePoweredComponent@@MEAAXPEBVBaseCircuitComponent@@@Z
    virtual void removeFromAnySourceList(class BaseCircuitComponent const*);

    // vIndex: 25, symbol: ?getPoweroutDirection@SidePoweredComponent@@UEBAEXZ
    virtual uchar getPoweroutDirection() const;

    // symbol: ??1SidePoweredComponent@@UEAA@XZ
    MCVAPI ~SidePoweredComponent();

    // symbol:
    // ?addToSideComponents@SidePoweredComponent@@QEAAXAEAV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VItem@CircuitComponentList@@@std@@@std@@@std@@PEAVBaseCircuitComponent@@@Z
    MCAPI void
    addToSideComponents(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<class CircuitComponentList::Item>>>&, class BaseCircuitComponent*);

    // NOLINTEND
};
