#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackErrorFactory {
public:
    // prevent constructor by default
    PackErrorFactory& operator=(PackErrorFactory const&);
    PackErrorFactory(PackErrorFactory const&);
    PackErrorFactory();
};
