#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextFilteringEvent.h"
#include "mc/server/commands/ServerCommand.h"

class MessagingCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    MessagingCommand& operator=(MessagingCommand const&);
    MessagingCommand(MessagingCommand const&);
    MessagingCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?collectOptionalArguments@Command@@MEAA_NXZ
    virtual bool collectOptionalArguments();

    // vIndex: 2, symbol: ?execute@TakePictureCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const = 0;

    // symbol: ??1MessagingCommand@@UEAA@XZ
    MCVAPI ~MessagingCommand();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0MessagingCommand@@IEAA@_N0@Z
    MCAPI MessagingCommand(bool, bool);

    // symbol: ?checkChatPermissions@MessagingCommand@@IEBA_NAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI bool checkChatPermissions(class CommandOrigin const&, class CommandOutput&) const;

    // symbol:
    // ?checkMutedAndSendToastIfMuted@MessagingCommand@@KAXAEBUCommandOriginIdentity@@AEBVLevel@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@std@@@Z
    MCAPI static void
    checkMutedAndSendToastIfMuted(struct CommandOriginIdentity const&, class Level const&, std::vector<::Safety::TextFilteringEvent> const&);

    // symbol:
    // ?checkMutedAndSendToastIfMuted@MessagingCommand@@KAXAEBVPlayer@@AEBV?$vector@W4TextFilteringEvent@Safety@@V?$allocator@W4TextFilteringEvent@Safety@@@std@@@std@@@Z
    MCAPI static void
    checkMutedAndSendToastIfMuted(class Player const&, std::vector<::Safety::TextFilteringEvent> const&);

    // NOLINTEND
};
