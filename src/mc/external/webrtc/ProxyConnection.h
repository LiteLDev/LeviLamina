#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Connection.h"
#include "mc/external/webrtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class Environment; }
namespace webrtc { class PortInterface; }
namespace webrtc { struct AsyncSocketPacketOptions; }
// clang-format on

namespace webrtc {

class ProxyConnection : public ::webrtc::Connection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfbba35;
    // NOLINTEND

public:
    // prevent constructor by default
    ProxyConnection& operator=(ProxyConnection const&);
    ProxyConnection(ProxyConnection const&);
    ProxyConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int Send(void const* data, uint64 size, ::webrtc::AsyncSocketPacketOptions const& options) /*override*/;

    virtual int GetError() /*override*/;

    virtual ~ProxyConnection() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProxyConnection(
        ::webrtc::Environment const&               env,
        ::webrtc::WeakPtr<::webrtc::PortInterface> port,
        uint64                                     index,
        ::webrtc::Candidate const&                 remote_candidate
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&               env,
        ::webrtc::WeakPtr<::webrtc::PortInterface> port,
        uint64                                     index,
        ::webrtc::Candidate const&                 remote_candidate
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Send(void const* data, uint64 size, ::webrtc::AsyncSocketPacketOptions const& options);

    MCNAPI int $GetError();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
