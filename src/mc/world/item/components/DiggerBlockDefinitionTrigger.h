#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/BlockDescriptor.h"

struct DiggerBlockDefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>  filter;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> onDig;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DiggerBlockDefinitionTrigger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
