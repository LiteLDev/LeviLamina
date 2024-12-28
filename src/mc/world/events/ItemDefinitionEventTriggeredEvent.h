#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemDefinitionEventTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnka7ca05;
    ::ll::UntypedStorage<8, 24>  mUnkf4dfd1;
    ::ll::UntypedStorage<8, 32>  mUnkcee133;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDefinitionEventTriggeredEvent& operator=(ItemDefinitionEventTriggeredEvent const&);
    ItemDefinitionEventTriggeredEvent(ItemDefinitionEventTriggeredEvent const&);
    ItemDefinitionEventTriggeredEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemDefinitionEventTriggeredEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
