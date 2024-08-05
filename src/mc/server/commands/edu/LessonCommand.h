#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class LessonCommand : public ::Command {
public:
    // prevent constructor by default
    LessonCommand& operator=(LessonCommand const&);
    LessonCommand(LessonCommand const&);
    LessonCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LessonCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
