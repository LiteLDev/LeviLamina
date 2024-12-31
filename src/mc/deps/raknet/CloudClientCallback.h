#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct CloudQueryResult; }
namespace RakNet { struct CloudQueryRow; }
// clang-format on

namespace RakNet {

class CloudClientCallback {
public:
    // prevent constructor by default
    CloudClientCallback& operator=(CloudClientCallback const&);
    CloudClientCallback(CloudClientCallback const&);
    CloudClientCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CloudClientCallback() = default;

    // vIndex: 1
    virtual void OnGet(::RakNet::CloudQueryResult*, bool*);

    // vIndex: 2
    virtual void OnSubscriptionNotification(::RakNet::CloudQueryRow*, bool, bool*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
