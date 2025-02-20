#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/IContext.h"
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class LanThreadManager; }
namespace NetherNet { class RtcThreadManager; }
namespace NetherNet { struct NetherNetTransportGlobalConfiguration; }
// clang-format on

namespace NetherNet {

class ContextProxy : public ::NetherNet::IContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkaedcad;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextProxy& operator=(ContextProxy const&);
    ContextProxy(ContextProxy const&);
    ContextProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContextProxy() /*override*/;

    // vIndex: 1
    virtual ::NetherNet::RtcThreadManager const& getSignalThread() const /*override*/;

    // vIndex: 2
    virtual ::NetherNet::RtcThreadManager const& getNetworkThread() const /*override*/;

    // vIndex: 3
    virtual ::NetherNet::RtcThreadManager const& getWorkerThread() const /*override*/;

    // vIndex: 4
    virtual ::NetherNet::LanThreadManager& getLanThread() /*override*/;

    // vIndex: 5
    virtual ::NetherNet::NetherNetTransportGlobalConfiguration const& getGlobalConfig() const /*override*/;

    // vIndex: 7
    virtual void setLoggingLevel(::NetherNet::LogSeverity min) /*override*/;

    // vIndex: 6
    virtual void _logMessage(::NetherNet::LogSeverity level, char const* fmt, char* args) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::NetherNet::RtcThreadManager const& $getSignalThread() const;

    MCAPI ::NetherNet::RtcThreadManager const& $getNetworkThread() const;

    MCAPI ::NetherNet::RtcThreadManager const& $getWorkerThread() const;

    MCAPI ::NetherNet::LanThreadManager& $getLanThread();

    MCAPI ::NetherNet::NetherNetTransportGlobalConfiguration const& $getGlobalConfig() const;

    MCAPI void $setLoggingLevel(::NetherNet::LogSeverity min);

    MCAPI void $_logMessage(::NetherNet::LogSeverity level, char const* fmt, char* args) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
