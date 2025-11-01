#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SctpTransportFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class SctpTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class Thread; }
namespace webrtc { class Environment; }
// clang-format on

namespace cricket {

class SctpTransportFactory : public ::webrtc::SctpTransportFactoryInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb2f9e2;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpTransportFactory& operator=(SctpTransportFactory const&);
    SctpTransportFactory(SctpTransportFactory const&);
    SctpTransportFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::cricket::SctpTransportInternal>
    CreateSctpTransport(::webrtc::Environment const& env, ::rtc::PacketTransportInternal* transport) /*override*/;

    // vIndex: 0
    virtual ~SctpTransportFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SctpTransportFactory(::rtc::Thread* network_thread);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Thread* network_thread);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::cricket::SctpTransportInternal>
    $CreateSctpTransport(::webrtc::Environment const& env, ::rtc::PacketTransportInternal* transport);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
