#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/ErrorKind.h"
#include "mc/external/dcsctp/SctpPacket.h"
#include "mc/external/dcsctp/SendPacketStatus.h"
#include "mc/external/dcsctp/SendStatus.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class AnyDataChunk; }
namespace dcsctp { class AnyForwardTsnChunk; }
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class PacketObserver; }
namespace dcsctp { class SctpPacket; }
namespace dcsctp { class StateCookie; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class TieTagTag; }
namespace dcsctp { class VerificationTagTag; }
namespace dcsctp { struct Capabilities; }
namespace dcsctp { struct CommonHeader; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct SendOptions; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class DcSctpSocket {
public:
    // DcSctpSocket inner types define
    enum class State : uint {};

public:
    // prevent constructor by default
    DcSctpSocket();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CloseConnectionBecauseOfTooManyTransmissionErrors();

    MCNAPI void CreateTransmissionControlBlock(
        ::dcsctp::Capabilities const&,
        ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>,
        ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>,
        uint64,
        ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>
    );

    MCNAPI DcSctpSocket(
        ::std::string_view,
        ::dcsctp::DcSctpSocketCallbacks&,
        ::std::unique_ptr<::dcsctp::PacketObserver>,
        ::dcsctp::DcSctpOptions const&
    );

    MCNAPI bool Dispatch(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleAbort(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleCookieAck(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleCookieEcho(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI bool HandleCookieEchoWithTCB(::dcsctp::CommonHeader const&, ::dcsctp::StateCookie const&);

    MCNAPI void HandleData(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleDataCommon(::dcsctp::AnyDataChunk&);

    MCNAPI void HandleError(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleForwardTsn(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleForwardTsnCommon(::dcsctp::AnyForwardTsnChunk const&);

    MCNAPI void HandleHeartbeatAck(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleHeartbeatRequest(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleIData(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleIForwardTsn(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleInit(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleInitAck(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleReconfig(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleSack(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleShutdown(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleShutdownAck(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void HandleShutdownComplete(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI bool HandleUnrecognizedChunk(::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCNAPI void InternalClose(::dcsctp::ErrorKind, ::std::string_view);

    MCNAPI ::dcsctp::SendStatus InternalSend(::dcsctp::DcSctpMessage const&, ::dcsctp::SendOptions const&);

    MCNAPI void MaybeDeliverMessages();

    MCNAPI void MaybeSendResetStreamsRequest();

    MCNAPI void MaybeSendShutdownOnPacketReceived(::dcsctp::SctpPacket const&);

    MCNAPI void MaybeSendShutdownOrAck();

    MCNAPI ::webrtc::TimeDelta OnCookieTimerExpiry();

    MCNAPI ::webrtc::TimeDelta OnInitTimerExpiry();

    MCNAPI void OnSentPacket(::rtc::ArrayView<uchar const>, ::dcsctp::SendPacketStatus);

    MCNAPI ::webrtc::TimeDelta OnShutdownTimerExpiry();

    MCNAPI void ReportFailedToParseChunk(int);

    MCNAPI void SendInit();

    MCNAPI void SendShutdown();

    MCNAPI void SendShutdownAck();

    MCNAPI void SetState(::dcsctp::DcSctpSocket::State, ::std::string_view);

    MCNAPI bool ValidateHasTCB();

    MCNAPI bool ValidatePacket(::dcsctp::SctpPacket const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view,
        ::dcsctp::DcSctpSocketCallbacks&,
        ::std::unique_ptr<::dcsctp::PacketObserver>,
        ::dcsctp::DcSctpOptions const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
