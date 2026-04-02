#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

struct GiveableTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mGiveableItems;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnGive;
    ::ll::TypedStorage<4, 4, float>                            mCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    GiveableTrigger& operator=(GiveableTrigger const&);
    GiveableTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GiveableTrigger(::GiveableTrigger const&);

    MCFOLD void addItem(::ItemDescriptor const& itemDescriptor);

    MCAPI ~GiveableTrigger();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GiveableTrigger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
