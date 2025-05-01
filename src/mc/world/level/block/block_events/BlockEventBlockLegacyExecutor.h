#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/IBlockEventExecutor.h"

namespace BlockEvents::Detail {

class BlockEventBlockLegacyExecutor : public ::BlockEvents::IBlockEventExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkde0bfc;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEventBlockLegacyExecutor& operator=(BlockEventBlockLegacyExecutor const&);
    BlockEventBlockLegacyExecutor(BlockEventBlockLegacyExecutor const&);
    BlockEventBlockLegacyExecutor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventBlockLegacyExecutor() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BlockEvents::Detail
