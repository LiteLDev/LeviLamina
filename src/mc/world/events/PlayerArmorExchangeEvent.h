#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/events/PlayerArmorExchangeEventTriggeredLocation.h"
#include "mc/world/item/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ItemStack;
// clang-format on

struct PlayerArmorExchangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                 mPlayer;
    ::ll::TypedStorage<4, 4, ::ArmorSlot>                                 mArmorSlot;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mOldItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mItem;
    ::ll::TypedStorage<4, 4, ::PlayerArmorExchangeEventTriggeredLocation> mTriggeredLocation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerArmorExchangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
