#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class Container;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ResolvedItemIconInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SnowballItem : public ::ComponentItem {
public:
    // prevent constructor by default
    SnowballItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 87
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 3
    virtual ::SnowballItem& setDescriptionId(::std::string const& descriptionId) /*override*/;

    // vIndex: 77
    virtual ::Actor*
    createProjectileActor(::BlockSource& region, ::ItemStack const&, ::Vec3 const& pos, ::Vec3 const& direction) const
        /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 0
    virtual ~SnowballItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SnowballItem(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCFOLD ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCFOLD ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCFOLD ::SnowballItem& $setDescriptionId(::std::string const& descriptionId);

    MCAPI ::Actor*
    $createProjectileActor(::BlockSource& region, ::ItemStack const&, ::Vec3 const& pos, ::Vec3 const& direction) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
