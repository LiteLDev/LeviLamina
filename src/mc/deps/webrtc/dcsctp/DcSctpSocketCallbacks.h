#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/TaskQueueBase.h"
#include "mc/deps/webrtc/dcsctp/ErrorKind.h"
#include "mc/deps/webrtc/dcsctp/SendPacketStatus.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class LifecycleId; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class Timeout; }
// clang-format on

namespace dcsctp {

class DcSctpSocketCallbacks {
public:
    // prevent constructor by default
    DcSctpSocketCallbacks& operator=(DcSctpSocketCallbacks const&);
    DcSctpSocketCallbacks(DcSctpSocketCallbacks const&);
    DcSctpSocketCallbacks();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DcSctpSocketCallbacks@dcsctp@@UEAA@XZ
    virtual ~DcSctpSocketCallbacks() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol:
    // ?SendPacketWithStatus@DcSctpSocketCallbacks@dcsctp@@UEAA?AW4SendPacketStatus@2@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    virtual ::dcsctp::SendPacketStatus SendPacketWithStatus(class rtc::ArrayView<uchar const, -4711>);

    // vIndex: 3, symbol:
    // ?CreateTimeout@DcSctpSocketCallbacks@dcsctp@@UEAA?AV?$unique_ptr@VTimeout@dcsctp@@U?$default_delete@VTimeout@dcsctp@@@std@@@std@@W4DelayPrecision@TaskQueueBase@webrtc@@@Z
    virtual std::unique_ptr<class dcsctp::Timeout> CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision);

    // vIndex: 4, symbol:
    // ?CreateTimeout@DcSctpSocketCallbacks@dcsctp@@UEAA?AV?$unique_ptr@VTimeout@dcsctp@@U?$default_delete@VTimeout@dcsctp@@@std@@@std@@XZ
    virtual std::unique_ptr<class dcsctp::Timeout> CreateTimeout();

    // vIndex: 5, symbol: ?TimeMillis@CallbackDeferrer@dcsctp@@UEAA?AVTimeMs@2@XZ
    virtual class dcsctp::TimeMs TimeMillis() = 0;

    // vIndex: 6, symbol: ?GetRandomInt@CallbackDeferrer@dcsctp@@UEAAIII@Z
    virtual uint GetRandomInt(uint, uint) = 0;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: ?OnMessageReceived@CallbackDeferrer@dcsctp@@UEAAXVDcSctpMessage@2@@Z
    virtual void OnMessageReceived(class dcsctp::DcSctpMessage) = 0;

    // vIndex: 9, symbol:
    // ?OnError@CallbackDeferrer@dcsctp@@UEAAXW4ErrorKind@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void OnError(::dcsctp::ErrorKind, std::string_view) = 0;

    // vIndex: 10, symbol:
    // ?OnAborted@CallbackDeferrer@dcsctp@@UEAAXW4ErrorKind@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void OnAborted(::dcsctp::ErrorKind, std::string_view) = 0;

    // vIndex: 11, symbol: ?OnConnected@CallbackDeferrer@dcsctp@@UEAAXXZ
    virtual void OnConnected() = 0;

    // vIndex: 12, symbol: ?OnClosed@CallbackDeferrer@dcsctp@@UEAAXXZ
    virtual void OnClosed() = 0;

    // vIndex: 13, symbol: ?OnConnectionRestarted@CallbackDeferrer@dcsctp@@UEAAXXZ
    virtual void OnConnectionRestarted() = 0;

    // vIndex: 14, symbol:
    // ?OnStreamsResetFailed@CallbackDeferrer@dcsctp@@UEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void OnStreamsResetFailed(
        class rtc::ArrayView<class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const, -4711>,
        std::string_view
    ) = 0;

    // vIndex: 15, symbol:
    // ?OnStreamsResetPerformed@CallbackDeferrer@dcsctp@@UEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@@Z
    virtual void OnStreamsResetPerformed(class rtc::ArrayView<
                                         class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const,
                                         -4711>) = 0;

    // vIndex: 16, symbol:
    // ?OnIncomingStreamsReset@CallbackDeferrer@dcsctp@@UEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@@Z
    virtual void OnIncomingStreamsReset(class rtc::ArrayView<
                                        class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const,
                                        -4711>) = 0;

    // vIndex: 17, symbol:
    // ?OnBufferedAmountLow@DcSctpSocketCallbacks@dcsctp@@UEAAXV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@Z
    virtual void OnBufferedAmountLow(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>);

    // vIndex: 18, symbol: ?OnTotalBufferedAmountLow@DcSctpSocketCallbacks@dcsctp@@UEAAXXZ
    virtual void OnTotalBufferedAmountLow();

    // vIndex: 19, symbol: ?OnLifecycleMessageFullySent@DcSctpSocketCallbacks@dcsctp@@UEAAXVLifecycleId@2@@Z
    virtual void OnLifecycleMessageFullySent(class dcsctp::LifecycleId);

    // vIndex: 20, symbol: ?OnLifecycleMessageExpired@DcSctpSocketCallbacks@dcsctp@@UEAAXVLifecycleId@2@_N@Z
    virtual void OnLifecycleMessageExpired(class dcsctp::LifecycleId, bool);

    // vIndex: 21, symbol: ?OnLifecycleMessageDelivered@DcSctpSocketCallbacks@dcsctp@@UEAAXVLifecycleId@2@@Z
    virtual void OnLifecycleMessageDelivered(class dcsctp::LifecycleId);

    // vIndex: 22, symbol: ?OnLifecycleEnd@DcSctpSocketCallbacks@dcsctp@@UEAAXVLifecycleId@2@@Z
    virtual void OnLifecycleEnd(class dcsctp::LifecycleId);

    // symbol: ?NotifyOutgoingMessageBufferEmpty@DcSctpSocketCallbacks@dcsctp@@UEAAXXZ
    MCVAPI void NotifyOutgoingMessageBufferEmpty();

    // symbol: ?SendPacket@DcSctpSocketCallbacks@dcsctp@@UEAAXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCVAPI void SendPacket(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
