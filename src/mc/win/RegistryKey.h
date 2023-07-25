#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RegistryKey {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGISTRYKEY
public:
    RegistryKey& operator=(RegistryKey const&) = delete;
    RegistryKey(RegistryKey const&)            = delete;
    RegistryKey()                              = delete;
#endif

public:
    /**
     * @symbol ??1RegistryKey\@\@QEAA\@XZ
     */
    MCAPI ~RegistryKey();
};
