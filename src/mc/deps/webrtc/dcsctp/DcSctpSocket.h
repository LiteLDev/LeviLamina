#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/dcsctp/DcSctpSocketInterface.h"
#include "mc/deps/webrtc/dcsctp/ErrorKind.h"
#include "mc/deps/webrtc/dcsctp/ResetStreamsStatus.h"
#include "mc/deps/webrtc/dcsctp/SctpImplementation.h"
#include "mc/deps/webrtc/dcsctp/SctpPacket.h"
#include "mc/deps/webrtc/dcsctp/SendPacketStatus.h"
#include "mc/deps/webrtc/dcsctp/SendStatus.h"
#include "mc/deps/webrtc/dcsctp/SocketState.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class AnyDataChunk; }
namespace dcsctp { class AnyForwardTsnChunk; }
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class DcSctpSocketInterface; }
namespace dcsctp { class DurationMs; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class PacketObserver; }
namespace dcsctp { class SctpPacket; }
namespace dcsctp { class StateCookie; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class StreamPriorityTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class TieTagTag; }
namespace dcsctp { class TimeoutTag; }
namespace dcsctp { class VerificationTagTag; }
namespace dcsctp { struct Capabilities; }
namespace dcsctp { struct CommonHeader; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace dcsctp { struct Metrics; }
namespace dcsctp { struct SendOptions; }
// clang-format on

namespace dcsctp {

class DcSctpSocket : public ::dcsctp::DcSctpSocketInterface {
public:
    // DcSctpSocket inner types define
    enum class State {};

public:
    // prevent constructor by default
    DcSctpSocket& operator=(DcSctpSocket const&);
    DcSctpSocket(DcSctpSocket const&);
    DcSctpSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DcSctpSocket@dcsctp@@UEAA@XZ
    virtual ~DcSctpSocket() = default;

    // vIndex: 1, symbol: ?ReceivePacket@DcSctpSocket@dcsctp@@UEAAXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    virtual void ReceivePacket(class rtc::ArrayView<uchar const, -4711>);

    // vIndex: 2, symbol: ?HandleTimeout@DcSctpSocket@dcsctp@@UEAAXV?$StrongAlias@VTimeoutTag@dcsctp@@_K@webrtc@@@Z
    virtual void HandleTimeout(class webrtc::StrongAlias<class dcsctp::TimeoutTag, uint64>);

    // vIndex: 3, symbol: ?Connect@DcSctpSocket@dcsctp@@UEAAXXZ
    virtual void Connect();

    // vIndex: 4, symbol: ?RestoreFromState@DcSctpSocket@dcsctp@@UEAAXAEBUDcSctpSocketHandoverState@2@@Z
    virtual void RestoreFromState(struct dcsctp::DcSctpSocketHandoverState const&);

    // vIndex: 5, symbol: ?Shutdown@DcSctpSocket@dcsctp@@UEAAXXZ
    virtual void Shutdown();

    // vIndex: 6, symbol: ?Close@DcSctpSocket@dcsctp@@UEAAXXZ
    virtual void Close();

    // vIndex: 7, symbol: ?state@DcSctpSocket@dcsctp@@UEBA?AW4SocketState@2@XZ
    virtual ::dcsctp::SocketState state() const;

    // vIndex: 8, symbol: ?options@DcSctpSocket@dcsctp@@UEBAAEBUDcSctpOptions@2@XZ
    virtual struct dcsctp::DcSctpOptions const& options() const;

    // vIndex: 9, symbol: ?SetMaxMessageSize@DcSctpSocket@dcsctp@@UEAAX_K@Z
    virtual void SetMaxMessageSize(uint64);

    // vIndex: 10, symbol:
    // ?SetStreamPriority@DcSctpSocket@dcsctp@@UEAAXV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@V?$StrongAlias@VStreamPriorityTag@dcsctp@@G@4@@Z
    virtual void
        SetStreamPriority(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>, class webrtc::StrongAlias<class dcsctp::StreamPriorityTag, ushort>);

    // vIndex: 11, symbol:
    // ?GetStreamPriority@DcSctpSocket@dcsctp@@UEBA?AV?$StrongAlias@VStreamPriorityTag@dcsctp@@G@webrtc@@V?$StrongAlias@VStreamIDTag@dcsctp@@G@4@@Z
    virtual class webrtc::StrongAlias<class dcsctp::StreamPriorityTag, ushort>
        GetStreamPriority(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>) const;

    // vIndex: 12, symbol: ?Send@DcSctpSocket@dcsctp@@UEAA?AW4SendStatus@2@VDcSctpMessage@2@AEBUSendOptions@2@@Z
    virtual ::dcsctp::SendStatus Send(class dcsctp::DcSctpMessage, struct dcsctp::SendOptions const&);

    // vIndex: 13, symbol:
    // ?ResetStreams@DcSctpSocket@dcsctp@@UEAA?AW4ResetStreamsStatus@2@V?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@@Z
    virtual ::dcsctp::ResetStreamsStatus
        ResetStreams(class rtc::ArrayView<class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const, -4711>);

    // vIndex: 14, symbol: ?buffered_amount@DcSctpSocket@dcsctp@@UEBA_KV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@Z
    virtual uint64 buffered_amount(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>) const;

    // vIndex: 15, symbol:
    // ?buffered_amount_low_threshold@DcSctpSocket@dcsctp@@UEBA_KV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@Z
    virtual uint64 buffered_amount_low_threshold(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>) const;

    // vIndex: 16, symbol:
    // ?SetBufferedAmountLowThreshold@DcSctpSocket@dcsctp@@UEAAXV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@_K@Z
    virtual void SetBufferedAmountLowThreshold(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>, uint64);

    // vIndex: 17, symbol: ?GetMetrics@DcSctpSocket@dcsctp@@UEBA?AV?$optional@UMetrics@dcsctp@@@std@@XZ
    virtual std::optional<struct dcsctp::Metrics> GetMetrics() const;

    // vIndex: 18, symbol: ?GetHandoverReadiness@DcSctpSocket@dcsctp@@UEBA?AVHandoverReadinessStatus@2@XZ
    virtual class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // vIndex: 19, symbol:
    // ?GetHandoverStateAndClose@DcSctpSocket@dcsctp@@UEAA?AV?$optional@UDcSctpSocketHandoverState@dcsctp@@@std@@XZ
    virtual std::optional<struct dcsctp::DcSctpSocketHandoverState> GetHandoverStateAndClose();

    // vIndex: 20, symbol: ?peer_implementation@DcSctpSocket@dcsctp@@UEBA?AW4SctpImplementation@2@XZ
    virtual ::dcsctp::SctpImplementation peer_implementation() const;

    // symbol:
    // ??0DcSctpSocket@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAVDcSctpSocketCallbacks@1@V?$unique_ptr@VPacketObserver@dcsctp@@U?$default_delete@VPacketObserver@dcsctp@@@std@@@3@AEBUDcSctpOptions@1@@Z
    MCAPI
    DcSctpSocket(std::string_view, class dcsctp::DcSctpSocketCallbacks&, std::unique_ptr<class dcsctp::PacketObserver>, struct dcsctp::DcSctpOptions const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CloseConnectionBecauseOfTooManyTransmissionErrors@DcSctpSocket@dcsctp@@AEAAXXZ
    MCAPI void CloseConnectionBecauseOfTooManyTransmissionErrors();

    // symbol:
    // ?CreateTransmissionControlBlock@DcSctpSocket@dcsctp@@AEAAXAEBUCapabilities@2@V?$StrongAlias@VVerificationTagTag@dcsctp@@I@webrtc@@V?$StrongAlias@VTSNTag@dcsctp@@I@5@12_KV?$StrongAlias@VTieTagTag@dcsctp@@_K@5@@Z
    MCAPI void CreateTransmissionControlBlock(struct dcsctp::Capabilities const&, class webrtc::StrongAlias<class dcsctp::VerificationTagTag, uint>, class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, class webrtc::StrongAlias<class dcsctp::VerificationTagTag, uint>, class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, uint64, class webrtc::StrongAlias<class dcsctp::TieTagTag, uint64>);

    // symbol: ?DeliverReassembledMessages@DcSctpSocket@dcsctp@@AEAAXXZ
    MCAPI void DeliverReassembledMessages();

    // symbol: ?Dispatch@DcSctpSocket@dcsctp@@AEAA_NAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI bool Dispatch(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleAbort@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleAbort(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleCookieAck@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleCookieAck(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleCookieEcho@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleCookieEcho(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleCookieEchoWithTCB@DcSctpSocket@dcsctp@@AEAA_NAEBUCommonHeader@2@AEBVStateCookie@2@@Z
    MCAPI bool HandleCookieEchoWithTCB(struct dcsctp::CommonHeader const&, class dcsctp::StateCookie const&);

    // symbol: ?HandleData@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleData(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleDataCommon@DcSctpSocket@dcsctp@@AEAAXAEAVAnyDataChunk@2@@Z
    MCAPI void HandleDataCommon(class dcsctp::AnyDataChunk&);

    // symbol: ?HandleError@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleError(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleForwardTsn@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleForwardTsn(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleForwardTsnCommon@DcSctpSocket@dcsctp@@AEAAXAEBVAnyForwardTsnChunk@2@@Z
    MCAPI void HandleForwardTsnCommon(class dcsctp::AnyForwardTsnChunk const&);

    // symbol: ?HandleHeartbeatAck@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void
    HandleHeartbeatAck(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleHeartbeatRequest@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void
    HandleHeartbeatRequest(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleIData@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleIData(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleIForwardTsn@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleIForwardTsn(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleInit@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleInit(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleInitAck@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleInitAck(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleReconfig@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleReconfig(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleSack@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleSack(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleShutdown@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleShutdown(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleShutdownAck@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void HandleShutdownAck(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleShutdownComplete@DcSctpSocket@dcsctp@@AEAAXAEBUCommonHeader@2@AEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI void
    HandleShutdownComplete(struct dcsctp::CommonHeader const&, struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol: ?HandleUnrecognizedChunk@DcSctpSocket@dcsctp@@AEAA_NAEBUChunkDescriptor@SctpPacket@2@@Z
    MCAPI bool HandleUnrecognizedChunk(struct dcsctp::SctpPacket::ChunkDescriptor const&);

    // symbol:
    // ?InternalClose@DcSctpSocket@dcsctp@@AEAAXW4ErrorKind@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void InternalClose(::dcsctp::ErrorKind, std::string_view);

    // symbol: ?MakeConnectionParameters@DcSctpSocket@dcsctp@@AEAAXXZ
    MCAPI void MakeConnectionParameters();

    // symbol: ?MaybeSendResetStreamsRequest@DcSctpSocket@dcsctp@@AEAAXXZ
    MCAPI void MaybeSendResetStreamsRequest();

    // symbol: ?MaybeSendShutdownOnPacketReceived@DcSctpSocket@dcsctp@@AEAAXAEBVSctpPacket@2@@Z
    MCAPI void MaybeSendShutdownOnPacketReceived(class dcsctp::SctpPacket const&);

    // symbol: ?MaybeSendShutdownOrAck@DcSctpSocket@dcsctp@@AEAAXXZ
    MCAPI void MaybeSendShutdownOrAck();

    // symbol: ?OnCookieTimerExpiry@DcSctpSocket@dcsctp@@AEAA?AV?$optional@VDurationMs@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::DurationMs> OnCookieTimerExpiry();

    // symbol: ?OnInitTimerExpiry@DcSctpSocket@dcsctp@@AEAA?AV?$optional@VDurationMs@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::DurationMs> OnInitTimerExpiry();

    // symbol: ?OnSentPacket@DcSctpSocket@dcsctp@@AEAAXV?$ArrayView@$$CBE$0?BCGH@@rtc@@W4SendPacketStatus@2@@Z
    MCAPI void OnSentPacket(class rtc::ArrayView<uchar const, -4711>, ::dcsctp::SendPacketStatus);

    // symbol: ?OnShutdownTimerExpiry@DcSctpSocket@dcsctp@@AEAA?AV?$optional@VDurationMs@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::DurationMs> OnShutdownTimerExpiry();

    // symbol: ?ReportFailedToParseChunk@DcSctpSocket@dcsctp@@AEAAXH@Z
    MCAPI void ReportFailedToParseChunk(int);

    // symbol: ?SendInit@DcSctpSocket@dcsctp@@AEAAXXZ
    MCAPI void SendInit();

    // symbol: ?SendShutdown@DcSctpSocket@dcsctp@@AEAAXXZ
    MCAPI void SendShutdown();

    // symbol: ?SendShutdownAck@DcSctpSocket@dcsctp@@AEAAXXZ
    MCAPI void SendShutdownAck();

    // symbol: ?SetState@DcSctpSocket@dcsctp@@AEAAXW4State@12@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void SetState(::dcsctp::DcSctpSocket::State, std::string_view);

    // symbol: ?ValidateHasTCB@DcSctpSocket@dcsctp@@AEAA_NXZ
    MCAPI bool ValidateHasTCB();

    // symbol: ?ValidatePacket@DcSctpSocket@dcsctp@@AEAA_NAEBVSctpPacket@2@@Z
    MCAPI bool ValidatePacket(class dcsctp::SctpPacket const&);

    // NOLINTEND
};

}; // namespace dcsctp
