#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
namespace EduDiscovery { struct JoinCode; }
namespace EduDiscovery { struct ServerInvalidationDetails; }
// clang-format on

namespace EduDiscovery {

class DiscoveryObserver : public ::Core::Observer<::EduDiscovery::DiscoveryObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onServerInvalidated(::EduDiscovery::ServerInvalidationDetails const&);

    virtual void onHeartbeat();

    virtual void onJoinCodeGenerated(::EduDiscovery::JoinCode const&);

    virtual void onCredentialsInvalidated();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onHeartbeat();
    // NOLINTEND
};

} // namespace EduDiscovery
