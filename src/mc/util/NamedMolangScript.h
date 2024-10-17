#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NamedMolangScript {
public:
    // prevent constructor by default
    NamedMolangScript& operator=(NamedMolangScript const&);
    NamedMolangScript(NamedMolangScript const&);
    NamedMolangScript();

public:
    // NOLINTBEGIN
    MCAPI ~NamedMolangScript();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
