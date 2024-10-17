#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TagUpdateToken {
public:
    // prevent constructor by default
    TagUpdateToken& operator=(TagUpdateToken const&);
    TagUpdateToken(TagUpdateToken const&);
    TagUpdateToken();

public:
    // NOLINTBEGIN
    MCAPI explicit TagUpdateToken(std::weak_ptr<std::atomic<int>>);

    MCAPI ~TagUpdateToken();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::weak_ptr<std::atomic<int>>);

    MCAPI void dtor$();

    // NOLINTEND
};
