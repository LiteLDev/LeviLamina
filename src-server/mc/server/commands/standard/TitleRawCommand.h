#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetTitlePacketPayload.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class TitleRawCommand : public ::MessagingCommand {
public:
    // TitleRawCommand inner types define
    enum class Mode : int {
        Clear = 0,
        Reset = 1,
        Title = 2,
        Subtitle = 3,
        ActionBar = 4,
        Times = 5,
        Undefined = 6,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6c5234;
    ::ll::UntypedStorage<8, 200> mUnkd8086f;
    ::ll::UntypedStorage<8, 16> mUnkafc916;
    ::ll::UntypedStorage<4, 4> mUnk2c88f9;
    ::ll::UntypedStorage<4, 4> mUnkee094f;
    ::ll::UntypedStorage<4, 4> mUnk32257a;
    // NOLINTEND

public:
    // prevent constructor by default
    TitleRawCommand& operator=(TitleRawCommand const&);
    TitleRawCommand(TitleRawCommand const&);
    TitleRawCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~TitleRawCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _sendTitlePacketTextObject(::SetTitlePacketPayload::TitleType type, ::CommandOrigin const& origin, ::CommandOutput& output, ::CommandSelectorResults<::Player> const& targets) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
