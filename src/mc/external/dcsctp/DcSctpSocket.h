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
    DcSctpSocket& operator=(DcSctpSocket const&);
    DcSctpSocket(DcSctpSocket const&);
    DcSctpSocket();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CloseConnectionBecauseOfTooManyTransmissionErrors();

    MCAPI void CreateTransmissionControlBlock(::dcsctp::Capabilities const&, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, uint64, ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>);

    MCAPI
    DcSctpSocket(::std::string_view, ::dcsctp::DcSctpSocketCallbacks&, ::std::unique_ptr<::dcsctp::PacketObserver>, ::dcsctp::DcSctpOptions const&);

    MCAPI bool Dispatch(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleAbort(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleCookieAck(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleCookieEcho(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI bool HandleCookieEchoWithTCB(::dcsctp::CommonHeader const&, ::dcsctp::StateCookie const&);

    MCAPI void HandleData(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleDataCommon(::dcsctp::AnyDataChunk&);

    MCAPI void HandleError(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleForwardTsn(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleForwardTsnCommon(::dcsctp::AnyForwardTsnChunk const&);

    MCAPI void HandleHeartbeatAck(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleHeartbeatRequest(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleIData(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleIForwardTsn(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleInit(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleInitAck(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleReconfig(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleSack(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleShutdown(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleShutdownAck(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void HandleShutdownComplete(::dcsctp::CommonHeader const&, ::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI bool HandleUnrecognizedChunk(::dcsctp::SctpPacket::ChunkDescriptor const&);

    MCAPI void InternalClose(::dcsctp::ErrorKind, ::std::string_view);

    MCAPI ::dcsctp::SendStatus InternalSend(::dcsctp::DcSctpMessage const&, ::dcsctp::SendOptions const&);

    MCAPI void MaybeDeliverMessages();

    MCAPI void MaybeSendResetStreamsRequest();

    MCAPI void MaybeSendShutdownOnPacketReceived(::dcsctp::SctpPacket const&);

    MCAPI void MaybeSendShutdownOrAck();

    MCAPI ::webrtc::TimeDelta OnCookieTimerExpiry();

    MCAPI ::webrtc::TimeDelta OnInitTimerExpiry();

    MCAPI void OnSentPacket(::rtc::ArrayView<uchar const>, ::dcsctp::SendPacketStatus);

    MCAPI ::webrtc::TimeDelta OnShutdownTimerExpiry();

    MCAPI void ReportFailedToParseChunk(int);

    MCAPI void SendInit();

    MCAPI void SendShutdown();

    MCAPI void SendShutdownAck();

    MCAPI void SetState(::dcsctp::DcSctpSocket::State, ::std::string_view);

    MCAPI bool ValidateHasTCB();

    MCAPI bool ValidatePacket(::dcsctp::SctpPacket const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string_view, ::dcsctp::DcSctpSocketCallbacks&, ::std::unique_ptr<::dcsctp::PacketObserver>, ::dcsctp::DcSctpOptions const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
