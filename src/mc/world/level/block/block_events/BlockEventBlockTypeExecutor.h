#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/block/block_events/IBlockEventExecutor.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace BlockEvents::Detail {

class BlockEventBlockTypeExecutor : public ::BlockEvents::IBlockEventExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::Bedrock::PubSub::Subscription,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::Bedrock::PubSub::Subscription>>>
        mSubscriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEventBlockTypeExecutor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    setOwnerSubscription(uint64 typeId, ::Bedrock::PubSub::Subscription&& subscription, bool assertOnDuplicate);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents::Detail
