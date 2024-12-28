#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOutput;
class FogCommandComponent;
class Player;
// clang-format on

namespace FogCommandUtil {
// functions
// NOLINTBEGIN
MCAPI bool
pop(::std::string const&,
    ::std::string const&   userProvidedId,
    ::CommandOutput&       output,
    ::Player&              target,
    ::FogCommandComponent& fogCommandComponent);

MCAPI bool push(
    ::std::string const&   fogId,
    ::std::string const&   userProvidedId,
    ::CommandOutput&       output,
    ::Player&              target,
    ::FogCommandComponent& fogCommandComponent
);

MCAPI bool remove(
    ::std::string const&,
    ::std::string const&   userProvidedId,
    ::CommandOutput&       output,
    ::Player&              target,
    ::FogCommandComponent& fogCommandComponent
);
// NOLINTEND

} // namespace FogCommandUtil
