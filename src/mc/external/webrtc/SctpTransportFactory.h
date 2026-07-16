#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SctpTransportFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInternal; }
namespace webrtc { class Environment; }
namespace webrtc { class SctpTransportInternal; }
namespace webrtc { class Thread; }
// clang-format on

namespace webrtc {

class SctpTransportFactory : public ::webrtc::SctpTransportFactoryInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk88d634;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpTransportFactory& operator=(SctpTransportFactory const&);
    SctpTransportFactory(SctpTransportFactory const&);
    SctpTransportFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::webrtc::SctpTransportInternal>
    CreateSctpTransport(::webrtc::Environment const& env, ::webrtc::DtlsTransportInternal* transport) /*override*/;

    virtual ~SctpTransportFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SctpTransportFactory(::webrtc::Thread* network_thread);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Thread* network_thread);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::SctpTransportInternal>
    $CreateSctpTransport(::webrtc::Environment const& env, ::webrtc::DtlsTransportInternal* transport);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
