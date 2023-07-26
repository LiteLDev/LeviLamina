#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISecureStorageKeySystem {

public:
    // prevent constructor by default
    ISecureStorageKeySystem& operator=(ISecureStorageKeySystem const&) = delete;
    ISecureStorageKeySystem(ISecureStorageKeySystem const&)            = delete;
    ISecureStorageKeySystem()                                          = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISECURESTORAGEKEYSYSTEM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ISecureStorageKeySystem(); // NOLINT
#endif
};
