#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlastFurnaceBlockActor {

public:
    // prevent constructor by default
    BlastFurnaceBlockActor& operator=(BlastFurnaceBlockActor const&) = delete;
    BlastFurnaceBlockActor(BlastFurnaceBlockActor const&)            = delete;
    BlastFurnaceBlockActor()                                         = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLASTFURNACEBLOCKACTOR
    /**
     * @symbol
     * ?getName\@BlastFurnaceBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
#endif
    // NOLINTEND
};
