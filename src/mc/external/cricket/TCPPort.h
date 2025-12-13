#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/Port.h"
#include "mc/external/cricket/PortInterface.h"
#include "mc/external/cricket/ProtocolType.h"
#include "mc/external/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class ReceivedPacket; }
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnkdb788b;
        ::ll::UntypedStorage<8, 8>  mUnk830b8d;
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
    ::ll::UntypedStorage<1, 1>  mUnka431b7;
    ::ll::UntypedStorage<8, 8>  mUnk45f3c5;
    ::ll::UntypedStorage<8, 32> mUnke149f9;
    ::ll::UntypedStorage<4, 4>  mUnk8b6604;
    ::ll::UntypedStorage<8, 16> mUnkb0d995;
    // NOLINTEND

public:
    // prevent constructor by default
    TCPPort& operator=(TCPPort const&);
    TCPPort(TCPPort const&);
    TCPPort();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TCPPort() /*override*/;

    virtual ::cricket::Connection* CreateConnection(
        ::cricket::Candidate const&               address,
        ::cricket::PortInterface::CandidateOrigin origin
    ) /*override*/;

    virtual void PrepareAddress() /*override*/;

    virtual int GetOption(::rtc::Socket::Option opt, int* value) /*override*/;

    virtual int SetOption(::rtc::Socket::Option opt, int value) /*override*/;

    virtual int GetError() /*override*/;

    virtual bool SupportsProtocol(::std::string_view protocol) const /*override*/;

    virtual ::cricket::ProtocolType GetProtocol() const /*override*/;

    virtual int SendTo(
        void const*                 data,
        uint64                      size,
        ::rtc::SocketAddress const& addr,
        ::rtc::PacketOptions const& options,
        bool                        payload
    ) /*override*/;

    virtual void OnSentPacket(::rtc::AsyncPacketSocket* socket, ::rtc::SentPacket const& sent_packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::AsyncPacketSocket* GetIncoming(::rtc::SocketAddress const& addr, bool remove);

    MCNAPI void OnNewConnection(::rtc::AsyncListenSocket* socket, ::rtc::AsyncPacketSocket* new_socket);

    MCNAPI void OnReadPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    MCNAPI void OnReadyToSend(::rtc::AsyncPacketSocket* socket);

    MCNAPI TCPPort(
        ::rtc::Thread*                   thread,
        ::rtc::PacketSocketFactory*      factory,
        ::rtc::Network const*            network,
        ushort                           min_port,
        ushort                           max_port,
        ::std::string_view               username,
        ::std::string_view               password,
        bool                             allow_listen,
        ::webrtc::FieldTrialsView const* field_trials
    );

    MCNAPI void TryCreateServerSocket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::Thread*                   thread,
        ::rtc::PacketSocketFactory*      factory,
        ::rtc::Network const*            network,
        ushort                           min_port,
        ushort                           max_port,
        ::std::string_view               username,
        ::std::string_view               password,
        bool                             allow_listen,
        ::webrtc::FieldTrialsView const* field_trials
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::Connection*
    $CreateConnection(::cricket::Candidate const& address, ::cricket::PortInterface::CandidateOrigin origin);

    MCNAPI void $PrepareAddress();

    MCNAPI int $GetOption(::rtc::Socket::Option opt, int* value);

    MCNAPI int $SetOption(::rtc::Socket::Option opt, int value);

    MCNAPI int $GetError();

    MCNAPI bool $SupportsProtocol(::std::string_view protocol) const;

    MCNAPI ::cricket::ProtocolType $GetProtocol() const;

    MCNAPI int $SendTo(
        void const*                 data,
        uint64                      size,
        ::rtc::SocketAddress const& addr,
        ::rtc::PacketOptions const& options,
        bool                        payload
    );

    MCNAPI void $OnSentPacket(::rtc::AsyncPacketSocket* socket, ::rtc::SentPacket const& sent_packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPortInterface();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace cricket
