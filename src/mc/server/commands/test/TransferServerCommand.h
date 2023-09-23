#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class TransferServerCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    TransferServerCommand& operator=(TransferServerCommand const&);
    TransferServerCommand(TransferServerCommand const&);
    TransferServerCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?collectOptionalArguments@Command@@MEAA_NXZ
    virtual bool collectOptionalArguments();

    // vIndex: 2, symbol: ?execute@TransferServerCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@TransferServerCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findTarget@TransferServerCommand@@AEBAPEBVPlayer@@AEAVCommandOutput@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Player const* _findTarget(class CommandOutput&, class Level&, std::string const&) const;

    // NOLINTEND
};
