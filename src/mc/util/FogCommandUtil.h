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
MCNAPI bool
pop(::std::string const& userProvidedId,
    ::std::string const& output,
    ::CommandOutput&     target,
    ::Player&            fogCommandComponent,
    ::FogCommandComponent&);

MCNAPI bool push(
    ::std::string const&   fogId,
    ::std::string const&   userProvidedId,
    ::CommandOutput&       output,
    ::Player&              target,
    ::FogCommandComponent& fogCommandComponent
);

MCNAPI bool remove(
    ::std::string const& userProvidedId,
    ::std::string const& output,
    ::CommandOutput&     target,
    ::Player&            fogCommandComponent,
    ::FogCommandComponent&
);
// NOLINTEND

} // namespace FogCommandUtil
