#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/CommandOriginSystem.h"

class CommandResponseBase {
public:
    // prevent constructor by default
    CommandResponseBase& operator=(CommandResponseBase const&);
    CommandResponseBase(CommandResponseBase const&);
    CommandResponseBase();

public:
    // NOLINTBEGIN
    MCVAPI ::CommandOriginSystem _getCommandOriginSystem() const;

    MCVAPI ~CommandResponseBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addCommand(std::string const& entry);

    MCAPI void _executeAction(class RenderParams& params) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _compileCommands(class ILevel& level) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    MCAPI ::CommandOriginSystem _getCommandOriginSystem$() const;

    MCAPI static std::string const& NameID();

    // NOLINTEND
};
