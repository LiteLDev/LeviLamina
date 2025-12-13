#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class BossbarCommand : public ::Command {
public:
    // BossbarCommand inner types define
    enum class BossbarAction : int {
        Add    = 0,
        Get    = 1,
        List   = 2,
        Remove = 3,
        Set    = 4,
    };

    enum class BossbarGetOption : int {
        Max     = 0,
        Players = 1,
        Value   = 2,
        Visible = 3,
    };

    enum class BossbarSetOption : int {
        Color   = 0,
        Max     = 1,
        Name    = 2,
        Players = 3,
        Value   = 4,
        Visible = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk8ccd7f;
    ::ll::UntypedStorage<4, 4>   mUnk7c17db;
    ::ll::UntypedStorage<4, 4>   mUnk9787a5;
    ::ll::UntypedStorage<8, 32>  mUnkf33f2a;
    ::ll::UntypedStorage<8, 16>  mUnkdc5bef;
    ::ll::UntypedStorage<4, 4>   mUnkff6cc2;
    ::ll::UntypedStorage<4, 4>   mUnk5fa875;
    ::ll::UntypedStorage<8, 200> mUnk249dfe;
    ::ll::UntypedStorage<4, 4>   mUnk1e4485;
    ::ll::UntypedStorage<1, 1>   mUnkf01133;
    // NOLINTEND

public:
    // prevent constructor by default
    BossbarCommand& operator=(BossbarCommand const&);
    BossbarCommand(BossbarCommand const&);
    BossbarCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    virtual ~BossbarCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
