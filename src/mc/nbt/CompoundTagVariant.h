#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagVariant {
public:
    // prevent constructor by default
    CompoundTagVariant& operator=(CompoundTagVariant const&);
    CompoundTagVariant(CompoundTagVariant const&);
    CompoundTagVariant();

public:
    // NOLINTBEGIN
    MCAPI class Tag& emplace(class Tag&& tag);

    MCAPI class Tag* get();

    MCAPI class Tag const* get() const;

    MCAPI ~CompoundTagVariant();

    // NOLINTEND
};
