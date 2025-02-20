#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class WeakEntityRef;
// clang-format on

struct ActorEquippedArmorEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                 mEntity;
    ::ll::TypedStorage<8, 128, ::ItemInstance const>           mArmor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ArmorSlot> mSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEquippedArmorEvent& operator=(ActorEquippedArmorEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorEquippedArmorEvent(::ActorEquippedArmorEvent const&);

    MCAPI ~ActorEquippedArmorEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorEquippedArmorEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
