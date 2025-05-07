#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class CodeBuilderCommand : public ::Command {
public:
    // CodeBuilderCommand inner types define
    enum class Action : int {
        Navigate      = 0,
        Reset         = 1,
        Subscribe     = 2,
        Unsubscribe   = 3,
        RuntimeAction = 4,
        Check         = 5,
    };

    enum class CommandKeyword : uchar {
        None       = 0,
        Code       = 1,
        CodeStatus = 2,
    };

    enum class SubscriptionType : int {
        None       = 0,
        Scoreboard = 1,
    };

    enum class CodeBuilderRuntimeAction : int {
        None  = 0,
        Start = 1,
        Stop  = 2,
        Pause = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk2534fc;
    ::ll::UntypedStorage<4, 4>   mUnk988e46;
    ::ll::UntypedStorage<4, 4>   mUnke0c866;
    ::ll::UntypedStorage<1, 1>   mUnkf75e94;
    ::ll::UntypedStorage<1, 1>   mUnk6c474e;
    ::ll::UntypedStorage<8, 200> mUnk5625b6;
    ::ll::UntypedStorage<8, 32>  mUnke451d3;
    ::ll::UntypedStorage<1, 1>   mUnk94326e;
    ::ll::UntypedStorage<1, 1>   mUnk7176af;
    ::ll::UntypedStorage<8, 32>  mUnka4de4b;
    // NOLINTEND

public:
    // prevent constructor by default
    CodeBuilderCommand& operator=(CodeBuilderCommand const&);
    CodeBuilderCommand(CodeBuilderCommand const&);
    CodeBuilderCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~CodeBuilderCommand() /*override*/ = default;
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
