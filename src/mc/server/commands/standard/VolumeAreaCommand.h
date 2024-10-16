#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class VolumeAreaCommand : public ::Command {
public:
    // prevent constructor by default
    VolumeAreaCommand& operator=(VolumeAreaCommand const&);
    VolumeAreaCommand(VolumeAreaCommand const&);
    VolumeAreaCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VolumeAreaCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _add(
        class CommandOrigin const&       origin,
        class CommandOutput&             output,
        class Dimension const&           dimension,
        class VolumeEntityManagerServer& volumeManager,
        class PacketSender&              packetSender
    ) const;

    MCAPI void _list(
        class CommandOutput&                   output,
        class Level const&                     level,
        class Dimension const&                 dimension,
        class VolumeEntityManagerServer const& volumeManager
    ) const;

    MCAPI void _remove(
        class CommandOrigin const&       origin,
        class CommandOutput&             output,
        class Dimension const&           dimension,
        class VolumeEntityManagerServer& volumeManager,
        class PacketSender&              packetSender
    ) const;

    MCAPI void _removeAll(
        class CommandOrigin const&       origin,
        class CommandOutput&             output,
        class Dimension const&           dimension,
        class VolumeEntityManagerServer& volumeManager,
        class PacketSender&              packetSender
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
