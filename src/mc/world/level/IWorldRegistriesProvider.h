#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IWorldRegistriesProvider {
public:
    // prevent constructor by default
    IWorldRegistriesProvider& operator=(IWorldRegistriesProvider const&);
    IWorldRegistriesProvider(IWorldRegistriesProvider const&);
    IWorldRegistriesProvider();
};
