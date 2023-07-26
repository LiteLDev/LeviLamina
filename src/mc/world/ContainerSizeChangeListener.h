#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {

public:
    // prevent constructor by default
    ContainerSizeChangeListener& operator=(ContainerSizeChangeListener const&) = delete;
    ContainerSizeChangeListener(ContainerSizeChangeListener const&)            = delete;
    ContainerSizeChangeListener()                                              = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSIZECHANGELISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerSizeChangeListener(); // NOLINT
#endif
};
