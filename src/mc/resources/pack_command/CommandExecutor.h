#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct CommandExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3825d9;
    ::ll::UntypedStorage<8, 8>  mUnke088f7;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandExecutor& operator=(CommandExecutor const&);
    CommandExecutor(CommandExecutor const&);
    CommandExecutor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CommandExecutor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
