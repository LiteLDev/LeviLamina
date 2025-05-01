#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Command;
class CommandOrigin;
class CommandOutput;
// clang-format on

namespace ExecuteCommandHelpers {
// functions
// NOLINTBEGIN
MCNAPI void
handleResult(::Command const& command, ::std::vector<::Actor const*> const& failed, ::CommandOutput& output);

MCNAPI void runCommand(
    ::Command const&               command,
    ::CommandOrigin const&         commandOrigin,
    ::Actor const*                 entity,
    ::std::vector<::Actor const*>& failed,
    ::CommandOutput&               output
);
// NOLINTEND

} // namespace ExecuteCommandHelpers
