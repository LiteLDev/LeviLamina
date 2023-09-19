#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct IDType {
public:
    // prevent constructor by default
    IDType& operator=(IDType const&);
    IDType(IDType const&);
    IDType();
};
