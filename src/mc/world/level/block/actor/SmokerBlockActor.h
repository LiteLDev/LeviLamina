#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

class SmokerBlockActor : public ::FurnaceBlockActor {

public:
    // prevent constructor by default
    SmokerBlockActor& operator=(SmokerBlockActor const&) = delete;
    SmokerBlockActor(SmokerBlockActor const&)            = delete;
    SmokerBlockActor()                                   = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
