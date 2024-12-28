#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/BoatItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
// clang-format on

class ChestBoatItem : public ::BoatItem {
public:
    // prevent constructor by default
    ChestBoatItem& operator=(ChestBoatItem const&);
    ChestBoatItem(ChestBoatItem const&);
    ChestBoatItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 87
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 121
    virtual ::ActorType _getActorType() const /*override*/;

    // vIndex: 0
    virtual ~ChestBoatItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChestBoatItem(::std::string const& name, int id, int woodType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, int woodType);
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

    MCAPI ::ActorType $_getActorType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
