#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IIslandCore {

public:
    // prevent constructor by default
    IIslandCore& operator=(IIslandCore const&) = delete;
    IIslandCore(IIslandCore const&)            = delete;
    IIslandCore()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AppIsland\@Bedrock\@\@UEAAGXZ
     */
    virtual unsigned short getId() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_IISLANDCORE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IIslandCore();
#endif
    // NOLINTEND
};

}; // namespace Bedrock
