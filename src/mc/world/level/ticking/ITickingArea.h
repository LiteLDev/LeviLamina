#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickingArea {

public:
    // prevent constructor by default
    ITickingArea& operator=(ITickingArea const&) = delete;
    ITickingArea(ITickingArea const&)            = delete;
    ITickingArea()                               = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITICKINGAREA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ITickingArea();
#endif
    /**
     * @symbol ?serialize\@ITickingArea\@\@QEBA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag serialize() const;
    // NOLINTEND
};
