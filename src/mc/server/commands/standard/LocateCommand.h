#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
// clang-format on

class LocateCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7f3365;
    ::ll::UntypedStorage<8, 32> mUnk884b8f;
    ::ll::UntypedStorage<4, 4>  mUnkeec355;
    ::ll::UntypedStorage<1, 1>  mUnk3b6959;
    // NOLINTEND

public:
    // prevent constructor by default
    LocateCommand& operator=(LocateCommand const&);
    LocateCommand(LocateCommand const&);
    LocateCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~LocateCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _executeLocateBiome(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _executeLocateStructure(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::Level const& level);
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
