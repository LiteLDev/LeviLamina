#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace BlockEvents { class BlockEventBase; }
// clang-format on

namespace BlockEvents {

class BlockEventExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkeb22aa;
    ::ll::UntypedStorage<8, 16>  mUnk7a9b6c;
    ::ll::UntypedStorage<8, 128> mUnk3b013f;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEventExecutor& operator=(BlockEventExecutor const&);
    BlockEventExecutor(BlockEventExecutor const&);
    BlockEventExecutor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventExecutor() = default;

    // vIndex: 1
    virtual void dispatch(::BlockEvents::BlockEventBase& eventData) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Subscription _subscribe(::std::function<void(::BlockEvents::BlockEventBase&)>&& func);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $dispatch(::BlockEvents::BlockEventBase& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
