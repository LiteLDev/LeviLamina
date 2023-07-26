#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorageKey {

public:
    // prevent constructor by default
    SecureStorageKey& operator=(SecureStorageKey const&) = delete;
    SecureStorageKey(SecureStorageKey const&)            = delete;
    SecureStorageKey()                                   = delete;

public:
    /**
     * @symbol ??1SecureStorageKey\@\@QEAA\@XZ
     */
    MCAPI ~SecureStorageKey(); // NOLINT
};
