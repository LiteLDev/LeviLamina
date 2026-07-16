#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class ChangeSettingCommand : public ::ServerCommand {
public:
    // ChangeSettingCommand inner types define
    enum class Setting : int {
        AllowCheats = 0,
        Difficulty  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ChangeSettingCommand::Setting>   mSetting;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty> mDifficulty;
    ::ll::TypedStorage<4, 4, int>                               mIntValue;
    ::ll::TypedStorage<1, 1, bool>                              mBoolValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
