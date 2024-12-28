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

class LessonCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnk205f77;
    ::ll::UntypedStorage<1, 1>   mUnka78a95;
    ::ll::UntypedStorage<1, 1>   mUnk1323b8;
    ::ll::UntypedStorage<8, 32>  mUnk541017;
    ::ll::UntypedStorage<4, 4>   mUnkd74463;
    // NOLINTEND

public:
    // prevent constructor by default
    LessonCommand& operator=(LessonCommand const&);
    LessonCommand(LessonCommand const&);
    LessonCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~LessonCommand() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
