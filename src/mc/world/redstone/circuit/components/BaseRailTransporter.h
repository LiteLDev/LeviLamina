#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class BaseRailTransporter : public ::BaseCircuitComponent {
public:
    enum class RailType {
        Activator = 0x0,
        Power     = 0x1,
    } mRailType;

    const CircuitComponentType mCircuitComponentType = CircuitComponentType::BaseRailTransporter;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BaseRailTransporter@@UEAA@XZ
    virtual ~BaseRailTransporter() = default;

    // vIndex: 11, symbol:
    // ?addSource@BaseRailTransporter@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 12, symbol:
    // ?allowConnection@BaseRailTransporter@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 14, symbol: ?evaluate@BaseRailTransporter@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?getCircuitComponentType@BaseRailTransporter@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // NOLINTEND
};
