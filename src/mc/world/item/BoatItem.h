#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ResolvedItemIconInfo;
// clang-format on

class BoatItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWoodType;
    // NOLINTEND

public:
    // prevent constructor by default
    BoatItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isLiquidClipItem() const /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual bool isStackedByData() const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& item, ::Actor& spawningActor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual ::ActorType _getActorType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BoatItem(::std::string const& name, int id, int woodType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, int woodType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isLiquidClipItem() const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCFOLD bool $isStackedByData() const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& item, ::Actor& spawningActor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCFOLD ::ActorType $_getActorType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
