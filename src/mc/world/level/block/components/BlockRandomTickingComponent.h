#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

struct BlockRandomTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 256> mUnk58250a;
    ::ll::UntypedStorage<8, 16>  mUnka8f7c1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRandomTickingComponent& operator=(BlockRandomTickingComponent const&);
    BlockRandomTickingComponent(BlockRandomTickingComponent const&);
    BlockRandomTickingComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockRandomTickingComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCAPI void onTick(::BlockEvents::BlockRandomTickEvent const& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
