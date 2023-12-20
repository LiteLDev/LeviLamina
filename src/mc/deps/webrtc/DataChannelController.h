#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DataMessageType.h"
#include "mc/deps/webrtc/detail/SSLRole.h"
#include "mc/deps/webrtc/detail/SendDataResult.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct ReceiveDataParams; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class Thread; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class PeerConnectionInternal; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpDataChannel; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct InternalDataChannelInit; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class DataChannelController {
public:
    // prevent constructor by default
    DataChannelController& operator=(DataChannelController const&);
    DataChannelController(DataChannelController const&);
    DataChannelController();

public:
    // NOLINTBEGIN
    // symbol: ?AddSctpDataStream@DataChannelController@webrtc@@UEAAXH@Z
    MCVAPI void AddSctpDataStream(int);

    // symbol: ?ConnectDataChannel@DataChannelController@webrtc@@UEAA_NPEAVSctpDataChannel@2@@Z
    MCVAPI bool ConnectDataChannel(class webrtc::SctpDataChannel*);

    // symbol: ?DisconnectDataChannel@DataChannelController@webrtc@@UEAAXPEAVSctpDataChannel@2@@Z
    MCVAPI void DisconnectDataChannel(class webrtc::SctpDataChannel*);

    // symbol: ?OnChannelClosed@DataChannelController@webrtc@@UEAAXH@Z
    MCVAPI void OnChannelClosed(int);

    // symbol: ?OnChannelClosing@DataChannelController@webrtc@@UEAAXH@Z
    MCVAPI void OnChannelClosing(int);

    // symbol: ?OnDataReceived@DataChannelController@webrtc@@UEAAXHW4DataMessageType@2@AEBVCopyOnWriteBuffer@rtc@@@Z
    MCVAPI void OnDataReceived(int, ::webrtc::DataMessageType, class rtc::CopyOnWriteBuffer const&);

    // symbol: ?OnReadyToSend@DataChannelController@webrtc@@UEAAXXZ
    MCVAPI void OnReadyToSend();

    // symbol: ?OnTransportClosed@DataChannelController@webrtc@@UEAAXVRTCError@2@@Z
    MCVAPI void OnTransportClosed(class webrtc::RTCError);

    // symbol: ?ReadyToSendData@DataChannelController@webrtc@@UEBA_NXZ
    MCVAPI bool ReadyToSendData() const;

    // symbol: ?RemoveSctpDataStream@DataChannelController@webrtc@@UEAAXH@Z
    MCVAPI void RemoveSctpDataStream(int);

    // symbol:
    // ?SendData@DataChannelController@webrtc@@UEAA_NHAEBUSendDataParams@2@AEBVCopyOnWriteBuffer@rtc@@PEAW4SendDataResult@cricket@@@Z
    MCVAPI bool
    SendData(int, struct webrtc::SendDataParams const&, class rtc::CopyOnWriteBuffer const&, ::cricket::SendDataResult*);

    // symbol: ??1DataChannelController@webrtc@@UEAA@XZ
    MCVAPI ~DataChannelController();

    // symbol: ?AllocateSctpSids@DataChannelController@webrtc@@QEAAXW4SSLRole@rtc@@@Z
    MCAPI void AllocateSctpSids(::rtc::SSLRole);

    // symbol: ??0DataChannelController@webrtc@@QEAA@PEAVPeerConnectionInternal@1@@Z
    MCAPI explicit DataChannelController(class webrtc::PeerConnectionInternal*);

    // symbol:
    // ?GetDataChannelStats@DataChannelController@webrtc@@QEBA?AV?$vector@UDataChannelStats@webrtc@@V?$allocator@UDataChannelStats@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<struct webrtc::DataChannelStats> GetDataChannelStats() const;

    // symbol: ?HasDataChannels@DataChannelController@webrtc@@QEBA_NXZ
    MCAPI bool HasDataChannels() const;

    // symbol:
    // ?InternalCreateDataChannelWithProxy@DataChannelController@webrtc@@QEAA?AV?$scoped_refptr@VDataChannelInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUInternalDataChannelInit@2@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::DataChannelInterface>
    InternalCreateDataChannelWithProxy(std::string const&, struct webrtc::InternalDataChannelInit const*);

    // symbol: ?OnSctpDataChannelClosed@DataChannelController@webrtc@@QEAAXPEAVSctpDataChannel@2@@Z
    MCAPI void OnSctpDataChannelClosed(class webrtc::SctpDataChannel*);

    // symbol: ?OnTransportChanged@DataChannelController@webrtc@@QEAAXPEAVDataChannelTransportInterface@2@@Z
    MCAPI void OnTransportChanged(class webrtc::DataChannelTransportInterface*);

    // symbol: ?OnTransportChannelClosed@DataChannelController@webrtc@@QEAAXVRTCError@2@@Z
    MCAPI void OnTransportChannelClosed(class webrtc::RTCError);

    // symbol: ?SetupDataChannelTransport_n@DataChannelController@webrtc@@QEAAXXZ
    MCAPI void SetupDataChannelTransport_n();

    // symbol: ?TeardownDataChannelTransport_n@DataChannelController@webrtc@@QEAAXXZ
    MCAPI void TeardownDataChannelTransport_n();

    // symbol: ?data_channel_transport@DataChannelController@webrtc@@QEBAPEAVDataChannelTransportInterface@2@XZ
    MCAPI class webrtc::DataChannelTransportInterface* data_channel_transport() const;

    // symbol: ?set_data_channel_transport@DataChannelController@webrtc@@QEAAXPEAVDataChannelTransportInterface@2@@Z
    MCAPI void set_data_channel_transport(class webrtc::DataChannelTransportInterface*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?DataChannelSendData@DataChannelController@webrtc@@AEAA_NHAEBUSendDataParams@2@AEBVCopyOnWriteBuffer@rtc@@PEAW4SendDataResult@cricket@@@Z
    MCAPI bool
    DataChannelSendData(int, struct webrtc::SendDataParams const&, class rtc::CopyOnWriteBuffer const&, ::cricket::SendDataResult*);

    // symbol:
    // ?HandleOpenMessage_s@DataChannelController@webrtc@@AEAA_NAEBUReceiveDataParams@cricket@@AEBVCopyOnWriteBuffer@rtc@@@Z
    MCAPI bool HandleOpenMessage_s(struct cricket::ReceiveDataParams const&, class rtc::CopyOnWriteBuffer const&);

    // symbol:
    // ?InternalCreateSctpDataChannel@DataChannelController@webrtc@@AEAA?AV?$scoped_refptr@VSctpDataChannel@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUInternalDataChannelInit@2@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::SctpDataChannel>
    InternalCreateSctpDataChannel(std::string const&, struct webrtc::InternalDataChannelInit const*);

    // symbol: ?NotifyDataChannelsOfTransportCreated@DataChannelController@webrtc@@AEAAXXZ
    MCAPI void NotifyDataChannelsOfTransportCreated();

    // symbol:
    // ?OnDataChannelOpenMessage@DataChannelController@webrtc@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUInternalDataChannelInit@2@@Z
    MCAPI void OnDataChannelOpenMessage(std::string const&, struct webrtc::InternalDataChannelInit const&);

    // symbol: ?network_thread@DataChannelController@webrtc@@AEBAPEAVThread@rtc@@XZ
    MCAPI class rtc::Thread* network_thread() const;

    // symbol: ?signaling_thread@DataChannelController@webrtc@@AEBAPEAVThread@rtc@@XZ
    MCAPI class rtc::Thread* signaling_thread() const;

    // NOLINTEND
};

}; // namespace webrtc
