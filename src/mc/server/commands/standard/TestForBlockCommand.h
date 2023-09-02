#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TestForBlockCommand : public ::Command {
public:
    // prevent constructor by default
    TestForBlockCommand& operator=(TestForBlockCommand const&) = delete;
    TestForBlockCommand(TestForBlockCommand const&)            = delete;
    TestForBlockCommand()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@TestForBlockCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@TestForBlockCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
