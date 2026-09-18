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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    StoredCommand();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI StoredCommand(::CurrentCmdVersion cmdVersion, ::std::string_view rawCmd);

    MCAPI ~StoredCommand();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::CurrentCmdVersion cmdVersion, ::std::string_view rawCmd);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace npc
