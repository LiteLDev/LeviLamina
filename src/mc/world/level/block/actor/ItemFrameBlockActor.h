#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ClockSpriteCalculator.h"
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/states/BlockStateVariant.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class HashedString;
class ILevel;
class SaveContext;
// clang-format on

class ItemFrameBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>   mClockSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<8, 128, ::ItemInstance>           mItem;
    ::ll::TypedStorage<4, 4, float>                      mDropChance;
    ::ll::TypedStorage<4, 4, float>                      mRotation;
    ::ll::TypedStorage<1, 1, bool>                       mUpgradeMapBit;
    ::ll::TypedStorage<1, 1, bool>                       mUpgradePhotoBit;
    ::ll::TypedStorage<1, 1, bool>                       mRefreshMap;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>           mDisplayEntity;
    ::ll::TypedStorage<1, 1, bool>                       mIgnoreLighting;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 20
    virtual float getShadowRadius(::BlockSource&) const /*override*/;

    // vIndex: 9
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 14
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~ItemFrameBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemFrameBlockActor(::BlockPos pos);

    MCAPI ItemFrameBlockActor(::BlockPos pos, ::BlockActorType id, ::std::string const& type);

    MCAPI void _checkMapRemoval(::BlockSource& region, ::ItemInstance& item);

    MCAPI void
    _updateBit(::BlockSource& region, ::BlockStateVariant<bool> const& vanillaState, ::HashedString const& itemName);

    MCAPI void actuallyDropItem(::BlockSource& region, bool dropItem, ::Actor* entitySource);

    MCAPI void dropFramedItem(::BlockSource& region, bool dropItem, ::Actor* entitySource);

    MCAPI void setItem(::BlockSource& region, ::ItemInstance const& item, ::Actor* entitySource);

    MCAPI void updateNameTag();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& ROTATION_DEGREES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos pos);

    MCAPI void* $ctor(::BlockPos pos, ::BlockActorType id, ::std::string const& type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD float $getShadowRadius(::BlockSource&) const;

    MCFOLD void $onChanged(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
