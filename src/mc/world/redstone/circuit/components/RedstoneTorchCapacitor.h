#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"

class RedstoneTorchCapacitor : public ::CapacitorComponent {
public:
    // prevent constructor by default
    RedstoneTorchCapacitor& operator=(RedstoneTorchCapacitor const&);
    RedstoneTorchCapacitor(RedstoneTorchCapacitor const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RedstoneTorchCapacitor() = default;

    // vIndex: 1
    virtual int getStrength() const;

    // vIndex: 10
    virtual void removeSource(class BlockPos const& posSource, class BaseCircuitComponent const* pComponent);

    // vIndex: 11
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 12
    virtual bool
    allowConnection(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 15
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 16
    virtual void updateDependencies(class CircuitSceneGraph& system, class BlockPos const& pos);

    // vIndex: 18
    virtual bool isHalfPulse() const;

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 25
    virtual uchar getPoweroutDirection() const;

    MCAPI RedstoneTorchCapacitor();

    MCAPI void resetBurnOutCount();

    MCAPI void setOn(bool bOn);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int _findStrongestStrength(class BlockPos const&, class CircuitSystem&, bool&);

    // NOLINTEND
};
