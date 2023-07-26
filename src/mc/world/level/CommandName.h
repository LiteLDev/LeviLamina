#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandName {

public:
    // prevent constructor by default
    CommandName& operator=(CommandName const&) = delete;
    CommandName(CommandName const&)            = delete;
    CommandName()                              = delete;

public:
    /**
     * @symbol ??1CommandName\@\@QEAA\@XZ
     */
    MCAPI ~CommandName(); // NOLINT
};
