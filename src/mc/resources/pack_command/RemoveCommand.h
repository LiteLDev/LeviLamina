#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/PackCommand.h"
#include "mc/resources/pack_command/RemovePack.h"

namespace PackCommand {

struct RemoveCommand : public ::PackCommand::PackCommand<::PackCommand::RemovePack> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RemoveCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
