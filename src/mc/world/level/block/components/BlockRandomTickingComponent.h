#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
namespace Bedrock::PubSub { class Subscription; }
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

struct BlockRandomTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 256, ::DefinitionTrigger>            mOnTimeDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEventSubscription;
    // NOLINTEND

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
