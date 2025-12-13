#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/RefCountedSet.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CircuitComponentList>                         mSources;
    ::ll::TypedStorage<8, 16, ::Core::RefCountedSet<::BaseCircuitComponent*>> mDestinations;
    ::ll::TypedStorage<1, 1, bool>                                            mIgnoreFirstUpdate;
    ::ll::TypedStorage<1, 1, bool>                                            mIsFirstTime;
    ::ll::TypedStorage<1, 1, bool>                                            mNeedsUpdate;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mChunkPosition;
    ::ll::TypedStorage<1, 1, bool>                                            mShouldEvaluate;
    ::ll::TypedStorage<4, 4, int>                                             mStrength;
    ::ll::TypedStorage<1, 1, uchar>                                           mDirection;
    ::ll::TypedStorage<1, 1, bool>                                            mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                                            mAllowPowerDown;
    ::ll::TypedStorage<1, 1, bool>                                            mRemoved;
    ::ll::TypedStorage<1, 1, bool>                                            mConsumePowerAnyDirection;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType>                          mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseCircuitComponent();

    virtual int getStrength() const;

    virtual int getDirection() const;

    virtual void setStrength(int strength);

    virtual void setDirection(uchar direction);

    virtual void setConsumePowerAnyDirection(bool canConsumePowerAnyDirection);

    virtual bool canConsumePowerAnyDirection() const;

    virtual bool canConsumerPower() const;

    virtual bool canStopPower() const;

    virtual void setStopPower(bool bPower);

    virtual void removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    virtual bool
    addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    virtual bool allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    virtual void checkLock(::CircuitSystem& system, ::BlockPos const& pos);

    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual bool allowIndirect() const;

    virtual bool isHalfPulse() const;

    virtual bool hasSource(::BaseCircuitComponent const& source) const;

    virtual bool hasChildrenSource() const;

    virtual bool isSecondaryPowered() const;

    virtual void removeFromAnySourceList(::BaseCircuitComponent const* component);

    virtual ::CircuitComponentType getCircuitComponentType() const;

    virtual ::CircuitComponentType getCircuitComponentGroupType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addSourceItem(::CircuitComponentList::Item const& item);

    MCAPI bool trackPowerSource(
        ::CircuitTrackingInfo const& info,
        int                          dampening,
        bool                         directlyPowered,
        int                          data,
        bool                         isDirectional
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getStrength() const;

    MCFOLD int $getDirection() const;

    MCFOLD void $setStrength(int strength);

    MCAPI void $setDirection(uchar direction);

    MCFOLD void $setConsumePowerAnyDirection(bool canConsumePowerAnyDirection);

    MCFOLD bool $canConsumePowerAnyDirection() const;

    MCFOLD bool $canConsumerPower() const;

    MCFOLD bool $canStopPower() const;

    MCFOLD void $setStopPower(bool bPower);

    MCAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    MCFOLD bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCFOLD bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCFOLD void $checkLock(::CircuitSystem& system, ::BlockPos const& pos);

    MCFOLD bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCFOLD void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCFOLD void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);

    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCFOLD bool $allowIndirect() const;

    MCFOLD bool $isHalfPulse() const;

    MCAPI bool $hasSource(::BaseCircuitComponent const& source) const;

    MCFOLD bool $hasChildrenSource() const;

    MCFOLD bool $isSecondaryPowered() const;

    MCAPI void $removeFromAnySourceList(::BaseCircuitComponent const* component);

    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;

    MCAPI ::CircuitComponentType $getCircuitComponentGroupType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
