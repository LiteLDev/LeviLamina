#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/EventType.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventExecutor; }
// clang-format on

namespace BlockEvents {

class BlockEventManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb0af3d;
    ::ll::UntypedStorage<8, 24> mUnk997875;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEventManager& operator=(BlockEventManager const&);
    BlockEventManager(BlockEventManager const&);
    BlockEventManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockEvents::BlockEventExecutor& _getOrAddExecutor(::BlockEvents::EventType type);

    MCAPI ::BlockEvents::BlockEventExecutor const* tryGetExecutor(::BlockEvents::EventType type) const;

    MCAPI ~BlockEventManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace BlockEvents
