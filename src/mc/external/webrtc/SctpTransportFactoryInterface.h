#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class SctpTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace webrtc { class Environment; }
// clang-format on

namespace webrtc {

class SctpTransportFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SctpTransportFactoryInterface() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::cricket::SctpTransportInternal>
    CreateSctpTransport(::webrtc::Environment const&, ::rtc::PacketTransportInternal*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
