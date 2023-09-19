#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuiltInActorComponents {
public:
    // prevent constructor by default
    BuiltInActorComponents& operator=(BuiltInActorComponents const&);
    BuiltInActorComponents(BuiltInActorComponents const&);
    BuiltInActorComponents();
};
