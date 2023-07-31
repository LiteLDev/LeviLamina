#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RegistryKey {

public:
    // prevent constructor by default
    RegistryKey& operator=(RegistryKey const&) = delete;
    RegistryKey(RegistryKey const&)            = delete;
    RegistryKey()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1RegistryKey\@\@QEAA\@XZ
     */
    MCAPI ~RegistryKey();
    // NOLINTEND
};
