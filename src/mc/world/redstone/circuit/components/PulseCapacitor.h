#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"

class PulseCapacitor : public ::CapacitorComponent {
public:
    bool                         mPowered;
    bool                         mNewPowered;
    ::CircuitComponentType const mCircuitComponentType = CircuitComponentType::PulseCapacitor;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PulseCapacitor@@UEAA@XZ
    virtual ~PulseCapacitor() = default;

    // vIndex: 1, symbol: ?getStrength@PulseCapacitor@@UEBAHXZ
    virtual int getStrength() const;

    // vIndex: 3, symbol: ?setStrength@PulseCapacitor@@UEAAXH@Z
    virtual void setStrength(int strength);

    // vIndex: 6, symbol: ?canConsumePowerAnyDirection@PulseCapacitor@@UEBA_NXZ
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 7, symbol: ?canConsumerPower@PulseCapacitor@@UEBA_NXZ
    virtual bool canConsumerPower() const;

    // vIndex: 12, symbol:
    // ?allowConnection@PulseCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 14, symbol: ?evaluate@PulseCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 23, symbol: ?getCircuitComponentType@PulseCapacitor@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 25, symbol: ?getPoweroutDirection@PulseCapacitor@@UEBAEXZ
    virtual uchar getPoweroutDirection() const;

    // symbol: ??0PulseCapacitor@@QEAA@XZ
    MCAPI PulseCapacitor();

    // NOLINTEND
};
