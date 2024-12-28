#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class InteractionResult;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class LeashFenceKnotActor;
class Vec3;
namespace mce { class Color; }
// clang-format on

class BalloonItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    BalloonItem& operator=(BalloonItem const&);
    BalloonItem(BalloonItem const&);
    BalloonItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 87
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 66
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const /*override*/;

    // vIndex: 15
    virtual bool isDyeable() const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~BalloonItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BalloonItem(::std::string const& name, int id);

    MCAPI ::LeashFenceKnotActor* _createKnot(::BlockSource& region, ::BlockPos pos, ::ItemInstance const& item) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;

    MCAPI bool $isDyeable() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
