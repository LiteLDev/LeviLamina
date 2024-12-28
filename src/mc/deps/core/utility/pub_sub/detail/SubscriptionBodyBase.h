#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/SubscriptionContext.h"
#include "mc/deps/core/utility/pub_sub/detail/PublisherDisconnector.h"

// auto generated inclusion list
#include "mc/deps/core/container/list_base_hook.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub { class SubscriptionContext; }
namespace Bedrock::PubSub::Detail { class PublisherDisconnector; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class SubscriptionBodyBase
: public ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase> {
public:
    // SubscriptionBodyBase inner types declare
    // clang-format off
    struct CompareEntries;
    // clang-format on

    // SubscriptionBodyBase inner types define
    using ListHookType = ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>;

    using SubscriptionType = ::Bedrock::PubSub::Subscription;

    struct CompareEntries {
    public:
        // prevent constructor by default
        CompareEntries& operator=(CompareEntries const&);
        CompareEntries(CompareEntries const&);
        CompareEntries();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>> mStrongSelf;
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Detail::PublisherDisconnector*>                   mDisconnector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PubSub::SubscriptionContext>>           mContext;
    ::ll::TypedStorage<4, 4, int>                                                                 mGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionBodyBase& operator=(SubscriptionBodyBase const&);
    SubscriptionBodyBase(SubscriptionBodyBase const&);
    SubscriptionBodyBase();

    SubscriptionBodyBase* mNext; // this+0x0
    SubscriptionBodyBase* mPrev; // this+0x8

    std::shared_ptr<SubscriptionBodyBase>                 mStrongSelf;   // this+0x18
    PublisherDisconnector*                                mDisconnector; // this+0x28
    std::unique_ptr<Bedrock::PubSub::SubscriptionContext> mContext;      // this+0x30
    int                                                   mGroup;        // this+0x38
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubscriptionBodyBase();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SubscriptionBodyBase(::std::unique_ptr<::Bedrock::PubSub::SubscriptionContext>&& context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::Bedrock::PubSub::SubscriptionContext>&& context);
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

} // namespace Bedrock::PubSub::Detail
