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

class DialogueCommand : public ::Command {
public:
    // DialogueCommand inner types define
    enum class Action : int {
        Open   = 0,
        Change = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkcd0c80;
    ::ll::UntypedStorage<8, 200> mUnk724f5e;
    ::ll::UntypedStorage<8, 200> mUnkbc8e8d;
    ::ll::UntypedStorage<8, 32>  mUnk95f4fd;
    ::ll::UntypedStorage<1, 1>   mUnk8ba152;
    // NOLINTEND

public:
    // prevent constructor by default
    DialogueCommand& operator=(DialogueCommand const&);
    DialogueCommand(DialogueCommand const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~DialogueCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DialogueCommand();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
