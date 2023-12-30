#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TestForBlockCommand : public ::Command {
public:
    // prevent constructor by default
    TestForBlockCommand& operator=(TestForBlockCommand const&);
    TestForBlockCommand(TestForBlockCommand const&);
    TestForBlockCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TestForBlockCommand@@UEAA@XZ
    virtual ~TestForBlockCommand() = default;

    // vIndex: 2, symbol: ?execute@TestForBlockCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@TestForBlockCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
