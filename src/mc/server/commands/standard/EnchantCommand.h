#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class EnchantCommand : public ::Command {
public:
    // prevent constructor by default
    EnchantCommand& operator=(EnchantCommand const&);
    EnchantCommand(EnchantCommand const&);
    EnchantCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnchantCommand@@UEAA@XZ
    virtual ~EnchantCommand() = default;

    // vIndex: 2, symbol: ?execute@EnchantCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@EnchantCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
