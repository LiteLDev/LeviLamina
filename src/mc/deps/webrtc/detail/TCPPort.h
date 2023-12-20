#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/Port.h"
#include "mc/deps/webrtc/detail/PortInterface.h"
#include "mc/deps/webrtc/detail/ProtocolType.h"
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class Port; }
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class TCPPort : public ::cricket::Port {
public:
    // TCPPort inner types declare
    // clang-format off
    struct Incoming;
    // clang-format on

    // TCPPort inner types define
    struct Incoming {
    public:
        // prevent constructor by default
        Incoming& operator=(Incoming const&);
        Incoming(Incoming const&);
        Incoming();

    public:
        // NOLINTBEGIN
        // symbol: ??1Incoming@TCPPort@cricket@@QEAA@XZ
        MCAPI ~Incoming();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TCPPort& operator=(TCPPort const&);
    TCPPort(TCPPort const&);
    TCPPort();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateConnection@TCPPort@cricket@@UEAAPEAVConnection@2@AEBVCandidate@2@W4CandidateOrigin@PortInterface@2@@Z
    MCVAPI class cricket::Connection*
    CreateConnection(class cricket::Candidate const&, ::cricket::PortInterface::CandidateOrigin);

    // symbol: ?GetError@TCPPort@cricket@@UEAAHXZ
    MCVAPI int GetError();

    // symbol: ?GetOption@TCPPort@cricket@@UEAAHW4Option@Socket@rtc@@PEAH@Z
    MCVAPI int GetOption(::rtc::Socket::Option, int*);

    // symbol: ?GetProtocol@TCPPort@cricket@@UEBA?AW4ProtocolType@2@XZ
    MCVAPI ::cricket::ProtocolType GetProtocol() const;

    // symbol: ?OnSentPacket@TCPPort@cricket@@EEAAXPEAVAsyncPacketSocket@rtc@@AEBUSentPacket@4@@Z
    MCVAPI void OnSentPacket(class rtc::AsyncPacketSocket*, struct rtc::SentPacket const&);

    // symbol: ?PrepareAddress@TCPPort@cricket@@UEAAXXZ
    MCVAPI void PrepareAddress();

    // symbol: ?SendTo@TCPPort@cricket@@MEAAHPEBX_KAEBVSocketAddress@rtc@@AEBUPacketOptions@4@_N@Z
    MCVAPI int SendTo(void const*, uint64, class rtc::SocketAddress const&, struct rtc::PacketOptions const&, bool);

    // symbol: ?SetOption@TCPPort@cricket@@UEAAHW4Option@Socket@rtc@@H@Z
    MCVAPI int SetOption(::rtc::Socket::Option, int);

    // symbol: ?SupportsProtocol@TCPPort@cricket@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI bool SupportsProtocol(std::string_view) const;

    // symbol: ??1TCPPort@cricket@@UEAA@XZ
    MCVAPI ~TCPPort();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?OnNewConnection@TCPPort@cricket@@IEAAXPEAVAsyncListenSocket@rtc@@PEAVAsyncPacketSocket@4@@Z
    MCAPI void OnNewConnection(class rtc::AsyncListenSocket*, class rtc::AsyncPacketSocket*);

    // symbol:
    // ??0TCPPort@cricket@@IEAA@PEAVThread@rtc@@PEAVPacketSocketFactory@3@PEBVNetwork@3@GGV?$basic_string_view@DU?$char_traits@D@std@@@std@@3_NPEBVFieldTrialsView@webrtc@@@Z
    MCAPI
    TCPPort(class rtc::Thread*, class rtc::PacketSocketFactory*, class rtc::Network const*, ushort, ushort, std::string_view, std::string_view, bool, class webrtc::FieldTrialsView const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GetIncoming@TCPPort@cricket@@AEAAPEAVAsyncPacketSocket@rtc@@AEBVSocketAddress@4@_N@Z
    MCAPI class rtc::AsyncPacketSocket* GetIncoming(class rtc::SocketAddress const&, bool);

    // symbol: ?OnReadPacket@TCPPort@cricket@@AEAAXPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@AEB_J@Z
    MCAPI void
    OnReadPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64 const&);

    // symbol: ?OnReadyToSend@TCPPort@cricket@@AEAAXPEAVAsyncPacketSocket@rtc@@@Z
    MCAPI void OnReadyToSend(class rtc::AsyncPacketSocket*);

    // symbol: ?TryCreateServerSocket@TCPPort@cricket@@AEAAXXZ
    MCAPI void TryCreateServerSocket();

    // NOLINTEND
};

}; // namespace cricket
