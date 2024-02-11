#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/FacingID.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ConsumerComponent.h"

class PistonConsumer : public ::ConsumerComponent {
public:
    ::FacingID                 mBlockedFace;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::PistonConsumer;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PistonConsumer@@UEAA@XZ
    virtual ~PistonConsumer() = default;

    // vIndex: 6, symbol: ?canConsumePowerAnyDirection@PistonConsumer@@UEBA_NXZ
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 11, symbol: ?addSource@PistonConsumer@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 12, symbol:
    // ?allowConnection@PistonConsumer@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 23, symbol: ?getCircuitComponentType@PistonConsumer@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0PistonConsumer@@QEAA@XZ
    MCAPI PistonConsumer();

    // symbol: ?setBlockPowerFace@PistonConsumer@@QEAAXE@Z
    MCAPI void setBlockPowerFace(uchar blockFace);

    // NOLINTEND
};
