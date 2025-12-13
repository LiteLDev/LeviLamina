#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/IContext.h"
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class ILanDiscovery; }
namespace NetherNet { class RtcThreadManager; }
namespace NetherNet { struct GlobalConfiguration; }
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
    virtual ~ContextProxy() /*override*/;

    virtual ::NetherNet::RtcThreadManager const& getSignalThread() const /*override*/;

    virtual ::NetherNet::RtcThreadManager const& getNetworkThread() const /*override*/;

    virtual ::NetherNet::RtcThreadManager const& getWorkerThread() const /*override*/;

    virtual ::NetherNet::ILanDiscovery& getLanDiscovery() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onResume() /*override*/;

    virtual ::NetherNet::GlobalConfiguration const& getGlobalConfig() const /*override*/;

    virtual void setLoggingLevel(::NetherNet::LogSeverity min) /*override*/;

    virtual void _logMessage(::NetherNet::LogSeverity level, char const* fmt, char* args) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::NetherNet::RtcThreadManager const& $getSignalThread() const;

    MCNAPI ::NetherNet::RtcThreadManager const& $getNetworkThread() const;

    MCNAPI ::NetherNet::RtcThreadManager const& $getWorkerThread() const;

    MCNAPI ::NetherNet::ILanDiscovery& $getLanDiscovery();

    MCNAPI void $onSuspend();

    MCNAPI void $onResume();

    MCNAPI ::NetherNet::GlobalConfiguration const& $getGlobalConfig() const;

    MCNAPI void $setLoggingLevel(::NetherNet::LogSeverity min);

    MCNAPI void $_logMessage(::NetherNet::LogSeverity level, char const* fmt, char* args) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
