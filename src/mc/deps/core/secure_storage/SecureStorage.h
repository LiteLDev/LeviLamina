#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorage {

public:
    // prevent constructor by default
    SecureStorage& operator=(SecureStorage const&) = delete;
    SecureStorage(SecureStorage const&)            = delete;
    SecureStorage()                                = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SECURESTORAGE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SecureStorage(); // NOLINT
#endif
};
