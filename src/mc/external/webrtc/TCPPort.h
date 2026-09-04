#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Port.h"
#include "mc/external/webrtc/PortInterface.h"
#include "mc/external/webrtc/ProtocolType.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncListenSocket; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Candidate; }
namespace webrtc { class Connection; }
namespace webrtc { class SocketAddress; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct SentPacketInfo; }
// clang-format on

namespace webrtc {

class TCPPort : public ::webrtc::Port {
public:
    // TCPPort inner types declare
    // clang-format off
    struct Incoming;
    // clang-format on

    // TCPPort inner types define
    struct Incoming {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk46fed4;
        ::ll::UntypedStorage<8, 8>  mUnkc345b2;
        // NOLINTEND

    public:
        // prevent constructor by default
        Incoming& operator=(Incoming const&);
        Incoming(Incoming const&);
        Incoming();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Incoming();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf9ba3b;
    ::ll::UntypedStorage<8, 8>  mUnke1896a;
    ::ll::UntypedStorage<8, 32> mUnk3bad36;
    ::ll::UntypedStorage<4, 4>  mUnk8c961f;
    ::ll::UntypedStorage<8, 16> mUnk7b2cd3;
    // NOLINTEND

public:
    // prevent constructor by default
    TCPPort& operator=(TCPPort const&);
    TCPPort(TCPPort const&);
    TCPPort();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TCPPort() /*override*/ = default;

    virtual ::webrtc::Connection*
    CreateConnection(::webrtc::Candidate const& address, ::webrtc::PortInterface::CandidateOrigin origin) /*override*/;

    virtual void PrepareAddress() /*override*/;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) /*override*/;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual int GetError() /*override*/;

    virtual bool SupportsProtocol(::std::string_view protocol) const /*override*/;

    virtual ::webrtc::ProtocolType GetProtocol() const /*override*/;

    virtual int SendTo(
        void const*                               data,
        uint64                                    size,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options,
        bool                                      payload
    ) /*override*/;

    virtual void
    OnSentPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::SentPacketInfo const& sent_packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::AsyncPacketSocket* GetIncoming(::webrtc::SocketAddress const& addr, bool remove);

    MCNAPI void OnNewConnection(::webrtc::AsyncListenSocket* socket, ::webrtc::AsyncPacketSocket* new_socket);

    MCNAPI void OnReadyToSend(::webrtc::AsyncPacketSocket* socket);

    MCNAPI TCPPort(::webrtc::Port::PortParametersRef const& args, ushort min_port, ushort max_port, bool allow_listen);

    MCNAPI void TryCreateServerSocket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::Port::PortParametersRef const& args, ushort min_port, ushort max_port, bool allow_listen);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::Connection*
    $CreateConnection(::webrtc::Candidate const& address, ::webrtc::PortInterface::CandidateOrigin origin);

    MCNAPI void $PrepareAddress();

    MCNAPI int $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI int $SetOption(::webrtc::Socket::Option opt, int value);

    MCNAPI int $GetError();

    MCNAPI bool $SupportsProtocol(::std::string_view protocol) const;

    MCNAPI ::webrtc::ProtocolType $GetProtocol() const;

    MCNAPI int $SendTo(
        void const*                               data,
        uint64                                    size,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options,
        bool                                      payload
    );

    MCNAPI void $OnSentPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::SentPacketInfo const& sent_packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPortInterface();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
