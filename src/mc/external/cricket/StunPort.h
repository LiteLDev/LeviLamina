#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class StunPort {
public:
    // prevent constructor by default
    StunPort();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    StunPort(::rtc::Thread*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, ::std::set<::rtc::SocketAddress> const&, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::
        unique_ptr<::cricket::StunPort>
        Create(::rtc::Thread*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, ::std::set<::rtc::SocketAddress> const&, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&, ::std::optional<int>, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::rtc::Thread*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, ::std::set<::rtc::SocketAddress> const&, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForPortInterface();
    // NOLINTEND
};

} // namespace cricket
