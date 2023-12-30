#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class QueryTargetCommand : public ::Command {
public:
    // prevent constructor by default
    QueryTargetCommand& operator=(QueryTargetCommand const&);
    QueryTargetCommand(QueryTargetCommand const&);
    QueryTargetCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1QueryTargetCommand@@UEAA@XZ
    virtual ~QueryTargetCommand() = default;

    // vIndex: 2, symbol: ?execute@QueryTargetCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@QueryTargetCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
