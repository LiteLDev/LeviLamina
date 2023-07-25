#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEntityInitializer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IENTITYINITIALIZER
public:
    IEntityInitializer& operator=(IEntityInitializer const&) = delete;
    IEntityInitializer(IEntityInitializer const&)            = delete;
    IEntityInitializer()                                     = delete;
#endif

public:
};
