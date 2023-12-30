#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/BufferedReadAdapter.h"
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class BufferedReadAdapter; }
namespace rtc { class CryptString; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncHttpsProxySocket : public ::rtc::BufferedReadAdapter {
public:
    // prevent constructor by default
    AsyncHttpsProxySocket& operator=(AsyncHttpsProxySocket const&);
    AsyncHttpsProxySocket(AsyncHttpsProxySocket const&);
    AsyncHttpsProxySocket();

public:
    // NOLINTBEGIN
    // symbol: ?Close@AsyncHttpsProxySocket@rtc@@UEAAHXZ
    MCVAPI int Close();

    // symbol: ?Connect@AsyncHttpsProxySocket@rtc@@UEAAHAEBVSocketAddress@2@@Z
    MCVAPI int Connect(class rtc::SocketAddress const&);

    // symbol: ?GetRemoteAddress@AsyncHttpsProxySocket@rtc@@UEBA?AVSocketAddress@2@XZ
    MCVAPI class rtc::SocketAddress GetRemoteAddress() const;

    // symbol: ?GetState@AsyncHttpsProxySocket@rtc@@UEBA?AW4ConnState@Socket@2@XZ
    MCVAPI ::rtc::Socket::ConnState GetState() const;

    // symbol: ?OnCloseEvent@AsyncHttpsProxySocket@rtc@@MEAAXPEAVSocket@2@H@Z
    MCVAPI void OnCloseEvent(class rtc::Socket*, int);

    // symbol: ?OnConnectEvent@AsyncHttpsProxySocket@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnConnectEvent(class rtc::Socket*);

    // symbol: ?ProcessInput@AsyncHttpsProxySocket@rtc@@MEAAXPEADPEA_K@Z
    MCVAPI void ProcessInput(char*, uint64*);

    // symbol: ??1AsyncHttpsProxySocket@rtc@@UEAA@XZ
    MCVAPI ~AsyncHttpsProxySocket();

    // symbol:
    // ??0AsyncHttpsProxySocket@rtc@@QEAA@PEAVSocket@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVSocketAddress@1@1AEBVCryptString@1@@Z
    MCAPI
    AsyncHttpsProxySocket(class rtc::Socket*, std::string_view, class rtc::SocketAddress const&, std::string_view, class rtc::CryptString const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?EndResponse@AsyncHttpsProxySocket@rtc@@IEAAXXZ
    MCAPI void EndResponse();

    // symbol: ?Error@AsyncHttpsProxySocket@rtc@@IEAAXH@Z
    MCAPI void Error(int);

    // symbol: ?ProcessLine@AsyncHttpsProxySocket@rtc@@IEAAXPEAD_K@Z
    MCAPI void ProcessLine(char*, uint64);

    // symbol: ?SendRequest@AsyncHttpsProxySocket@rtc@@IEAAXXZ
    MCAPI void SendRequest();

    // symbol: ?ShouldIssueConnect@AsyncHttpsProxySocket@rtc@@IEBA_NXZ
    MCAPI bool ShouldIssueConnect() const;

    // NOLINTEND
};

}; // namespace rtc
