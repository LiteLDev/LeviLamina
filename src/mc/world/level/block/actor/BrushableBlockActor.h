#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ExpiringTick;
class HashedString;
class ItemStack;
class Level;
class Player;
class SaveContext;
class WeakEntityRef;
// clang-format on

class BrushableBlockActor : public ::RandomizableBlockActorContainer {
public:
    // BrushableBlockActor inner types define
    enum class BrushingState : int {
        Ongoing   = 0,
        Completed = 1,
    };

    enum class Placement : int {
        DesertWell       = 0,
        DesertPyramid    = 1,
        ColdOceanRuin    = 2,
        WarmOceanRuin    = 3,
        TrailRuinsCommon = 4,
        TrailRuinsRare   = 5,
        Empty            = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mBrushReset;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mBrushCooldown;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                 mDisplayEntity;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>      mItems;
    ::ll::TypedStorage<8, 48, ::HashedString>                  mBlockId;
    ::ll::TypedStorage<4, 4, uint>                             mBrushCount;
    ::ll::TypedStorage<1, 1, uchar>                            mBrushDirection;
    ::ll::TypedStorage<1, 1, bool>                             mLootTableUnpacked;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrushableBlockActor() /*override*/ = default;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BrushableBlockActor(::HashedString const& name, ::BlockPos const& pos, ::BrushableBlockActor::Placement placement);

    MCAPI void _brushingCompleted(::BlockSource& region);

    MCAPI void _removeDisplayEntity(::BlockSource& region);

    MCAPI ::BrushableBlockActor::BrushingState brush(::BlockSource& region, ::BlockPos const& pos, uchar face);

    MCAPI void update(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getLootTableFromVariant(::BrushableBlockActor::Placement state);

    MCAPI static ::BrushableBlockActor* tryGet(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& name, ::BlockPos const& pos, ::BrushableBlockActor::Placement placement);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getMaxStackSize() const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCFOLD void $stopOpen(::Player& player);

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
