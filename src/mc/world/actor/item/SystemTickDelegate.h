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
class ITickDelegate;
// clang-format on

namespace FallingBlockSystemOnLand {

class SystemTickDelegate : public ::ITickDelegate {
public:
    // prevent constructor by default
    SystemTickDelegate& operator=(SystemTickDelegate const&);
    SystemTickDelegate(SystemTickDelegate const&);
    SystemTickDelegate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?onLand@SystemTickDelegate@FallingBlockSystemOnLand@@UEAAXAEBVFallingBlock@@AEAVIBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class FallingBlock const&, class IBlockSource&, class BlockPos const&);

    // vIndex: 2, symbol: ?breakBlock@SystemTickDelegate@FallingBlockSystemOnLand@@UEAAXAEAVFallingBlockActor@@@Z
    virtual void breakBlock(class FallingBlockActor&);

    // symbol: ??1SystemTickDelegate@FallingBlockSystemOnLand@@UEAA@XZ
    MCVAPI ~SystemTickDelegate();

    // NOLINTEND
};

}; // namespace FallingBlockSystemOnLand
