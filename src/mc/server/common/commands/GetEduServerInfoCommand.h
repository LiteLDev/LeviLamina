#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetEduServerInfoCommand : public ::Command {
public:
    // prevent constructor by default
    GetEduServerInfoCommand& operator=(GetEduServerInfoCommand const&);
    GetEduServerInfoCommand(GetEduServerInfoCommand const&);
    GetEduServerInfoCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GetEduServerInfoCommand@@UEAA@XZ
    virtual ~GetEduServerInfoCommand() = default;

    // vIndex: 2, symbol: ?execute@GetEduServerInfoCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    // symbol: ?setup@GetEduServerInfoCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
