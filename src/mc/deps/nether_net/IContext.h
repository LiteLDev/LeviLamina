#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class LanThreadManager; }
namespace NetherNet { class RtcThreadManager; }
namespace NetherNet { struct NetherNetTransportGlobalConfiguration; }
// clang-format on

namespace NetherNet {

class IContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContext() /*override*/ = default;

    // vIndex: 1
    virtual ::NetherNet::RtcThreadManager const& getSignalThread() const = 0;

    // vIndex: 2
    virtual ::NetherNet::RtcThreadManager const& getNetworkThread() const = 0;

    // vIndex: 3
    virtual ::NetherNet::RtcThreadManager const& getWorkerThread() const = 0;

    // vIndex: 4
    virtual ::NetherNet::LanThreadManager& getLanThread() = 0;

    // vIndex: 5
    virtual ::NetherNet::NetherNetTransportGlobalConfiguration const& getGlobalConfig() const = 0;

    // vIndex: 6
    virtual void _logMessage(::NetherNet::LogSeverity, char const*, char*) const = 0;

    // vIndex: 7
    virtual void setLoggingLevel(::NetherNet::LogSeverity) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void logMessage(::NetherNet::LogSeverity, char const*, ...) const;
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

} // namespace NetherNet
