#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/actor/ai/util/BossBarColor.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class Player;
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
    ::ll::TypedStorage<4, 4, ::BossbarCommand::BossbarAction>    mAction;
    ::ll::TypedStorage<4, 4, ::BossbarCommand::BossbarGetOption> mGetOption;
    ::ll::TypedStorage<4, 4, ::BossbarCommand::BossbarSetOption> mSetOption;
    ::ll::TypedStorage<8, 32, ::std::string>                     mId;
    ::ll::TypedStorage<8, 16, ::Json::Value>                     mName;
    ::ll::TypedStorage<4, 4, ::BossBarColor>                     mColor;
    ::ll::TypedStorage<4, 4, int>                                mMax;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>      mTargets;
    ::ll::TypedStorage<4, 4, int>                                mValue;
    ::ll::TypedStorage<1, 1, bool>                               mVisible;
    // NOLINTEND

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
