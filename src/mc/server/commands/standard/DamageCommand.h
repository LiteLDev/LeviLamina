#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/level/Command.h"

class DamageCommand : public ::Command {
public:
    // prevent constructor by default
    DamageCommand& operator=(DamageCommand const&);
    DamageCommand(DamageCommand const&);
    DamageCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DamageCommand@@UEAA@XZ
    virtual ~DamageCommand() = default;

    // vIndex: 2, symbol: ?execute@DamageCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@DamageCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_applyDamage@DamageCommand@@AEBAXAEAV?$CommandSelectorResults@VActor@@@@AEBVActorDamageSource@@AEAVCommandOutput@@@Z
    MCAPI void _applyDamage(
        class CommandSelectorResults<class Actor>& targets,
        class ActorDamageSource const&             source,
        class CommandOutput&                       output
    ) const;

    // NOLINTEND
};
