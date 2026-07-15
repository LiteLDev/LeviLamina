#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/PacketObserver.h"
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TimeMs; }
// clang-format on

namespace dcsctp {

class TextPcapPacketObserver : public ::dcsctp::PacketObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk582332;
    // NOLINTEND

public:
    // prevent constructor by default
    TextPcapPacketObserver& operator=(TextPcapPacketObserver const&);
    TextPcapPacketObserver(TextPcapPacketObserver const&);
    TextPcapPacketObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    OnSentPacket(::dcsctp::TimeMs now, ::webrtc::ArrayView<uchar const, 18446744073709546905> payload) /*override*/;

    virtual void
    OnReceivedPacket(::dcsctp::TimeMs now, ::webrtc::ArrayView<uchar const, 18446744073709546905> payload) /*override*/;

    virtual ~TextPcapPacketObserver() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void PrintPacket(
        ::std::string_view                                     prefix,
        ::std::string_view                                     socket_name,
        ::dcsctp::TimeMs                                       now,
        ::webrtc::ArrayView<uchar const, 18446744073709546905> payload
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSentPacket(::dcsctp::TimeMs now, ::webrtc::ArrayView<uchar const, 18446744073709546905> payload);

    MCNAPI void $OnReceivedPacket(::dcsctp::TimeMs now, ::webrtc::ArrayView<uchar const, 18446744073709546905> payload);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
