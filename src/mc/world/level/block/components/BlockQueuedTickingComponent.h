#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

struct BlockQueuedTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkfd4e77;
    ::ll::UntypedStorage<4, 4>   mUnk9c9597;
    ::ll::UntypedStorage<4, 4>   mUnk6987ce;
    ::ll::UntypedStorage<8, 256> mUnk26c6d0;
    ::ll::UntypedStorage<8, 16>  mUnk51ad9f;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueuedTickingComponent& operator=(BlockQueuedTickingComponent const&);
    BlockQueuedTickingComponent(BlockQueuedTickingComponent const&);
    BlockQueuedTickingComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockQueuedTickingComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCAPI int getRandomTickDelay(::Random& random) const;

    MCAPI void onTick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
