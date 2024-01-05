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
    // vIndex: 0, symbol: ??1SystemTickDelegate@FallingBlockSystemOnLand@@UEAA@XZ
    virtual ~SystemTickDelegate();

    // vIndex: 1, symbol:
    // ?onLand@SystemTickDelegate@FallingBlockSystemOnLand@@UEAAXAEBVFallingBlock@@AEAVIBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class FallingBlock const& block, class IBlockSource& region, class BlockPos const& pos);

    // vIndex: 2, symbol: ?breakBlock@SystemTickDelegate@FallingBlockSystemOnLand@@UEAAXAEAVFallingBlockActor@@@Z
    virtual void breakBlock(class FallingBlockActor&);

    // NOLINTEND
};

}; // namespace FallingBlockSystemOnLand
