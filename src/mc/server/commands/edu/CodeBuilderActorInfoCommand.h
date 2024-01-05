#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CodeBuilderActorInfoCommand : public ::Command {
public:
    // prevent constructor by default
    CodeBuilderActorInfoCommand& operator=(CodeBuilderActorInfoCommand const&);
    CodeBuilderActorInfoCommand(CodeBuilderActorInfoCommand const&);
    CodeBuilderActorInfoCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CodeBuilderActorInfoCommand@@UEAA@XZ
    virtual ~CodeBuilderActorInfoCommand() = default;

    // vIndex: 2, symbol: ?execute@CodeBuilderActorInfoCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@CodeBuilderActorInfoCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
