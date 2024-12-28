#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
namespace Realms { struct SubscriptionInfo; }
// clang-format on

namespace Realms {

class ISubscriptionApi {
public:
    // prevent constructor by default
    ISubscriptionApi& operator=(ISubscriptionApi const&);
    ISubscriptionApi(ISubscriptionApi const&);
    ISubscriptionApi();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISubscriptionApi();

    // vIndex: 1
    virtual void
        getSubscriptionDetails(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus, ::Realms::SubscriptionInfo)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Realms
