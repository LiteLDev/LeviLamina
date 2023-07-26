#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class WorldBuilderCommand : public ::Command {

public:
    // prevent constructor by default
    WorldBuilderCommand& operator=(WorldBuilderCommand const&) = delete;
    WorldBuilderCommand(WorldBuilderCommand const&)            = delete;
    WorldBuilderCommand()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@WorldBuilderCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setWorldBuilder\@WorldBuilderCommand\@\@SAXAEAVLayeredAbilities\@\@_N\@Z
     */
    MCAPI static void setWorldBuilder(class LayeredAbilities&, bool); // NOLINT
    /**
     * @symbol ?setup\@WorldBuilderCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT
};
