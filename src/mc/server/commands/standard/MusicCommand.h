#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class MusicCommand : public ::Command {
public:
    // prevent constructor by default
    MusicCommand& operator=(MusicCommand const&);
    MusicCommand(MusicCommand const&);
    MusicCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MusicCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _handleActionQueueOrPlay(class CompoundTag& data, class CommandOutput& output) const;

    MCAPI void _handleActionStop(class CompoundTag& data, class CommandOutput& output) const;

    MCAPI void _handleActionVolume(class CompoundTag& data, class CommandOutput& output) const;

    // NOLINTEND
};
