#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class EnchantCommand : public ::Command {
public:
    // prevent constructor by default
    EnchantCommand& operator=(EnchantCommand const&);
    EnchantCommand(EnchantCommand const&);
    EnchantCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
