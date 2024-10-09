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
    // vIndex: 0
    virtual ~SystemTickDelegate();

    // vIndex: 1
    virtual void onLand(class FallingBlock const& block, class IBlockSource& region, class BlockPos const& pos);

    // vIndex: 2
    virtual void breakBlock(class FallingBlockActor& fallingBlock);

    // NOLINTEND
};

}; // namespace FallingBlockSystemOnLand
