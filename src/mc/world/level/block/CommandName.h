#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandName {
public:
    // prevent constructor by default
    CommandName& operator=(CommandName const&);
    CommandName(CommandName const&);
    CommandName();

public:
    // NOLINTBEGIN
    MCAPI ~CommandName();

    // NOLINTEND
};
