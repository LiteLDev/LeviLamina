#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class SayCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    SayCommand& operator=(SayCommand const&);
    SayCommand(SayCommand const&);
    SayCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SayCommand@@UEAA@XZ
    virtual ~SayCommand() = default;

    // vIndex: 2, symbol: ?execute@SayCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@SayCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_sendMessage@SayCommand@@CAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBUCommandOriginIdentity@@AEAVLevel@@@Z
    MCAPI static void _sendMessage(
        std::string const&                  message,
        std::string const&                  sender,
        struct CommandOriginIdentity const& identity,
        class Level&                        level
    );

    // symbol:
    // ?_trySendSayCommandEvent@SayCommand@@CA_NAEBVPlayer@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool
    _trySendSayCommandEvent(class Player const& player, class Level& level, std::string const& message);

    // NOLINTEND
};
