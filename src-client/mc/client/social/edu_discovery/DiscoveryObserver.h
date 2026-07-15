#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
namespace EDUDiscovery { struct JoinCode; }
namespace EDUDiscovery { struct ServerInvalidationDetails; }
// clang-format on

namespace EDUDiscovery {

class DiscoveryObserver : public ::Core::Observer<::EDUDiscovery::DiscoveryObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onServerInvalidated(::EDUDiscovery::ServerInvalidationDetails const&);

    virtual void onHeartbeat();

    virtual void onJoinCodeGenerated(::EDUDiscovery::JoinCode const&);

    virtual void onCredentialsInvalidated();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace EDUDiscovery
