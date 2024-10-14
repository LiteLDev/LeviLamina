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
    // vIndex: 0
    virtual ~TitleRawCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _sendTitlePacketTextObject(
        ::SetTitlePacket::TitleType                       type,
        class CommandOrigin const&                        origin,
        class CommandOutput&                              output,
        class CommandSelectorResults<class Player> const& targets
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
