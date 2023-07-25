#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSIZECHANGELISTENER
public:
    ContainerSizeChangeListener& operator=(ContainerSizeChangeListener const&) = delete;
    ContainerSizeChangeListener(ContainerSizeChangeListener const&)            = delete;
    ContainerSizeChangeListener()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSIZECHANGELISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerSizeChangeListener();
#endif
};
