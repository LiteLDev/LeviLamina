#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimensionFactory {
public:
    // prevent constructor by default
    IDimensionFactory& operator=(IDimensionFactory const&);
    IDimensionFactory(IDimensionFactory const&);
    IDimensionFactory();
};
