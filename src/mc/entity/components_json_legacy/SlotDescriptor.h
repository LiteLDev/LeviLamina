#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/item/ItemDescriptor.h"

struct SlotDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mSlot;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mAcceptedItems;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                mItemDescriptor;
    ::ll::TypedStorage<8, 32, ::std::string>                   mInteractText;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnEquip;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnUnequip;
    // NOLINTEND

public:
    // prevent constructor by default
    SlotDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SlotDescriptor(::SlotDescriptor&&);

    MCAPI SlotDescriptor(::SlotDescriptor const&);

    MCFOLD void addAcceptedItem(::ItemDescriptor const& itemDescriptor);

    MCAPI ::SlotDescriptor& operator=(::SlotDescriptor const&);

    MCAPI ~SlotDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SlotDescriptor&&);

    MCAPI void* $ctor(::SlotDescriptor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
