#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SendShowStoreOfferCommand : public ::Command {
public:
    // prevent constructor by default
    SendShowStoreOfferCommand& operator=(SendShowStoreOfferCommand const&);
    SendShowStoreOfferCommand(SendShowStoreOfferCommand const&);
    SendShowStoreOfferCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SendShowStoreOfferCommand@@UEAA@XZ
    virtual ~SendShowStoreOfferCommand() = default;

    // vIndex: 2, symbol: ?execute@SendShowStoreOfferCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@SendShowStoreOfferCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
