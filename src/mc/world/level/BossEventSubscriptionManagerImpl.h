#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/types/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/level/BossEventSubscriptionManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class BossEventSubscriptionManagerImpl : public ::BossEventSubscriptionManager {
public:
    // prevent constructor by default
    BossEventSubscriptionManagerImpl& operator=(BossEventSubscriptionManagerImpl const&);
    BossEventSubscriptionManagerImpl(BossEventSubscriptionManagerImpl const&);

public:
    // NOLINTBEGIN
    MCVAPI bool areBossEventSubscribersReady() const;

    MCVAPI void broadcastBossEvent(::BossEventUpdateType type);

    MCVAPI void
    broadcastBossEvent(::BossEventUpdateType type, struct ActorUniqueID const& id, class BossEventPacket const& packet);

    MCVAPI class Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void(::BossEventUpdateType)> callback
    );

    MCVAPI class Bedrock::PubSub::Subscription subscribeToBossEvent(
        std::function<void(::BossEventUpdateType, struct ActorUniqueID const&, class BossEventPacket const&)> callback
    );

    MCAPI BossEventSubscriptionManagerImpl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** vftableForBedrockImplBase();

    MCAPI void* ctor$();

    MCAPI bool areBossEventSubscribersReady$() const;

    MCAPI void broadcastBossEvent$(::BossEventUpdateType type);

    MCAPI void broadcastBossEvent$(
        ::BossEventUpdateType        type,
        struct ActorUniqueID const&  id,
        class BossEventPacket const& packet
    );

    MCAPI class Bedrock::PubSub::Subscription subscribeToBossEvent$(std::function<void(::BossEventUpdateType)> callback
    );

    MCAPI class Bedrock::PubSub::Subscription subscribeToBossEvent$(
        std::function<void(::BossEventUpdateType, struct ActorUniqueID const&, class BossEventPacket const&)> callback
    );

    // NOLINTEND
};
