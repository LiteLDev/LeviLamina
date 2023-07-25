#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlastFurnaceBlockActor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLASTFURNACEBLOCKACTOR
public:
    BlastFurnaceBlockActor& operator=(BlastFurnaceBlockActor const&) = delete;
    BlastFurnaceBlockActor(BlastFurnaceBlockActor const&)            = delete;
    BlastFurnaceBlockActor()                                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLASTFURNACEBLOCKACTOR
    /**
     * @symbol
     * ?getName\@BlastFurnaceBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
#endif
};
