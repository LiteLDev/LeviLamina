#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class ProducerComponent : public ::BaseCircuitComponent {
public:
    int                        mNextStrength;
    bool                       mAttachedAllowed;
    bool                       mStopPower;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::ProducerComponent;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ProducerComponent@@UEAA@XZ
    virtual ~ProducerComponent() = default;

    // vIndex: 3, symbol: ?setStrength@ProducerComponent@@UEAAXH@Z
    virtual void setStrength(int);

    // vIndex: 8, symbol: ?canStopPower@ProducerComponent@@UEBA_NXZ
    virtual bool canStopPower() const;

    // vIndex: 9, symbol: ?setStopPower@ProducerComponent@@UEAAX_N@Z
    virtual void setStopPower(bool);

    // vIndex: 12, symbol:
    // ?allowConnection@ProducerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 14, symbol: ?evaluate@ProducerComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?getCircuitComponentType@ProducerComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0ProducerComponent@@QEAA@XZ
    MCAPI ProducerComponent();

    // symbol: ?allowAttachments@ProducerComponent@@QEAAX_N@Z
    MCAPI void allowAttachments(bool);

    // NOLINTEND
};
