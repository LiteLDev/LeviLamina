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
    ::ll::TypedStorage<2, 2, short>                                           mStrength;
    ::ll::TypedStorage<2, 2, short>                                           mOldStrength;
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

    virtual void setOldStrength(short strength);

    virtual void setStrength(int strength);

    virtual void setDirection(uchar direction);

    virtual void setConsumePowerAnyDirection(bool canConsumePowerAnyDirection);

    virtual bool canConsumePowerAnyDirection() const;

    virtual bool canConsumerPower() const;

    virtual bool canStopPower() const;

    virtual void setStopPower(bool bPower);

    virtual bool needsUpdate();

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
#ifdef LL_PLAT_C
    MCNAPI BaseCircuitComponent();
#endif

    MCNAPI void addSourceItem(::CircuitComponentList::Item const& item);

    MCNAPI bool trackPowerSource(
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
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getStrength() const;

    MCNAPI int $getDirection() const;

    MCNAPI void $setOldStrength(short strength);

    MCNAPI void $setStrength(int strength);

    MCNAPI void $setDirection(uchar direction);

    MCNAPI void $setConsumePowerAnyDirection(bool canConsumePowerAnyDirection);

    MCNAPI bool $canConsumePowerAnyDirection() const;

    MCNAPI bool $canConsumerPower() const;

    MCNAPI bool $canStopPower() const;

    MCNAPI void $setStopPower(bool bPower);

    MCNAPI bool $needsUpdate();

    MCNAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);

    MCNAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCNAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCNAPI void $checkLock(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);

    MCNAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);

    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCNAPI bool $allowIndirect() const;

    MCNAPI bool $isHalfPulse() const;

    MCNAPI bool $hasSource(::BaseCircuitComponent const& source) const;

    MCNAPI bool $hasChildrenSource() const;

    MCNAPI bool $isSecondaryPowered() const;

    MCNAPI void $removeFromAnySourceList(::BaseCircuitComponent const* component);

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;

    MCNAPI ::CircuitComponentType $getCircuitComponentGroupType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
