#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickingAreaView {

public:
    // prevent constructor by default
    ITickingAreaView& operator=(ITickingAreaView const&) = delete;
    ITickingAreaView(ITickingAreaView const&)            = delete;
    ITickingAreaView()                                   = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITICKINGAREAVIEW
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ITickingAreaView(); // NOLINT
#endif
};
