#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorChangeContext.h"
#include "mc/world/level/block/EnvironmentChangeContext.h"
#include "mc/world/level/block/ScriptOrCommandChangeContext.h"

class BlockChangeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::
            variant<::std::monostate, ::EnvironmentChangeContext, ::ActorChangeContext, ::ScriptOrCommandChangeContext>>
        mContextSource;
    // NOLINTEND
};
