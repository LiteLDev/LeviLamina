#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FogCommandUtil {
// NOLINTBEGIN
MCAPI bool
pop(std::string const&,
    std::string const&         userProvidedId,
    class CommandOutput&       output,
    class Player&              target,
    class FogCommandComponent& fogCommandComponent);

MCAPI bool push(
    std::string const&         fogId,
    std::string const&         userProvidedId,
    class CommandOutput&       output,
    class Player&              target,
    class FogCommandComponent& fogCommandComponent
);

MCAPI bool remove(
    std::string const&,
    std::string const&         userProvidedId,
    class CommandOutput&       output,
    class Player&              target,
    class FogCommandComponent& fogCommandComponent
);
// NOLINTEND

}; // namespace FogCommandUtil
