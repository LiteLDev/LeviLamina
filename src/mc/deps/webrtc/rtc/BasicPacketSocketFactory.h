#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/PacketSocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class AsyncResolverInterface; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { class SocketFactory; }
namespace rtc { struct PacketSocketTcpOptions; }
namespace rtc { struct ProxyInfo; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

namespace rtc {

class BasicPacketSocketFactory : public ::rtc::PacketSocketFactory {
public:
    // prevent constructor by default
    BasicPacketSocketFactory& operator=(BasicPacketSocketFactory const&);
    BasicPacketSocketFactory(BasicPacketSocketFactory const&);
    BasicPacketSocketFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasicPacketSocketFactory@rtc@@UEAA@XZ
    virtual ~BasicPacketSocketFactory();

    // vIndex: 1, symbol:
    // ?CreateUdpSocket@BasicPacketSocketFactory@rtc@@UEAAPEAVAsyncPacketSocket@2@AEBVSocketAddress@2@GG@Z
    virtual class rtc::AsyncPacketSocket* CreateUdpSocket(class rtc::SocketAddress const&, ushort, ushort);

    // vIndex: 2, symbol:
    // ?CreateServerTcpSocket@BasicPacketSocketFactory@rtc@@UEAAPEAVAsyncListenSocket@2@AEBVSocketAddress@2@GGH@Z
    virtual class rtc::AsyncListenSocket* CreateServerTcpSocket(class rtc::SocketAddress const&, ushort, ushort, int);

    // vIndex: 3, symbol:
    // ?CreateClientTcpSocket@BasicPacketSocketFactory@rtc@@UEAAPEAVAsyncPacketSocket@2@AEBVSocketAddress@2@0AEBUProxyInfo@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUPacketSocketTcpOptions@2@@Z
    virtual class rtc::AsyncPacketSocket*
    CreateClientTcpSocket(class rtc::SocketAddress const&, class rtc::SocketAddress const&, struct rtc::ProxyInfo const&, std::string const&, struct rtc::PacketSocketTcpOptions const&);

    // vIndex: 4, symbol: ?CreateAsyncResolver@BasicPacketSocketFactory@rtc@@UEAAPEAVAsyncResolverInterface@2@XZ
    virtual class rtc::AsyncResolverInterface* CreateAsyncResolver();

    // vIndex: 5, symbol:
    // ?CreateAsyncDnsResolver@BasicPacketSocketFactory@rtc@@UEAA?AV?$unique_ptr@VAsyncDnsResolverInterface@webrtc@@U?$default_delete@VAsyncDnsResolverInterface@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver();

    // symbol: ??0BasicPacketSocketFactory@rtc@@QEAA@PEAVSocketFactory@1@@Z
    MCAPI explicit BasicPacketSocketFactory(class rtc::SocketFactory*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?BindSocket@BasicPacketSocketFactory@rtc@@AEAAHPEAVSocket@2@AEBVSocketAddress@2@GG@Z
    MCAPI int BindSocket(class rtc::Socket*, class rtc::SocketAddress const&, ushort, ushort);

    // NOLINTEND
};

}; // namespace rtc
