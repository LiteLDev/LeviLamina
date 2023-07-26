#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
// clang-format on

namespace FallingBlockSystemOnLand {

class SystemTickDelegate {

public:
    // prevent constructor by default
    SystemTickDelegate& operator=(SystemTickDelegate const&) = delete;
    SystemTickDelegate(SystemTickDelegate const&)            = delete;
    SystemTickDelegate()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onLand\@SystemTickDelegate\@FallingBlockSystemOnLand\@\@UEAAXAEBVFallingBlock\@\@AEAVIBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onLand(class FallingBlock const&, class IBlockSource&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?breakBlock\@SystemTickDelegate\@FallingBlockSystemOnLand\@\@UEAAXAEAVFallingBlockActor\@\@\@Z
     */
    virtual void breakBlock(class FallingBlockActor&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCKSYSTEMONLAND_SYSTEMTICKDELEGATE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SystemTickDelegate(); // NOLINT
#endif
};

}; // namespace FallingBlockSystemOnLand
