#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SECURESTORAGE
public:
    SecureStorage& operator=(SecureStorage const&) = delete;
    SecureStorage(SecureStorage const&)            = delete;
    SecureStorage()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SECURESTORAGE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SecureStorage();
#endif
};
