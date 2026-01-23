#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionIdentifier;
// clang-format on

struct ActorItemTintStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const&> mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorItemTintStrategy& operator=(ActorItemTintStrategy const&);
    ActorItemTintStrategy(ActorItemTintStrategy const&);
    ActorItemTintStrategy();
};
