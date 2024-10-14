#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class BaseCircuitComponent {
public:
    // prevent constructor by default
    BaseCircuitComponent& operator=(BaseCircuitComponent const&);
    BaseCircuitComponent(BaseCircuitComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseCircuitComponent();

    // vIndex: 1
    virtual int getStrength() const;

    // vIndex: 2
    virtual int getDirection() const;

    // vIndex: 3
    virtual void setStrength(int strength);

    // vIndex: 4
    virtual void setDirection(uchar direction);

    // vIndex: 5
    virtual void setConsumePowerAnyDirection(bool canConsumePowerAnyDirection);

    // vIndex: 6
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 7
    virtual bool canConsumerPower() const;

    // vIndex: 8
    virtual bool canStopPower() const;

    // vIndex: 9
    virtual void setStopPower(bool bPower);

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

    // vIndex: 13
    virtual void checkLock(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 15
    virtual void cacheValues(class CircuitSystem& system, class BlockPos const& pos);

    // vIndex: 16
    virtual void updateDependencies(class CircuitSceneGraph& system, class BlockPos const& pos);

    // vIndex: 17
    virtual bool allowIndirect() const;

    // vIndex: 18
    virtual bool isHalfPulse() const;

    // vIndex: 19
    virtual bool hasSource(class BaseCircuitComponent const& source) const;

    // vIndex: 20
    virtual bool hasChildrenSource() const;

    // vIndex: 21
    virtual bool isSecondaryPowered() const;

    // vIndex: 22
    virtual void removeFromAnySourceList(class BaseCircuitComponent const* component);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 24
    virtual ::CircuitComponentType getCircuitComponentGroupType() const;

    MCAPI BaseCircuitComponent();

    MCAPI void addSourceItem(class CircuitComponentList::Item const& item);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool trackPowerSource(
        class CircuitTrackingInfo const& info,
        int                              dampening,
        bool                             directlyPowered,
        int                              data,
        bool                             isDirectional
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool addSource$(
        class CircuitSceneGraph&         graph,
        class CircuitTrackingInfo const& info,
        int&                             dampening,
        bool&                            bDirectlyPowered
    );

    MCAPI bool
    allowConnection$(class CircuitSceneGraph& graph, class CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool allowIndirect$() const;

    MCAPI void cacheValues$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI bool canConsumePowerAnyDirection$() const;

    MCAPI bool canConsumerPower$() const;

    MCAPI bool canStopPower$() const;

    MCAPI void checkLock$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI bool evaluate$(class CircuitSystem& system, class BlockPos const& pos);

    MCAPI ::CircuitComponentType getCircuitComponentGroupType$() const;

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    MCAPI int getDirection$() const;

    MCAPI int getStrength$() const;

    MCAPI bool hasChildrenSource$() const;

    MCAPI bool hasSource$(class BaseCircuitComponent const& source) const;

    MCAPI bool isHalfPulse$() const;

    MCAPI bool isSecondaryPowered$() const;

    MCAPI void removeFromAnySourceList$(class BaseCircuitComponent const* component);

    MCAPI void removeSource$(class BlockPos const& posSource, class BaseCircuitComponent const* pComponent);

    MCAPI void setConsumePowerAnyDirection$(bool canConsumePowerAnyDirection);

    MCAPI void setDirection$(uchar direction);

    MCAPI void setStopPower$(bool bPower);

    MCAPI void setStrength$(int strength);

    MCAPI void updateDependencies$(class CircuitSceneGraph& system, class BlockPos const& pos);

    // NOLINTEND
};
