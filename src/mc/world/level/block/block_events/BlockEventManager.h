#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/EventType.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class IBlockEventExecutor; }
// clang-format on

namespace BlockEvents {

class BlockEventManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb0af3d;
    ::ll::UntypedStorage<8, 24> mUnk40032f;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEventManager& operator=(BlockEventManager const&);
    BlockEventManager(BlockEventManager const&);
    BlockEventManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _assertMainOrServerThread() const;

    MCNAPI ::std::unique_ptr<::BlockEvents::IBlockEventExecutor>
    _createSpecializedExecutor(::BlockEvents::EventType type) const;

    MCNAPI bool hasExecutor(::BlockEvents::EventType type) const;

    MCNAPI ~BlockEventManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockEvents
