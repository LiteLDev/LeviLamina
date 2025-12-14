#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockPlayerDestroyEvent; }
// clang-format on

class OnPlayerDestroyedTrigger : public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEventSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnPlayerDestroyedTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCAPI void onPlayerDestroy(::BlockEvents::BlockPlayerDestroyEvent const& eventData) const;
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
