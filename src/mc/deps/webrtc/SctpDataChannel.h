#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DataChannelInterface.h"
#include "mc/deps/webrtc/Priority.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct ReceiveDataParams; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class Thread; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpDataChannelControllerInterface; }
namespace webrtc { struct DataBuffer; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct InternalDataChannelInit; }
// clang-format on

namespace webrtc {

class SctpDataChannel {
public:
    // prevent constructor by default
    SctpDataChannel& operator=(SctpDataChannel const&);
    SctpDataChannel(SctpDataChannel const&);
    SctpDataChannel();

public:
    // NOLINTBEGIN
    // symbol: ?Close@SctpDataChannel@webrtc@@UEAAXXZ
    MCVAPI void Close();

    // symbol: ?RegisterObserver@SctpDataChannel@webrtc@@UEAAXPEAVDataChannelObserver@2@@Z
    MCVAPI void RegisterObserver(class webrtc::DataChannelObserver*);

    // symbol: ?Send@SctpDataChannel@webrtc@@UEAA_NAEBUDataBuffer@2@@Z
    MCVAPI bool Send(struct webrtc::DataBuffer const&);

    // symbol: ?UnregisterObserver@SctpDataChannel@webrtc@@UEAAXXZ
    MCVAPI void UnregisterObserver();

    // symbol: ?buffered_amount@SctpDataChannel@webrtc@@UEBA_KXZ
    MCVAPI uint64 buffered_amount() const;

    // symbol: ?bytes_received@SctpDataChannel@webrtc@@UEBA_KXZ
    MCVAPI uint64 bytes_received() const;

    // symbol: ?bytes_send_buffer@SctpDataChannel@webrtc@@UEBA_KXZ
    MCVAPI uint64 bytes_send_buffer() const;

    // symbol: ?bytes_sent@SctpDataChannel@webrtc@@UEBA_KXZ
    MCVAPI uint64 bytes_sent() const;

    // symbol: ?error@SctpDataChannel@webrtc@@UEBA?AVRTCError@2@XZ
    MCVAPI class webrtc::RTCError error() const;

    // symbol: ?id@SctpDataChannel@webrtc@@UEBAHXZ
    MCVAPI int id() const;

    // symbol: ?internal_id@SctpDataChannel@webrtc@@UEBAHXZ
    MCVAPI int internal_id() const;

    // symbol: ?label@SctpDataChannel@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string label() const;

    // symbol: ?maxPacketLifeTime@SctpDataChannel@webrtc@@UEBA?AV?$optional@H@std@@XZ
    MCVAPI std::optional<int> maxPacketLifeTime() const;

    // symbol: ?maxRetransmitTime@SctpDataChannel@webrtc@@UEBAGXZ
    MCVAPI ushort maxRetransmitTime() const;

    // symbol: ?maxRetransmits@SctpDataChannel@webrtc@@UEBAGXZ
    MCVAPI ushort maxRetransmits() const;

    // symbol: ?maxRetransmitsOpt@SctpDataChannel@webrtc@@UEBA?AV?$optional@H@std@@XZ
    MCVAPI std::optional<int> maxRetransmitsOpt() const;

    // symbol: ?messages_received@SctpDataChannel@webrtc@@UEBAIXZ
    MCVAPI uint messages_received() const;

    // symbol: ?messages_sent@SctpDataChannel@webrtc@@UEBAIXZ
    MCVAPI uint messages_sent() const;

    // symbol: ?negotiated@SctpDataChannel@webrtc@@UEBA_NXZ
    MCVAPI bool negotiated() const;

    // symbol: ?ordered@SctpDataChannel@webrtc@@UEBA_NXZ
    MCVAPI bool ordered() const;

    // symbol: ?priority@SctpDataChannel@webrtc@@UEBA?AW4Priority@2@XZ
    MCVAPI ::webrtc::Priority priority() const;

    // symbol: ?protocol@SctpDataChannel@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string protocol() const;

    // symbol: ?reliable@SctpDataChannel@webrtc@@UEBA_NXZ
    MCVAPI bool reliable() const;

    // symbol: ?state@SctpDataChannel@webrtc@@UEBA?AW4DataState@DataChannelInterface@2@XZ
    MCVAPI ::webrtc::DataChannelInterface::DataState state() const;

    // symbol: ??1SctpDataChannel@webrtc@@MEAA@XZ
    MCVAPI ~SctpDataChannel();

    // symbol:
    // ?CloseAbruptlyWithDataChannelFailure@SctpDataChannel@webrtc@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void CloseAbruptlyWithDataChannelFailure(std::string const&);

    // symbol: ?CloseAbruptlyWithError@SctpDataChannel@webrtc@@QEAAXVRTCError@2@@Z
    MCAPI void CloseAbruptlyWithError(class webrtc::RTCError);

    // symbol: ?DetachFromController@SctpDataChannel@webrtc@@QEAAXXZ
    MCAPI void DetachFromController();

    // symbol: ?GetStats@SctpDataChannel@webrtc@@QEBA?AUDataChannelStats@2@XZ
    MCAPI struct webrtc::DataChannelStats GetStats() const;

    // symbol: ?OnClosingProcedureComplete@SctpDataChannel@webrtc@@QEAAXH@Z
    MCAPI void OnClosingProcedureComplete(int);

    // symbol: ?OnClosingProcedureStartedRemotely@SctpDataChannel@webrtc@@QEAAXH@Z
    MCAPI void OnClosingProcedureStartedRemotely(int);

    // symbol: ?OnDataReceived@SctpDataChannel@webrtc@@QEAAXAEBUReceiveDataParams@cricket@@AEBVCopyOnWriteBuffer@rtc@@@Z
    MCAPI void OnDataReceived(struct cricket::ReceiveDataParams const&, class rtc::CopyOnWriteBuffer const&);

    // symbol: ?OnTransportChannelClosed@SctpDataChannel@webrtc@@QEAAXVRTCError@2@@Z
    MCAPI void OnTransportChannelClosed(class webrtc::RTCError);

    // symbol: ?OnTransportChannelCreated@SctpDataChannel@webrtc@@QEAAXXZ
    MCAPI void OnTransportChannelCreated();

    // symbol: ?OnTransportReady@SctpDataChannel@webrtc@@QEAAX_N@Z
    MCAPI void OnTransportReady(bool);

    // symbol: ?SetSctpSid@SctpDataChannel@webrtc@@QEAAXH@Z
    MCAPI void SetSctpSid(int);

    // symbol:
    // ?Create@SctpDataChannel@webrtc@@SA?AV?$scoped_refptr@VSctpDataChannel@webrtc@@@rtc@@PEAVSctpDataChannelControllerInterface@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUInternalDataChannelInit@2@PEAVThread@4@3@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::SctpDataChannel>
    Create(class webrtc::SctpDataChannelControllerInterface*, std::string const&, struct webrtc::InternalDataChannelInit const&, class rtc::Thread*, class rtc::Thread*);

    // symbol:
    // ?CreateProxy@SctpDataChannel@webrtc@@SA?AV?$scoped_refptr@VDataChannelInterface@webrtc@@@rtc@@V?$scoped_refptr@VSctpDataChannel@webrtc@@@4@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::DataChannelInterface>
        CreateProxy(class rtc::scoped_refptr<class webrtc::SctpDataChannel>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0SctpDataChannel@webrtc@@IEAA@AEBUInternalDataChannelInit@1@PEAVSctpDataChannelControllerInterface@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVThread@rtc@@3@Z
    MCAPI
    SctpDataChannel(struct webrtc::InternalDataChannelInit const&, class webrtc::SctpDataChannelControllerInterface*, std::string const&, class rtc::Thread*, class rtc::Thread*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DeliverQueuedReceivedData@SctpDataChannel@webrtc@@AEAAXXZ
    MCAPI void DeliverQueuedReceivedData();

    // symbol: ?DisconnectFromTransport@SctpDataChannel@webrtc@@AEAAXXZ
    MCAPI void DisconnectFromTransport();

    // symbol: ?Init@SctpDataChannel@webrtc@@AEAA_NXZ
    MCAPI bool Init();

    // symbol: ?QueueControlMessage@SctpDataChannel@webrtc@@AEAAXAEBVCopyOnWriteBuffer@rtc@@@Z
    MCAPI void QueueControlMessage(class rtc::CopyOnWriteBuffer const&);

    // symbol: ?QueueSendDataMessage@SctpDataChannel@webrtc@@AEAA_NAEBUDataBuffer@2@@Z
    MCAPI bool QueueSendDataMessage(struct webrtc::DataBuffer const&);

    // symbol: ?SendControlMessage@SctpDataChannel@webrtc@@AEAA_NAEBVCopyOnWriteBuffer@rtc@@@Z
    MCAPI bool SendControlMessage(class rtc::CopyOnWriteBuffer const&);

    // symbol: ?SendDataMessage@SctpDataChannel@webrtc@@AEAA_NAEBUDataBuffer@2@_N@Z
    MCAPI bool SendDataMessage(struct webrtc::DataBuffer const&, bool);

    // symbol: ?SendQueuedControlMessages@SctpDataChannel@webrtc@@AEAAXXZ
    MCAPI void SendQueuedControlMessages();

    // symbol: ?SendQueuedDataMessages@SctpDataChannel@webrtc@@AEAAXXZ
    MCAPI void SendQueuedDataMessages();

    // symbol: ?SetState@SctpDataChannel@webrtc@@AEAAXW4DataState@DataChannelInterface@2@@Z
    MCAPI void SetState(::webrtc::DataChannelInterface::DataState);

    // symbol: ?UpdateState@SctpDataChannel@webrtc@@AEAAXXZ
    MCAPI void UpdateState();

    // NOLINTEND
};

}; // namespace webrtc
