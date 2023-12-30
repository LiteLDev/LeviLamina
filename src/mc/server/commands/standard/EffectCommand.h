#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class EffectCommand : public ::Command {
public:
    // prevent constructor by default
    EffectCommand& operator=(EffectCommand const&);
    EffectCommand(EffectCommand const&);
    EffectCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EffectCommand@@UEAA@XZ
    virtual ~EffectCommand() = default;

    // vIndex: 2, symbol: ?execute@EffectCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@EffectCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?clear@EffectCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void clear(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
