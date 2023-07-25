#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerContentChangeListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCONTENTCHANGELISTENER
public:
    ContainerContentChangeListener& operator=(ContainerContentChangeListener const&) = delete;
    ContainerContentChangeListener(ContainerContentChangeListener const&)            = delete;
    ContainerContentChangeListener()                                                 = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERCONTENTCHANGELISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerContentChangeListener();
#endif
};
