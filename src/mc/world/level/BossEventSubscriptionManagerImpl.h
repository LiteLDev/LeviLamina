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
        ::Bedrock::PubSub::Publisher<void(::BossEventUpdateType), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mOnBossEvent;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mOnBossEventWithPacket;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(::std::function<void(::BossEventUpdateType)> callback
    ) /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(
        ::std::function<void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&)> callback
    ) /*override*/;

    // vIndex: 4
    virtual void broadcastBossEvent(::BossEventUpdateType type) /*override*/;

    // vIndex: 3
    virtual void broadcastBossEvent(
        ::BossEventUpdateType    type,
        ::ActorUniqueID const&   id,
        ::BossEventPacket const& packet
    ) /*override*/;

    // vIndex: 5
    virtual bool areBossEventSubscribersReady() const /*override*/;

    // vIndex: 0
    virtual ~BossEventSubscriptionManagerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BossEventSubscriptionManagerImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Subscription $subscribeToBossEvent(::std::function<void(::BossEventUpdateType)> callback);

    MCAPI ::Bedrock::PubSub::Subscription $subscribeToBossEvent(
        ::std::function<void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&)> callback
    );

    MCAPI void $broadcastBossEvent(::BossEventUpdateType type);

    MCAPI void
    $broadcastBossEvent(::BossEventUpdateType type, ::ActorUniqueID const& id, ::BossEventPacket const& packet);

    MCAPI bool $areBossEventSubscribersReady() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForImplBase();
    // NOLINTEND
};
