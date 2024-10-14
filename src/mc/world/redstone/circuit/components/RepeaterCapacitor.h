#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class RepeaterCapacitor : public ::SidePoweredComponent {
public:
    enum class States : int {
        Off       = 0x0,
        On        = 0x1,
        OffLocked = 0x2,
        Onlocked  = 0x3,
    };
    States                     mOnStates[5];
    int                        mInsertAt;
    bool                       mPowered;
    bool                       mNextPower;
    bool                       mLocked;
    int                        mPulseCount;
    bool                       mPulse;
    bool                       mNextPulse;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::RepeaterCapacitor;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RepeaterCapacitor() = default;

    // vIndex: 1
    virtual int getStrength() const;

    // vIndex: 3
    virtual void setStrength(int strength);

    // vIndex: 11
    virtual bool addSource(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    // vIndex: 13
    virtual void checkLock(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 15
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 16
    virtual void updateDependencies(class CircuitSceneGraph& system, class BlockPos const& pos);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI RepeaterCapacitor();

    MCAPI void setDelay(int delay);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool addSource$(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    MCAPI void cacheValues$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI void checkLock$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI bool evaluate$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    MCAPI int getStrength$() const;

    MCAPI void setStrength$(int strength);

    MCAPI void updateDependencies$(class CircuitSceneGraph& system, class BlockPos const& pos);

    // NOLINTEND
};
