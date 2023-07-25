#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickingAreaView {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITICKINGAREAVIEW
public:
    ITickingAreaView& operator=(ITickingAreaView const&) = delete;
    ITickingAreaView(ITickingAreaView const&)            = delete;
    ITickingAreaView()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITICKINGAREAVIEW
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ITickingAreaView();
#endif
};
