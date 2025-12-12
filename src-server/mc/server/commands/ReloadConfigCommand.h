#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
struct ScriptSettings;
// clang-format on

class ReloadConfigCommand : public ::Command {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;

    virtual ~ReloadConfigCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScriptSettings*& sScriptSettings();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
