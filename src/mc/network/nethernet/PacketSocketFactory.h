#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/BasicPacketSocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class AsyncResolverInterface; }
namespace rtc { class BasicPacketSocketFactory; }
namespace rtc { class SocketAddress; }
namespace rtc { class SocketFactory; }
namespace rtc { struct PacketSocketTcpOptions; }
namespace rtc { struct ProxyInfo; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace NetherNet {

class PacketSocketFactory : public ::rtc::BasicPacketSocketFactory {
public:
    // prevent constructor by default
    PacketSocketFactory& operator=(PacketSocketFactory const&);
    PacketSocketFactory(PacketSocketFactory const&);
    PacketSocketFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PacketSocketFactory@NetherNet@@UEAA@XZ
    virtual ~PacketSocketFactory() = default;

    // vIndex: 4, symbol: ?CreateAsyncResolver@PacketSocketFactory@NetherNet@@UEAAPEAVAsyncResolverInterface@rtc@@XZ
    virtual class rtc::AsyncResolverInterface* CreateAsyncResolver();

    // vIndex: 5, symbol:
    // ?CreateAsyncDnsResolver@PacketSocketFactory@NetherNet@@UEAA?AV?$unique_ptr@VAsyncDnsResolverInterface@webrtc@@U?$default_delete@VAsyncDnsResolverInterface@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: ?Start@AsyncResolver@rtc@@UEAAXAEBVSocketAddress@2@@Z
    virtual void Start(class rtc::SocketAddress const&);

    // symbol: ??0PacketSocketFactory@NetherNet@@QEAA@PEAVSocketFactory@rtc@@PEAVTaskQueueBase@webrtc@@@Z
    MCAPI PacketSocketFactory(class rtc::SocketFactory*, class webrtc::TaskQueueBase*);

    // NOLINTEND
};

}; // namespace NetherNet
