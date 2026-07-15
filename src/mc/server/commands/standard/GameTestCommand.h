#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class MinecraftGameTest;
// clang-format on

class GameTestCommand : public ::ServerCommand {
public:
    // GameTestCommand inner types define
    enum class Mode : int {
        Unknown         = 0,
        ClearAll        = 1,
        Create          = 2,
        Run             = 3,
        RunThis         = 4,
        RunSet          = 5,
        RunSetUntilFail = 6,
        RunNearbyTests  = 7,
        ShowPosition    = 8,
        Stop            = 9,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          mTestName;
    ::ll::TypedStorage<8, 32, ::std::string>          mTestTag;
    ::ll::TypedStorage<4, 4, int>                     mTestRotationSteps;
    ::ll::TypedStorage<4, 4, int>                     mRepeatCount;
    ::ll::TypedStorage<1, 1, bool>                    mStopOnFailure;
    ::ll::TypedStorage<4, 4, ::GameTestCommand::Mode> mMode;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationWidth;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationHeight;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationDepth;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addGameTestNameEnums(::MinecraftGameTest& gameTest, ::CommandRegistry& commandRegistry);

    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
