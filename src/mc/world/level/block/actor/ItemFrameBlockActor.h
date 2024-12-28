#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class ItemInstance;
class Level;
class SaveContext;
// clang-format on

class ItemFrameBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnk7bfdd1;
    ::ll::UntypedStorage<8, 32>  mUnk3a63ae;
    ::ll::UntypedStorage<8, 32>  mUnkfc8efe;
    ::ll::UntypedStorage<8, 128> mUnk97e0fc;
    ::ll::UntypedStorage<4, 4>   mUnka12067;
    ::ll::UntypedStorage<4, 4>   mUnk10930e;
    ::ll::UntypedStorage<1, 1>   mUnke8a713;
    ::ll::UntypedStorage<1, 1>   mUnkcb0b81;
    ::ll::UntypedStorage<1, 1>   mUnk4e6f8c;
    ::ll::UntypedStorage<8, 24>  mUnk1b0ba3;
    ::ll::UntypedStorage<1, 1>   mUnk9cbc49;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemFrameBlockActor& operator=(ItemFrameBlockActor const&);
    ItemFrameBlockActor(ItemFrameBlockActor const&);
    ItemFrameBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 19
    virtual float getShadowRadius(::BlockSource&) const /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~ItemFrameBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemFrameBlockActor(::BlockPos pos);

    MCAPI ItemFrameBlockActor(::BlockPos pos, ::BlockActorType type, ::std::string const& id);

    MCAPI void
    _updateBit(::BlockSource& region, ::BlockStateVariant<bool> const& vanillaState, ::HashedString const& itemName);

    MCAPI void actuallyDropItem(::BlockSource& region, bool dropItem, ::Actor* entitySource);

    MCAPI void dropFramedItem(::BlockSource& region, bool dropItem, ::Actor* entitySource);

    MCAPI ::ItemInstance const& getFramedItem() const;

    MCAPI float getRotation();

    MCAPI void rotateFramedItem(::BlockSource& region, ::Actor& entitySource);

    MCAPI void setIgnoreLighting(bool ignoreLighting);

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

    MCAPI void* $ctor(::BlockPos pos, ::BlockActorType type, ::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI float $getShadowRadius(::BlockSource&) const;

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
