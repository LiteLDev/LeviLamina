#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

namespace AgentCommands {

class Destroy : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk117218;
    ::ll::UntypedStorage<4, 4> mUnk8ea344;
    // NOLINTEND

public:
    // prevent constructor by default
    Destroy& operator=(Destroy const&);
    Destroy(Destroy const&);
    Destroy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~Destroy() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
