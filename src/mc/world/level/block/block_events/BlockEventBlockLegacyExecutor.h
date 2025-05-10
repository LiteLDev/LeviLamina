#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/block/block_events/IBlockEventExecutor.h"

namespace BlockEvents::Detail {

class BlockEventBlockLegacyExecutor : public ::BlockEvents::IBlockEventExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOwnerSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventBlockLegacyExecutor() /*override*/ = default;
    // NOLINTEND
};

} // namespace BlockEvents::Detail
