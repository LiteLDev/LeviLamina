#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitherSkullFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERSKULLFLAG
public:
    WitherSkullFlag& operator=(WitherSkullFlag const&) = delete;
    WitherSkullFlag(WitherSkullFlag const&)            = delete;
    WitherSkullFlag()                                  = delete;
#endif

public:
};
