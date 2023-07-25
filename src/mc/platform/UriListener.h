#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UriListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_URILISTENER
public:
    UriListener& operator=(UriListener const&) = delete;
    UriListener(UriListener const&)            = delete;
    UriListener()                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_URILISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UriListener();
#endif
};
