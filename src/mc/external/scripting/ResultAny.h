#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // prevent constructor by default
    ResultAny& operator=(ResultAny const&);
    ResultAny(ResultAny const&);
    ResultAny();

public:
    // NOLINTBEGIN
    MCAPI ~ResultAny();

    MCAPI static class Scripting::ResultAny makeErrorFromAny(entt::meta_any&&);

    MCAPI static class Scripting::ResultAny makeResultFromAny(entt::meta_any const&);

    // NOLINTEND
};

}; // namespace Scripting
