#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PropertyMetadata {
public:
    // PropertyMetadata inner types define
    enum class ContainedType {};

public:
    // prevent constructor by default
    PropertyMetadata& operator=(PropertyMetadata const&);
    PropertyMetadata(PropertyMetadata const&);
    PropertyMetadata();

public:
    // NOLINTBEGIN
    MCAPI ~PropertyMetadata();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
