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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
