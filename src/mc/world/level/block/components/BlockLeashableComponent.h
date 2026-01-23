#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockBreakEvent; }
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockPlayerDestroyEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

struct BlockLeashableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                          mLeashKnotOffset;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnBlockInteractEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnBlockDestroyEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnBlockPlayerDestroyEventSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLeashableComponent& operator=(BlockLeashableComponent const&);
    BlockLeashableComponent(BlockLeashableComponent const&);
    BlockLeashableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onBlockBreak(::BlockEvents::BlockBreakEvent& event) const;

    MCAPI void _onBlockPlayerDestroy(::BlockEvents::BlockPlayerDestroyEvent& event) const;

    MCAPI void _onBlockPlayerInteract(::BlockEvents::BlockPlayerInteractEvent& event) const;

    MCAPI void finalize(::BlockEvents::BlockEventManager& eventManager);

    MCAPI ::BlockLeashableComponent& operator=(::BlockLeashableComponent&&);
    // NOLINTEND
};
