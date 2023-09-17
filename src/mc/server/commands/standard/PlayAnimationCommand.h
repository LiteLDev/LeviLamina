#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangVersion.h"
#include "mc/world/level/Command.h"

class PlayAnimationCommand : public ::Command {
public:
    // prevent constructor by default
    PlayAnimationCommand& operator=(PlayAnimationCommand const&) = delete;
    PlayAnimationCommand(PlayAnimationCommand const&)            = delete;
    PlayAnimationCommand()                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@PlayAnimationCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ??1PlayAnimationCommand@@UEAA@XZ
    MCVAPI ~PlayAnimationCommand();

    // symbol: ?setup@PlayAnimationCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mStopExpressionVersion@PlayAnimationCommand@@0W4MolangVersion@@B
    MCAPI static ::MolangVersion const mStopExpressionVersion;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mStopExpressionVersion() { return mStopExpressionVersion; }

    // NOLINTEND
};
