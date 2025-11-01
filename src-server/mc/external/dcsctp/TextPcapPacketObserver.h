#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/PacketObserver.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TimeMs; }
// clang-format on

namespace dcsctp {

class TextPcapPacketObserver : public ::dcsctp::PacketObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk61d6a5;
    // NOLINTEND

public:
    // prevent constructor by default
    TextPcapPacketObserver& operator=(TextPcapPacketObserver const&);
    TextPcapPacketObserver(TextPcapPacketObserver const&);
    TextPcapPacketObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void OnSentPacket(::dcsctp::TimeMs now, ::rtc::ArrayView<uchar const> payload) /*override*/;

    // vIndex: 2
    virtual void OnReceivedPacket(::dcsctp::TimeMs now, ::rtc::ArrayView<uchar const> payload) /*override*/;

    // vIndex: 0
    virtual ~TextPcapPacketObserver() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void PrintPacket(::std::string_view prefix, ::std::string_view socket_name, ::dcsctp::TimeMs now, ::rtc::ArrayView<uchar const> payload);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSentPacket(::dcsctp::TimeMs now, ::rtc::ArrayView<uchar const> payload);

    MCNAPI void $OnReceivedPacket(::dcsctp::TimeMs now, ::rtc::ArrayView<uchar const> payload);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
