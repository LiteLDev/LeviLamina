#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class ProducerComponent : public ::BaseCircuitComponent {
public:
    int                        mNextStrength;
    bool                       mAttachedAllowed;
    bool                       mStopPower;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::ProducerComponent;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProducerComponent() = default;

    // vIndex: 3
    virtual void setStrength(int strength);

    // vIndex: 8
    virtual bool canStopPower() const;

    // vIndex: 9
    virtual void setStopPower(bool bPower);

    // vIndex: 12
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, bool&);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI ProducerComponent();

    MCAPI void allowAttachments(bool bAttached);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI bool allowConnection$(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, bool&);

    MCAPI bool canStopPower$() const;

    MCAPI bool evaluate$(class CircuitSystem&, class BlockPos const&);

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    MCAPI void setStopPower$(bool bPower);

    MCAPI void setStrength$(int strength);

    // NOLINTEND
};
