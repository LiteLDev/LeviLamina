#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/PackCommand.h"
#include "mc/resources/pack_command/RemovePack.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

namespace PackCommand {

struct RemoveCommand : public ::PackCommand::PackCommand<::PackCommand::RemovePack> {
public:
    // prevent constructor by default
    RemoveCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RemoveCommand(::std::shared_ptr<::Pack> pack);

    MCNAPI ~RemoveCommand();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Pack> pack);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
