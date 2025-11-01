#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/Connection.h"
#include "mc/external/rtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class PortInterface; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace cricket {

class ProxyConnection : public ::cricket::Connection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk494517;
    // NOLINTEND

public:
    // prevent constructor by default
    ProxyConnection& operator=(ProxyConnection const&);
    ProxyConnection(ProxyConnection const&);
    ProxyConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual int Send(void const* data, uint64 len, ::rtc::PacketOptions const& options) /*override*/;

    // vIndex: 7
    virtual int GetError() /*override*/;

    // vIndex: 0
    virtual ~ProxyConnection() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProxyConnection(::rtc::WeakPtr<::cricket::PortInterface> port, uint64 index, ::cricket::Candidate const& remote_candidate);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::WeakPtr<::cricket::PortInterface> port, uint64 index, ::cricket::Candidate const& remote_candidate);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Send(void const* data, uint64 len, ::rtc::PacketOptions const& options);

    MCNAPI int $GetError();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
