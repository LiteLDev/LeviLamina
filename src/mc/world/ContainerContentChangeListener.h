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
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@InventoryContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERCONTENTCHANGELISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerContentChangeListener();
#endif
    // NOLINTEND
};
