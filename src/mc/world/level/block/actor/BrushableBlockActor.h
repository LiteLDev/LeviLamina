#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class Player;
class SaveContext;
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
    // prevent constructor by default
    BrushableBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrushableBlockActor() /*override*/;

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
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 9
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 14
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BrushableBlockActor(::HashedString const& name, ::BlockPos const& pos, ::BrushableBlockActor::Placement placement);

    MCNAPI void _brushingCompleted(::BlockSource& region);

    MCNAPI void _removeDisplayEntity(::BlockSource& region);

    MCNAPI ::BrushableBlockActor::BrushingState brush(::BlockSource& region, ::BlockPos const& pos, uchar face);

    MCNAPI void update(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getLootTableFromVariant(::BrushableBlockActor::Placement state);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const& name, ::BlockPos const& pos, ::BrushableBlockActor::Placement placement);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCNAPI void $stopOpen(::Player& player);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
