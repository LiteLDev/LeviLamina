#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetEduServerInfoCommand : public ::Command {
public:
    // prevent constructor by default
    GetEduServerInfoCommand& operator=(GetEduServerInfoCommand const&) = delete;
    GetEduServerInfoCommand(GetEduServerInfoCommand const&)            = delete;
    GetEduServerInfoCommand()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@GetEduServerInfoCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@GetEduServerInfoCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
