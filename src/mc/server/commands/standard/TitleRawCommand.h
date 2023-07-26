#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetTitlePacket.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/level/Command.h"

class TitleRawCommand : public ::Command {

public:
    // prevent constructor by default
    TitleRawCommand& operator=(TitleRawCommand const&) = delete;
    TitleRawCommand(TitleRawCommand const&)            = delete;
    TitleRawCommand()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@TitleRawCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@TitleRawCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_sendTitlePacketTextObject\@TitleRawCommand\@\@AEBA_NW4TitleType\@SetTitlePacket\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBV?$CommandSelectorResults\@VPlayer\@\@\@\@\@Z
     */
    MCAPI bool
    _sendTitlePacketTextObject(enum class SetTitlePacket::TitleType, class CommandOrigin const&, class CommandOutput&, class CommandSelectorResults<class Player> const&)
        const; // NOLINT

private:
};
