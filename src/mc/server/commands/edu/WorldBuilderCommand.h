#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class LayeredAbilities;
// clang-format on

class WorldBuilderCommand : public ::Command {
public:
    // prevent constructor by default
    WorldBuilderCommand& operator=(WorldBuilderCommand const&);
    WorldBuilderCommand(WorldBuilderCommand const&);
    WorldBuilderCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~WorldBuilderCommand() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setWorldBuilder(::LayeredAbilities& abilities, bool newValue);

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
