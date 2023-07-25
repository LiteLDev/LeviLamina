#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorageKey {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SECURESTORAGEKEY
public:
    SecureStorageKey& operator=(SecureStorageKey const&) = delete;
    SecureStorageKey(SecureStorageKey const&)            = delete;
    SecureStorageKey()                                   = delete;
#endif

public:
    /**
     * @symbol ??1SecureStorageKey\@\@QEAA\@XZ
     */
    MCAPI ~SecureStorageKey();
};
