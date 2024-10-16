#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class WorldBuilderCommand : public ::Command {
public:
    // prevent constructor by default
    WorldBuilderCommand& operator=(WorldBuilderCommand const&);
    WorldBuilderCommand(WorldBuilderCommand const&);
    WorldBuilderCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldBuilderCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setWorldBuilder(class LayeredAbilities& abilities, bool newValue);

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
