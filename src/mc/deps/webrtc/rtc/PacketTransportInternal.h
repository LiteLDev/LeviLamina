#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class PacketTransportInternal {
public:
    // prevent constructor by default
    PacketTransportInternal& operator=(PacketTransportInternal const&);
    PacketTransportInternal(PacketTransportInternal const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PacketTransportInternal@rtc@@MEAA@XZ
    virtual ~PacketTransportInternal();

    // vIndex: 1, symbol:
    // ?transport_name@DtlsTransport@cricket@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& transport_name() const = 0;

    // vIndex: 2, symbol: ?writable@DtlsTransport@cricket@@UEBA_NXZ
    virtual bool writable() const = 0;

    // vIndex: 3, symbol: ?receiving@DtlsTransport@cricket@@UEBA_NXZ
    virtual bool receiving() const = 0;

    // vIndex: 4, symbol: ?SendPacket@DtlsTransport@cricket@@UEAAHPEBD_KAEBUPacketOptions@rtc@@H@Z
    virtual int SendPacket(char const*, uint64, struct rtc::PacketOptions const&, int) = 0;

    // vIndex: 5, symbol: ?SetOption@DtlsTransport@cricket@@UEAAHW4Option@Socket@rtc@@H@Z
    virtual int SetOption(::rtc::Socket::Option, int) = 0;

    // vIndex: 6, symbol: ?GetOption@PacketTransportInternal@rtc@@UEAA_NW4Option@Socket@2@PEAH@Z
    virtual bool GetOption(::rtc::Socket::Option, int*);

    // vIndex: 7, symbol: ?GetError@DtlsTransport@cricket@@UEAAHXZ
    virtual int GetError() = 0;

    // vIndex: 8, symbol: ?network_route@PacketTransportInternal@rtc@@UEBA?AV?$optional@UNetworkRoute@rtc@@@std@@XZ
    virtual std::optional<struct rtc::NetworkRoute> network_route() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0PacketTransportInternal@rtc@@IEAA@XZ
    MCAPI PacketTransportInternal();

    // NOLINTEND
};

}; // namespace rtc
