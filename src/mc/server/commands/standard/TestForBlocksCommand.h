#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TestForBlocksCommand : public ::Command {
public:
    // prevent constructor by default
    TestForBlocksCommand& operator=(TestForBlocksCommand const&);
    TestForBlocksCommand(TestForBlocksCommand const&);
    TestForBlocksCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TestForBlocksCommand@@UEAA@XZ
    virtual ~TestForBlocksCommand() = default;

    // vIndex: 2, symbol: ?execute@TestForBlocksCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@TestForBlocksCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
