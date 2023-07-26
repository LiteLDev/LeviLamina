#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModuleIdentifier {

public:
    // prevent constructor by default
    ModuleIdentifier& operator=(ModuleIdentifier const&) = delete;
    ModuleIdentifier(ModuleIdentifier const&)            = delete;
    ModuleIdentifier()                                   = delete;

public:
    /**
     * @symbol ??1ModuleIdentifier\@\@QEAA\@XZ
     */
    MCAPI ~ModuleIdentifier(); // NOLINT
};
