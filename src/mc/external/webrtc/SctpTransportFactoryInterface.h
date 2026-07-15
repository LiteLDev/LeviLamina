#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInternal; }
namespace webrtc { class Environment; }
namespace webrtc { class SctpTransportInternal; }
// clang-format on

namespace webrtc {

class SctpTransportFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SctpTransportFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::SctpTransportInternal>
    CreateSctpTransport(::webrtc::Environment const& env, ::webrtc::DtlsTransportInternal* transport) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
