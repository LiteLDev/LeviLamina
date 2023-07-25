#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IJsonSerializable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IJSONSERIALIZABLE
public:
    IJsonSerializable& operator=(IJsonSerializable const&) = delete;
    IJsonSerializable(IJsonSerializable const&)            = delete;
    IJsonSerializable()                                    = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IJSONSERIALIZABLE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IJsonSerializable();
#endif
};
