#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/RefCountedSet.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitComponentList;
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
    // prevent constructor by default
    BaseCircuitComponent& operator=(BaseCircuitComponent const&);
    BaseCircuitComponent(BaseCircuitComponent const&);

public:
    // virtual functions
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
    virtual void removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    // vIndex: 11
    virtual bool
    addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    // vIndex: 12
    virtual bool allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    // vIndex: 13
    virtual void checkLock(::CircuitSystem& system, ::BlockPos const& pos);

    // vIndex: 14
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    // vIndex: 15
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    // vIndex: 16
    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);

    // vIndex: 17
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    // vIndex: 18
    virtual bool allowIndirect() const;

    // vIndex: 19
    virtual bool isHalfPulse() const;

    // vIndex: 20
    virtual bool hasSource(::BaseCircuitComponent const& source) const;

    // vIndex: 21
    virtual bool hasChildrenSource() const;

    // vIndex: 22
    virtual bool isSecondaryPowered() const;

    // vIndex: 23
    virtual void removeFromAnySourceList(::BaseCircuitComponent const* component);

    // vIndex: 24
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 25
    virtual ::CircuitComponentType getCircuitComponentGroupType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseCircuitComponent();

    MCAPI void addSourceItem(::CircuitComponentList::Item const& item);

    MCAPI bool hasDirectPower();

    MCAPI bool isRemoved() const;

    MCAPI ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::CircuitComponentList::Item>>>
    removeFromSourceAndDestinationList(
        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::CircuitComponentList::Item>>> iter
    );

    MCAPI void setRemoved();

    MCAPI bool trackPowerSource(
        ::CircuitTrackingInfo const& info,
        int                          dampening,
        bool                         directlyPowered,
        int                          data,
        bool                         isDirectional
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getStrength() const;

    MCAPI int $getDirection() const;

    MCAPI void $setStrength(int strength);

    MCAPI void $setDirection(uchar direction);

    MCAPI void $setConsumePowerAnyDirection(bool canConsumePowerAnyDirection);

    MCAPI bool $canConsumePowerAnyDirection() const;

    MCAPI bool $canConsumerPower() const;

    MCAPI bool $canStopPower() const;

    MCAPI void $setStopPower(bool bPower);

    MCAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI void $checkLock(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);

    MCAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCAPI bool $allowIndirect() const;

    MCAPI bool $isHalfPulse() const;

    MCAPI bool $hasSource(::BaseCircuitComponent const& source) const;

    MCAPI bool $hasChildrenSource() const;

    MCAPI bool $isSecondaryPowered() const;

    MCAPI void $removeFromAnySourceList(::BaseCircuitComponent const* component);

    MCAPI ::CircuitComponentType $getCircuitComponentType() const;

    MCAPI ::CircuitComponentType $getCircuitComponentGroupType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
