#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class WorldBuilderCommand : public ::Command {
public:
    // prevent constructor by default
    WorldBuilderCommand& operator=(WorldBuilderCommand const&);
    WorldBuilderCommand(WorldBuilderCommand const&);
    WorldBuilderCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WorldBuilderCommand@@UEAA@XZ
    virtual ~WorldBuilderCommand() = default;

    // vIndex: 2, symbol: ?execute@WorldBuilderCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setWorldBuilder@WorldBuilderCommand@@SAXAEAVLayeredAbilities@@_N@Z
    MCAPI static void setWorldBuilder(class LayeredAbilities& abilities, bool newValue);

    // symbol: ?setup@WorldBuilderCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
