#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class AllowListCommand : public ::Command {
public:
    // prevent constructor by default
    AllowListCommand& operator=(AllowListCommand const&);
    AllowListCommand(AllowListCommand const&);
    AllowListCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AllowListCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, class AllowListFile& allowListFile);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class AllowListFile* mAllowListFile;

    // NOLINTEND
};
