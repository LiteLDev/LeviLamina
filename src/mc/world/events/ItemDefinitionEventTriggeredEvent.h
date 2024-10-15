#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemDefinitionEventTriggeredEvent {
public:
    // prevent constructor by default
    ItemDefinitionEventTriggeredEvent& operator=(ItemDefinitionEventTriggeredEvent const&);
    ItemDefinitionEventTriggeredEvent();

public:
    // NOLINTBEGIN
    MCAPI ItemDefinitionEventTriggeredEvent(struct ItemDefinitionEventTriggeredEvent const&);

    MCAPI ~ItemDefinitionEventTriggeredEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ItemDefinitionEventTriggeredEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
