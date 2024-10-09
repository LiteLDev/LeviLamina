#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class TakePictureCommand : public ::Command {
public:
    // prevent constructor by default
    TakePictureCommand& operator=(TakePictureCommand const&);
    TakePictureCommand(TakePictureCommand const&);
    TakePictureCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TakePictureCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
