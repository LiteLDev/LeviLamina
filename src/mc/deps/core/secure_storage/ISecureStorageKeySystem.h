#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISecureStorageKeySystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISECURESTORAGEKEYSYSTEM
public:
    ISecureStorageKeySystem& operator=(ISecureStorageKeySystem const&) = delete;
    ISecureStorageKeySystem(ISecureStorageKeySystem const&)            = delete;
    ISecureStorageKeySystem()                                          = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISECURESTORAGEKEYSYSTEM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ISecureStorageKeySystem();
#endif
};
