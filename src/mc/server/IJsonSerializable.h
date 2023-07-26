#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IJsonSerializable {

public:
    // prevent constructor by default
    IJsonSerializable& operator=(IJsonSerializable const&) = delete;
    IJsonSerializable(IJsonSerializable const&)            = delete;
    IJsonSerializable()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IJSONSERIALIZABLE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IJsonSerializable(); // NOLINT
#endif
};
