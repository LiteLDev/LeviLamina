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
    // vIndex: 0, symbol: __gen_??1LessonCommand@@UEAA@XZ
    virtual ~LessonCommand() = default;

    // vIndex: 2, symbol: ?execute@LessonCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@LessonCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
