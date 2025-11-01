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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
