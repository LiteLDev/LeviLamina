#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerContentChangeListener {

public:
    // prevent constructor by default
    ContainerContentChangeListener& operator=(ContainerContentChangeListener const&) = delete;
    ContainerContentChangeListener(ContainerContentChangeListener const&)            = delete;
    ContainerContentChangeListener()                                                 = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERCONTENTCHANGELISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerContentChangeListener();
#endif
    // NOLINTEND
};
