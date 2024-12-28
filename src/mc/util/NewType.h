#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct NewType {
public:
    // prevent constructor by default
    NewType& operator=(NewType const&);
    NewType(NewType const&);
    NewType();
};
