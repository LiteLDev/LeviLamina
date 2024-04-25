#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangVersion.h"
#include "mc/world/level/Command.h"

class PlayAnimationCommand : public ::Command {
public:
    // prevent constructor by default
    PlayAnimationCommand& operator=(PlayAnimationCommand const&);
    PlayAnimationCommand(PlayAnimationCommand const&);
    PlayAnimationCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayAnimationCommand@@UEAA@XZ
    virtual ~PlayAnimationCommand();

    // vIndex: 2, symbol: ?execute@PlayAnimationCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@PlayAnimationCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mStopExpressionVersion@PlayAnimationCommand@@0W4MolangVersion@@B
    MCAPI static ::MolangVersion const mStopExpressionVersion;

    // NOLINTEND
};
