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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkdc642f;
    ::ll::UntypedStorage<8, 8>   mUnkaf5e3c;
    ::ll::UntypedStorage<8, 8>   mUnk1bf9fe;
    ::ll::UntypedStorage<8, 520> mUnk906c03;
    // NOLINTEND

public:
    // prevent constructor by default
    DispatchTargets& operator=(DispatchTargets const&);
    DispatchTargets(DispatchTargets const&);
    DispatchTargets();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool loadSubscriptions(::Bedrock::PubSub::Detail::PublisherBase const& publisher);

    MCNAPI ~DispatchTargets();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
