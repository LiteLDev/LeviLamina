#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
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
    virtual ~BrushableBlockActor() /*override*/ = default;

    virtual void serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>) /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual ::ItemStack const& getItem(int) const /*override*/;

    virtual void setItem(int, ::ItemStack const&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void onChanged(::BlockSource&) /*override*/;

    virtual void onRemoved(::BlockSource&) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BrushableBlockActor(::HashedString const& name, ::BlockPos const& pos, ::BrushableBlockActor::Placement placement);

    MCAPI void _brushingCompleted(::BlockSource& region);

    MCAPI void _removeDisplayEntity(::BlockSource& region);

    MCAPI ::BrushableBlockActor::BrushingState brush(::BlockSource& region, ::BlockPos const& pos, uchar face);

#ifdef LL_PLAT_C
    MCAPI ::Actor* tryGetOrCreateDisplayEntity(::BlockSource& region);
#endif

    MCAPI void update(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getLootTableFromVariant(::BrushableBlockActor::Placement state);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& name, ::BlockPos const& pos, ::BrushableBlockActor::Placement placement);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
