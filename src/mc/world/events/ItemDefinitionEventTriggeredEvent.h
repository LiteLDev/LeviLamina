#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class WeakEntityRef;
// clang-format on

struct ItemDefinitionEventTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<8, 32, ::std::string>   mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDefinitionEventTriggeredEvent& operator=(ItemDefinitionEventTriggeredEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemDefinitionEventTriggeredEvent(::ItemDefinitionEventTriggeredEvent&&);

    MCAPI ItemDefinitionEventTriggeredEvent(::ItemDefinitionEventTriggeredEvent const&);

    MCAPI ~ItemDefinitionEventTriggeredEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemDefinitionEventTriggeredEvent&&);

    MCAPI void* $ctor(::ItemDefinitionEventTriggeredEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
