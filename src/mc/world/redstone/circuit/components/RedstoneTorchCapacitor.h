#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"

class RedstoneTorchCapacitor : public ::CapacitorComponent {
public:
    class State {
        bool mOn;
        bool mHalfFrame;
        bool mChanged;
    };
    RedstoneTorchCapacitor*    mNextOrder;
    int                        mSelfPowerCount;
    State                      mState[2];
    bool                       mCanReigniteFromBurnout;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::RedstoneTorchCapacitor;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RedstoneTorchCapacitor() = default;

    // vIndex: 1, symbol: ?getStrength@RedstoneTorchCapacitor@@UEBAHXZ
    virtual int getStrength() const;

    // vIndex: 10, symbol: ?removeSource@RedstoneTorchCapacitor@@UEAAXAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
    virtual void removeSource(class BlockPos const&, class BaseCircuitComponent const*);

    // vIndex: 11, symbol:
    // ?addSource@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);

    // vIndex: 12, symbol:
    // ?allowConnection@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 14, symbol: ?evaluate@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);

    // vIndex: 15, symbol: ?cacheValues@RedstoneTorchCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);

    // vIndex: 16, symbol: ?updateDependencies@RedstoneTorchCapacitor@@EEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: ?isHalfPulse@RedstoneTorchCapacitor@@UEBA_NXZ
    virtual bool isHalfPulse() const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?getCircuitComponentType@RedstoneTorchCapacitor@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 25, symbol: ?getPoweroutDirection@RedstoneTorchCapacitor@@UEBAEXZ
    virtual uchar getPoweroutDirection() const;

    // symbol: ??0RedstoneTorchCapacitor@@QEAA@XZ
    MCAPI RedstoneTorchCapacitor();

    // symbol: ?resetBurnOutCount@RedstoneTorchCapacitor@@QEAAXXZ
    MCAPI void resetBurnOutCount();

    // symbol: ?setOn@RedstoneTorchCapacitor@@QEAAX_N@Z
    MCAPI void setOn(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findStrongestStrength@RedstoneTorchCapacitor@@AEAAHAEBVBlockPos@@AEAVCircuitSystem@@AEA_N@Z
    MCAPI int _findStrongestStrength(class BlockPos const&, class CircuitSystem&, bool&);

    // NOLINTEND
};
