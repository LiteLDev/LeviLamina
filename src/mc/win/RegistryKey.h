#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RegistryKey {
public:
    // prevent constructor by default
    RegistryKey& operator=(RegistryKey const&);
    RegistryKey(RegistryKey const&);
    RegistryKey();

public:
    // NOLINTBEGIN
    // symbol: ??1RegistryKey@@QEAA@XZ
    MCAPI ~RegistryKey();

    // NOLINTEND
};
