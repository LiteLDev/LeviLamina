#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Command;
// clang-format on

namespace npc {

struct StoredCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> version;
    ::ll::TypedStorage<8, 32, ::std::string>      rawCommand;
    ::ll::TypedStorage<8, 8, ::Command*>          command;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StoredCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace npc
