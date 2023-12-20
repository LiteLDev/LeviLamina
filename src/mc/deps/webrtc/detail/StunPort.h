#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/UDPPort.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class UDPPort; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class StunPort : public ::cricket::UDPPort {
public:
    // prevent constructor by default
    StunPort& operator=(StunPort const&);
    StunPort(StunPort const&);
    StunPort();

public:
    // NOLINTBEGIN
    // symbol: ?PrepareAddress@StunPort@cricket@@UEAAXXZ
    MCVAPI void PrepareAddress();

    // symbol:
    // ?Create@StunPort@cricket@@SA?AV?$unique_ptr@VStunPort@cricket@@U?$default_delete@VStunPort@cricket@@@std@@@std@@PEAVThread@rtc@@PEAVPacketSocketFactory@6@PEBVNetwork@6@GGV?$basic_string_view@DU?$char_traits@D@std@@@4@3AEBV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@4@V?$optional@H@4@PEBVFieldTrialsView@webrtc@@@Z
    MCAPI static std::unique_ptr<class cricket::StunPort>
    Create(class rtc::Thread*, class rtc::PacketSocketFactory*, class rtc::Network const*, ushort, ushort, std::string_view, std::string_view, std::set<class rtc::SocketAddress> const&, std::optional<int>, class webrtc::FieldTrialsView const*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0StunPort@cricket@@IEAA@PEAVThread@rtc@@PEAVPacketSocketFactory@3@PEBVNetwork@3@GGV?$basic_string_view@DU?$char_traits@D@std@@@std@@3AEBV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@7@PEBVFieldTrialsView@webrtc@@@Z
    MCAPI
    StunPort(class rtc::Thread*, class rtc::PacketSocketFactory*, class rtc::Network const*, ushort, ushort, std::string_view, std::string_view, std::set<class rtc::SocketAddress> const&, class webrtc::FieldTrialsView const*);

    // NOLINTEND
};

}; // namespace cricket
