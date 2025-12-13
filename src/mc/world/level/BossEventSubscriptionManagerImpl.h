#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/level/BossEventSubscriptionManager.h"

// auto generated forward declare list
// clang-format off
class BossEventPacket;
struct ActorUniqueID;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class BossEventSubscriptionManagerImpl : public ::BossEventSubscriptionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::BossEventUpdateType), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnBossEvent;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnBossEventWithPacket;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Subscription
    subscribeToBossEvent(::std::function<void(::BossEventUpdateType)> callback) /*override*/;

    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(
        ::std::function<void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&)> callback
    ) /*override*/;

    virtual void broadcastBossEvent(::BossEventUpdateType type) /*override*/;

    virtual void broadcastBossEvent(
        ::BossEventUpdateType    type,
        ::ActorUniqueID const&   id,
        ::BossEventPacket const& packet
    ) /*override*/;

    virtual bool areBossEventSubscribersReady() const /*override*/;

    virtual ~BossEventSubscriptionManagerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BossEventSubscriptionManagerImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToBossEvent(::std::function<void(::BossEventUpdateType)> callback);

    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToBossEvent(
        ::std::function<void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&)> callback
    );

    MCNAPI void $broadcastBossEvent(::BossEventUpdateType type);

    MCNAPI void
    $broadcastBossEvent(::BossEventUpdateType type, ::ActorUniqueID const& id, ::BossEventPacket const& packet);

    MCNAPI bool $areBossEventSubscribersReady() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForImplBase();
    // NOLINTEND
};
