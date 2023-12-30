#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TestForCommand : public ::Command {
public:
    // prevent constructor by default
    TestForCommand& operator=(TestForCommand const&);
    TestForCommand(TestForCommand const&);
    TestForCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TestForCommand@@UEAA@XZ
    virtual ~TestForCommand() = default;

    // vIndex: 2, symbol: ?execute@TestForCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@TestForCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
