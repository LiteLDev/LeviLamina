#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestHelperProvider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_IGAMETESTHELPERPROVIDER
public:
    IGameTestHelperProvider& operator=(IGameTestHelperProvider const&) = delete;
    IGameTestHelperProvider(IGameTestHelperProvider const&)            = delete;
    IGameTestHelperProvider()                                          = delete;
#endif

public:
};

}; // namespace gametest
