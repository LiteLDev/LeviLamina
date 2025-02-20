#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/world/events/PlayerArmorExchangeEventTriggeredLocation.h"

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
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ArmorSlot>            mArmorSlot;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mOldItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mItem;
    ::ll::TypedStorage<4, 4, ::PlayerArmorExchangeEventTriggeredLocation> mTriggeredLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerArmorExchangeEvent& operator=(PlayerArmorExchangeEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerArmorExchangeEvent(::PlayerArmorExchangeEvent const&);

    MCAPI ~PlayerArmorExchangeEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerArmorExchangeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
