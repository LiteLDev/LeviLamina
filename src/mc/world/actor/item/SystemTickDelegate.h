#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/ITickDelegate.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
// clang-format on

namespace FallingBlockSystemOnLand {

class SystemTickDelegate : public ::ITickDelegate {

public:
    // prevent constructor by default
    SystemTickDelegate& operator=(SystemTickDelegate const&) = delete;
    SystemTickDelegate(SystemTickDelegate const&)            = delete;
    SystemTickDelegate()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onLand\@SystemTickDelegate\@FallingBlockSystemOnLand\@\@UEAAXAEBVFallingBlock\@\@AEAVIBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onLand(class FallingBlock const&, class IBlockSource&, class BlockPos const&);
    /**
     * @vftbl 2
     * @symbol ?breakBlock\@SystemTickDelegate\@FallingBlockSystemOnLand\@\@UEAAXAEAVFallingBlockActor\@\@\@Z
     */
    virtual void breakBlock(class FallingBlockActor&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCKSYSTEMONLAND_SYSTEMTICKDELEGATE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SystemTickDelegate();
#endif
    // NOLINTEND
};

}; // namespace FallingBlockSystemOnLand
