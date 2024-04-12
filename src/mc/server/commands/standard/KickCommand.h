#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class KickCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    KickCommand& operator=(KickCommand const&);
    KickCommand(KickCommand const&);
    KickCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1KickCommand@@UEAA@XZ
    virtual ~KickCommand() = default;

    // vIndex: 2, symbol: ?execute@KickCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@KickCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canKickPlayerOrGenerateFailureOutput@KickCommand@@AEBA_NAEBVPlayer@@AEAVCommandOutput@@PEAVLevel@@@Z
    MCAPI bool
    _canKickPlayerOrGenerateFailureOutput(class Player const& player, class CommandOutput& output, class Level* level)
        const;

    // symbol:
    // ?_findTarget@KickCommand@@AEBAPEBVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@33@Z
    MCAPI class Player const*
    _findTarget(class CommandOrigin const& origin, class CommandOutput& output, class Level& level, std::string const& message, std::string const& reason, std::string const&)
        const;

    // symbol:
    // ?_generateSuccessOutput@KickCommand@@AEBAXAEAVCommandOutput@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI void _generateSuccessOutput(class CommandOutput& output, std::string const&, std::string const& reason) const;

    // symbol:
    // ?_loopPlayers@KickCommand@@AEBAPEBVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@3V?$function@$$A6A_NPEBVPlayer@@@Z@7@@Z
    MCAPI class Player const* _loopPlayers(
        class CommandOrigin const&,
        class CommandOutput&,
        class Level& level,
        std::string const&,
        std::string const&,
        std::function<bool(class Player const*)> condition
    ) const;

    // symbol:
    // ?_kickPlayer@KickCommand@@CAXPEAVMinecraft@@AEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void
    _kickPlayer(class Minecraft* game, class Player const& matchingPlayer, std::string const& message);

    // NOLINTEND
};
