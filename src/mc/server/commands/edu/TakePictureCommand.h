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

class TakePictureCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnk9aad1e;
    ::ll::UntypedStorage<8, 200> mUnka3a31a;
    ::ll::UntypedStorage<4, 16>  mUnkd62911;
    ::ll::UntypedStorage<1, 1>   mUnk5ed6f7;
    ::ll::UntypedStorage<1, 1>   mUnk5928b9;
    // NOLINTEND

public:
    // prevent constructor by default
    TakePictureCommand& operator=(TakePictureCommand const&);
    TakePictureCommand(TakePictureCommand const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~TakePictureCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TakePictureCommand();
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
