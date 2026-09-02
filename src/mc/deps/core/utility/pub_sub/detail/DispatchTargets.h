#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class PublisherBase; }
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class DispatchTargets {
public:
    // DispatchTargets inner types define
    using SSOTargets = ::std::array<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>, 32>;

    using StorageType = ::std::variant<
        ::std::monostate,
        ::std::array<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>, 32>,
        ::std::vector<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>>;

    using StrongTarget = ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>;

    using UnboundedTargets = ::std::vector<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>;

    using WeakTarget = ::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>> mSingleDispatch;
    ::ll::TypedStorage<8, 8, ::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>*>   mMultiDispatchBegin;
    ::ll::TypedStorage<8, 8, ::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>*>   mMultiDispatchEnd;
    ::ll::TypedStorage<
        8,
        520,
        ::std::variant<
            ::std::monostate,
            ::std::array<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>, 32>,
            ::std::vector<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>>>
        mStorage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool loadSubscriptions(::Bedrock::PubSub::Detail::PublisherBase const& publisher);

    MCAPI ~DispatchTargets();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
