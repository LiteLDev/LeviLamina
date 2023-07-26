#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuiltInActorComponents {

public:
    // prevent constructor by default
    BuiltInActorComponents& operator=(BuiltInActorComponents const&) = delete;
    BuiltInActorComponents(BuiltInActorComponents const&)            = delete;
    BuiltInActorComponents()                                         = delete;
};
