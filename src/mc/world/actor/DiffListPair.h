#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiffListPair {
public:
    // prevent constructor by default
    DiffListPair& operator=(DiffListPair const&);
    DiffListPair(DiffListPair const&);
    DiffListPair();

public:
    // NOLINTBEGIN
    MCAPI DiffListPair(bool addIfTrue_SubtractIfFalse, class ActorDefinitionDescriptor* descriptor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(bool addIfTrue_SubtractIfFalse, class ActorDefinitionDescriptor* descriptor);

    // NOLINTEND
};
