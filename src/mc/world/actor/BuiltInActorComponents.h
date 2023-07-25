#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuiltInActorComponents {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUILTINACTORCOMPONENTS
public:
    BuiltInActorComponents& operator=(BuiltInActorComponents const&) = delete;
    BuiltInActorComponents(BuiltInActorComponents const&)            = delete;
    BuiltInActorComponents()                                         = delete;
#endif

public:
};
