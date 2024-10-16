#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
namespace Util { struct ReplacementResults; }
// clang-format on

class ReplaceItemCommand : public ::Command {
public:
    // prevent constructor by default
    ReplaceItemCommand& operator=(ReplaceItemCommand const&);
    ReplaceItemCommand(ReplaceItemCommand const&);
    ReplaceItemCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReplaceItemCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _outputError(class CommandOutput& output, struct Util::ReplacementResults errorDetails, std::string const& itemName)
        const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
