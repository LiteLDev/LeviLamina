#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TickingAreaCommand : public ::Command {
public:
    // prevent constructor by default
    TickingAreaCommand& operator=(TickingAreaCommand const&);
    TickingAreaCommand(TickingAreaCommand const&);
    TickingAreaCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickingAreaCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static std::string formatTickingAreaList(std::vector<struct TickingAreaDescription> const&);

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _add(class CommandOrigin const& origin, class CommandOutput& output, class Level& level, class Dimension& dimension)
        const;

    MCAPI void _list(
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        class Level&               level,
        class Dimension&           dimension
    ) const;

    MCAPI void _preload(
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        class Level&               level,
        class Dimension&           dimension
    ) const;

    MCAPI void _remove(
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        class Level&               level,
        class Dimension&           dimension
    ) const;

    MCAPI void _removeAll(
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        class Level&               level,
        class Dimension&           dimension
    ) const;

    // NOLINTEND
};
