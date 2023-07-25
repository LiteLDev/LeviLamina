#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SmokerBlockActor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMOKERBLOCKACTOR
public:
    SmokerBlockActor& operator=(SmokerBlockActor const&) = delete;
    SmokerBlockActor(SmokerBlockActor const&)            = delete;
    SmokerBlockActor()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SMOKERBLOCKACTOR
    /**
     * @symbol
     * ?getName\@SmokerBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
#endif
    /**
     * @symbol ??0SmokerBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SmokerBlockActor(class BlockPos const&);
};
