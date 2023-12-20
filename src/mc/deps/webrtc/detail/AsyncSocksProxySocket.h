#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/BufferedReadAdapter.h"
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class BufferedReadAdapter; }
namespace rtc { class CryptString; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncSocksProxySocket : public ::rtc::BufferedReadAdapter {
public:
    // prevent constructor by default
    AsyncSocksProxySocket& operator=(AsyncSocksProxySocket const&);
    AsyncSocksProxySocket(AsyncSocksProxySocket const&);
    AsyncSocksProxySocket();

public:
    // NOLINTBEGIN
    // symbol: ?Close@AsyncSocksProxySocket@rtc@@UEAAHXZ
    MCVAPI int Close();

    // symbol: ?Connect@AsyncSocksProxySocket@rtc@@UEAAHAEBVSocketAddress@2@@Z
    MCVAPI int Connect(class rtc::SocketAddress const&);

    // symbol: ?GetRemoteAddress@AsyncSocksProxySocket@rtc@@UEBA?AVSocketAddress@2@XZ
    MCVAPI class rtc::SocketAddress GetRemoteAddress() const;

    // symbol: ?GetState@AsyncSocksProxySocket@rtc@@UEBA?AW4ConnState@Socket@2@XZ
    MCVAPI ::rtc::Socket::ConnState GetState() const;

    // symbol: ?OnConnectEvent@AsyncSocksProxySocket@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnConnectEvent(class rtc::Socket*);

    // symbol: ?ProcessInput@AsyncSocksProxySocket@rtc@@MEAAXPEADPEA_K@Z
    MCVAPI void ProcessInput(char*, uint64*);

    // symbol: ??1AsyncSocksProxySocket@rtc@@UEAA@XZ
    MCVAPI ~AsyncSocksProxySocket();

    // symbol:
    // ??0AsyncSocksProxySocket@rtc@@QEAA@PEAVSocket@1@AEBVSocketAddress@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVCryptString@1@@Z
    MCAPI
    AsyncSocksProxySocket(class rtc::Socket*, class rtc::SocketAddress const&, std::string_view, class rtc::CryptString const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?Error@AsyncSocksProxySocket@rtc@@IEAAXH@Z
    MCAPI void Error(int);

    // symbol: ?SendAuth@AsyncSocksProxySocket@rtc@@IEAAXXZ
    MCAPI void SendAuth();

    // symbol: ?SendConnect@AsyncSocksProxySocket@rtc@@IEAAXXZ
    MCAPI void SendConnect();

    // symbol: ?SendHello@AsyncSocksProxySocket@rtc@@IEAAXXZ
    MCAPI void SendHello();

    // NOLINTEND
};

}; // namespace rtc
