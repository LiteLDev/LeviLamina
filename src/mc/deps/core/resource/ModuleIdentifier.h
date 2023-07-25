#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModuleIdentifier {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MODULEIDENTIFIER
public:
    ModuleIdentifier& operator=(ModuleIdentifier const&) = delete;
    ModuleIdentifier(ModuleIdentifier const&)            = delete;
    ModuleIdentifier()                                   = delete;
#endif

public:
    /**
     * @symbol ??1ModuleIdentifier\@\@QEAA\@XZ
     */
    MCAPI ~ModuleIdentifier();
};
