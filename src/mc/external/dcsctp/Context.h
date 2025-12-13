#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/SctpPacket.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class TSNTag; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class Context {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Context() = default;

    virtual bool is_connection_established() const = 0;

    virtual ::webrtc::StrongAlias<::dcsctp::TSNTag, uint> my_initial_tsn() const = 0;

    virtual ::webrtc::StrongAlias<::dcsctp::TSNTag, uint> peer_initial_tsn() const = 0;

    virtual ::dcsctp::DcSctpSocketCallbacks& callbacks() const = 0;

    virtual void ObserveRTT(::webrtc::TimeDelta) = 0;

    virtual ::webrtc::TimeDelta current_rto() const = 0;

    virtual bool IncrementTxErrorCounter(::std::string_view) = 0;

    virtual void ClearTxErrorCounter() = 0;

    virtual bool HasTooManyTxErrors() const = 0;

    virtual ::dcsctp::SctpPacket::Builder PacketBuilder() const = 0;

    virtual void Send(::dcsctp::SctpPacket::Builder&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
