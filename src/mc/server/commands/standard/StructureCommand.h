#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class StructureCommand : public ::Command {
public:
    // prevent constructor by default
    StructureCommand& operator=(StructureCommand const&);
    StructureCommand(StructureCommand const&);
    StructureCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _delete(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI std::string _getFullName() const;

    MCAPI bool
    _isValidSize(class BlockPos const& size, class DimensionHeightRange const& heightRange, class CommandOutput& output)
        const;

    MCAPI void _load(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void _save(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
