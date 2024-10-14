#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class CodeBuilderCommand : public ::Command {
public:
    // prevent constructor by default
    CodeBuilderCommand& operator=(CodeBuilderCommand const&);
    CodeBuilderCommand(CodeBuilderCommand const&);
    CodeBuilderCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CodeBuilderCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
