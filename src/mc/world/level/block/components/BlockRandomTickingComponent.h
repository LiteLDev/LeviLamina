#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
namespace Bedrock::PubSub { class Subscription; }
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockRandomTickLegacyEvent; }
// clang-format on

struct BlockRandomTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger>             mOnTimeDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEventSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockRandomTickingComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCAPI void onTick(::BlockEvents::BlockRandomTickLegacyEvent const& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
