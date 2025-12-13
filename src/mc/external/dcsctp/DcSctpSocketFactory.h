#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class DcSctpSocketInterface; }
namespace dcsctp { class PacketObserver; }
namespace dcsctp { struct DcSctpOptions; }
// clang-format on

namespace dcsctp {

class DcSctpSocketFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DcSctpSocketFactory();

    // vIndex: 1
    virtual ::std::unique_ptr<::dcsctp::DcSctpSocketInterface> Create(
        ::std::string_view                          log_prefix,
        ::dcsctp::DcSctpSocketCallbacks&            callbacks,
        ::std::unique_ptr<::dcsctp::PacketObserver> packet_observer,
        ::dcsctp::DcSctpOptions const&              options
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::dcsctp::DcSctpSocketInterface> $Create(
        ::std::string_view                          log_prefix,
        ::dcsctp::DcSctpSocketCallbacks&            callbacks,
        ::std::unique_ptr<::dcsctp::PacketObserver> packet_observer,
        ::dcsctp::DcSctpOptions const&              options
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
