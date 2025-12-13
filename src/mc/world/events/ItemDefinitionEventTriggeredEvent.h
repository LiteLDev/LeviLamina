#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"

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
    ItemDefinitionEventTriggeredEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemDefinitionEventTriggeredEvent(::ItemDefinitionEventTriggeredEvent&&);

    MCNAPI ItemDefinitionEventTriggeredEvent(::ItemDefinitionEventTriggeredEvent const&);

    MCNAPI ~ItemDefinitionEventTriggeredEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemDefinitionEventTriggeredEvent&&);

    MCNAPI void* $ctor(::ItemDefinitionEventTriggeredEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
