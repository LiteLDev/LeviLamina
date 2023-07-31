#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UriListener {

public:
    // prevent constructor by default
    UriListener& operator=(UriListener const&) = delete;
    UriListener(UriListener const&)            = delete;
    UriListener()                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_URILISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UriListener();
#endif
    // NOLINTEND
};
