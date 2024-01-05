#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetTitlePacket.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/standard/MessagingCommand.h"

class TitleRawCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    TitleRawCommand& operator=(TitleRawCommand const&);
    TitleRawCommand(TitleRawCommand const&);
    TitleRawCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TitleRawCommand@@UEAA@XZ
    virtual ~TitleRawCommand() = default;

    // vIndex: 2, symbol: ?execute@TitleRawCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@TitleRawCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_sendTitlePacketTextObject@TitleRawCommand@@AEBA_NW4TitleType@SetTitlePacket@@AEBVCommandOrigin@@AEAVCommandOutput@@AEBV?$CommandSelectorResults@VPlayer@@@@@Z
    MCAPI bool _sendTitlePacketTextObject(
        ::SetTitlePacket::TitleType                       type,
        class CommandOrigin const&                        origin,
        class CommandOutput&                              output,
        class CommandSelectorResults<class Player> const& targets
    ) const;

    // NOLINTEND
};
