#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/TaskQueueBase.h"
#include "mc/deps/webrtc/cricket/SendDataResult.h"
#include "mc/deps/webrtc/dcsctp/ErrorKind.h"
#include "mc/deps/webrtc/dcsctp/SendPacketStatus.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketFactory; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class Timeout; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class Thread; }
namespace webrtc { class Clock; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class DcSctpTransport {
public:
    // DcSctpTransport inner types declare
    // clang-format off
    struct StreamState;
    // clang-format on

    // DcSctpTransport inner types define
    struct StreamState {
    public:
        // prevent constructor by default
        StreamState& operator=(StreamState const&);
        StreamState(StreamState const&);
        StreamState();
    };

public:
    // prevent constructor by default
    DcSctpTransport& operator=(DcSctpTransport const&);
    DcSctpTransport(DcSctpTransport const&);
    DcSctpTransport();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateTimeout@DcSctpTransport@webrtc@@EEAA?AV?$unique_ptr@VTimeout@dcsctp@@U?$default_delete@VTimeout@dcsctp@@@std@@@std@@W4DelayPrecision@TaskQueueBase@2@@Z
    MCVAPI std::unique_ptr<class dcsctp::Timeout> CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision);

    // symbol: ?GetRandomInt@DcSctpTransport@webrtc@@EEAAIII@Z
    MCVAPI uint GetRandomInt(uint, uint);

    // symbol:
    // ?OnAborted@DcSctpTransport@webrtc@@EEAAXW4ErrorKind@dcsctp@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void OnAborted(::dcsctp::ErrorKind, std::string_view);

    // symbol: ?OnClosed@DcSctpTransport@webrtc@@EEAAXXZ
    MCVAPI void OnClosed();

    // symbol: ?OnConnected@DcSctpTransport@webrtc@@EEAAXXZ
    MCVAPI void OnConnected();

    // symbol: ?OnConnectionRestarted@DcSctpTransport@webrtc@@EEAAXXZ
    MCVAPI void OnConnectionRestarted();

    // symbol:
    // ?OnError@DcSctpTransport@webrtc@@EEAAXW4ErrorKind@dcsctp@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void OnError(::dcsctp::ErrorKind, std::string_view);

    // symbol:
    // ?OnIncomingStreamsReset@DcSctpTransport@webrtc@@EEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@@Z
    MCVAPI void OnIncomingStreamsReset(class rtc::ArrayView<
                                       class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const,
                                       -4711>);

    // symbol: ?OnMessageReceived@DcSctpTransport@webrtc@@EEAAXVDcSctpMessage@dcsctp@@@Z
    MCVAPI void OnMessageReceived(class dcsctp::DcSctpMessage);

    // symbol:
    // ?OnStreamsResetFailed@DcSctpTransport@webrtc@@EEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void OnStreamsResetFailed(
        class rtc::ArrayView<class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const, -4711>,
        std::string_view
    );

    // symbol:
    // ?OnStreamsResetPerformed@DcSctpTransport@webrtc@@EEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@@Z
    MCVAPI void OnStreamsResetPerformed(class rtc::ArrayView<
                                        class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const,
                                        -4711>);

    // symbol: ?OnTotalBufferedAmountLow@DcSctpTransport@webrtc@@EEAAXXZ
    MCVAPI void OnTotalBufferedAmountLow();

    // symbol: ?OpenStream@DcSctpTransport@webrtc@@UEAA_NH@Z
    MCVAPI bool OpenStream(int);

    // symbol: ?ReadyToSendData@DcSctpTransport@webrtc@@UEAA_NXZ
    MCVAPI bool ReadyToSendData();

    // symbol: ?ResetStream@DcSctpTransport@webrtc@@UEAA_NH@Z
    MCVAPI bool ResetStream(int);

    // symbol:
    // ?SendData@DcSctpTransport@webrtc@@UEAA_NHAEBUSendDataParams@2@AEBVCopyOnWriteBuffer@rtc@@PEAW4SendDataResult@cricket@@@Z
    MCVAPI bool
    SendData(int, struct webrtc::SendDataParams const&, class rtc::CopyOnWriteBuffer const&, ::cricket::SendDataResult*);

    // symbol:
    // ?SendPacketWithStatus@DcSctpTransport@webrtc@@EEAA?AW4SendPacketStatus@dcsctp@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCVAPI ::dcsctp::SendPacketStatus SendPacketWithStatus(class rtc::ArrayView<uchar const, -4711>);

    // symbol: ?SetDataChannelSink@DcSctpTransport@webrtc@@UEAAXPEAVDataChannelSink@2@@Z
    MCVAPI void SetDataChannelSink(class webrtc::DataChannelSink*);

    // symbol: ?SetDtlsTransport@DcSctpTransport@webrtc@@UEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCVAPI void SetDtlsTransport(class rtc::PacketTransportInternal*);

    // symbol: ?SetOnConnectedCallback@DcSctpTransport@webrtc@@UEAAXV?$function@$$A6AXXZ@std@@@Z
    MCVAPI void SetOnConnectedCallback(std::function<void(void)>);

    // symbol: ?Start@DcSctpTransport@webrtc@@UEAA_NHHH@Z
    MCVAPI bool Start(int, int, int);

    // symbol: ?TimeMillis@DcSctpTransport@webrtc@@EEAA?AVTimeMs@dcsctp@@XZ
    MCVAPI class dcsctp::TimeMs TimeMillis();

    // symbol: ?max_inbound_streams@DcSctpTransport@webrtc@@UEBA?AV?$optional@H@std@@XZ
    MCVAPI std::optional<int> max_inbound_streams() const;

    // symbol: ?max_message_size@DcSctpTransport@webrtc@@UEBAHXZ
    MCVAPI int max_message_size() const;

    // symbol: ?max_outbound_streams@DcSctpTransport@webrtc@@UEBA?AV?$optional@H@std@@XZ
    MCVAPI std::optional<int> max_outbound_streams() const;

    // symbol: ?set_debug_name_for_testing@DcSctpTransport@webrtc@@UEAAXPEBD@Z
    MCVAPI void set_debug_name_for_testing(char const*);

    // symbol: ??1DcSctpTransport@webrtc@@UEAA@XZ
    MCVAPI ~DcSctpTransport();

    // symbol: ??0DcSctpTransport@webrtc@@QEAA@PEAVThread@rtc@@PEAVPacketTransportInternal@3@PEAVClock@1@@Z
    MCAPI DcSctpTransport(class rtc::Thread*, class rtc::PacketTransportInternal*, class webrtc::Clock*);

    // symbol:
    // ??0DcSctpTransport@webrtc@@QEAA@PEAVThread@rtc@@PEAVPacketTransportInternal@3@PEAVClock@1@V?$unique_ptr@VDcSctpSocketFactory@dcsctp@@U?$default_delete@VDcSctpSocketFactory@dcsctp@@@std@@@std@@@Z
    MCAPI
    DcSctpTransport(class rtc::Thread*, class rtc::PacketTransportInternal*, class webrtc::Clock*, std::unique_ptr<class dcsctp::DcSctpSocketFactory>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ConnectTransportSignals@DcSctpTransport@webrtc@@AEAAXXZ
    MCAPI void ConnectTransportSignals();

    // symbol: ?DisconnectTransportSignals@DcSctpTransport@webrtc@@AEAAXXZ
    MCAPI void DisconnectTransportSignals();

    // symbol: ?MaybeConnectSocket@DcSctpTransport@webrtc@@AEAAXXZ
    MCAPI void MaybeConnectSocket();

    // symbol: ?OnTransportClosed@DcSctpTransport@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnTransportClosed(class rtc::PacketTransportInternal*);

    // symbol: ?OnTransportReadPacket@DcSctpTransport@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@PEBD_KAEB_JH@Z
    MCAPI void OnTransportReadPacket(class rtc::PacketTransportInternal*, char const*, uint64, int64 const&, int);

    // symbol: ?OnTransportWritableState@DcSctpTransport@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnTransportWritableState(class rtc::PacketTransportInternal*);

    // NOLINTEND
};

}; // namespace webrtc
