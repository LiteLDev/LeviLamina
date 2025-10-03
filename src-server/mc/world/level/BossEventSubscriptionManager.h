#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
class BossEventPacket;
struct ActorUniqueID;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class BossEventSubscriptionManager : public ::Bedrock::EnableNonOwnerReferences,
                                     public ::Bedrock::ImplBase<::BossEventSubscriptionManager> {
public:
    // BossEventSubscriptionManager inner types define
    using onBossEventSignature = void(::BossEventUpdateType);

    using onBossEventWithPacketSignature =
        void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(::std::function<void(::BossEventUpdateType)>) = 0;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(
        ::std::function<void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&)>
    ) = 0;

    // vIndex: 4
    virtual void broadcastBossEvent(::BossEventUpdateType) = 0;

    // vIndex: 3
    virtual void broadcastBossEvent(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&) = 0;

    // vIndex: 5
    virtual bool areBossEventSubscribersReady() const = 0;

    // vIndex: 0
    virtual ~BossEventSubscriptionManager() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
