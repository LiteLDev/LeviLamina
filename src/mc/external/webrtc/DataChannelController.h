#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/DataChannelInterface.h"
#include "mc/external/webrtc/DataChannelSink.h"
#include "mc/external/webrtc/DataMessageType.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/SctpDataChannelControllerInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpDataChannel; }
namespace webrtc { class StreamId; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct InternalDataChannelInit; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class DataChannelController : public ::webrtc::SctpDataChannelControllerInterface, public ::webrtc::DataChannelSink {
public:
    // DataChannelController inner types define
    enum class DataChannelUsage : uchar {
        KNeverUsed    = 0,
        KHaveBeenUsed = 1,
        KInUse        = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd717ef;
    ::ll::UntypedStorage<8, 40> mUnkdeaa97;
    ::ll::UntypedStorage<8, 24> mUnk2cfc1e;
    ::ll::UntypedStorage<1, 1>  mUnk745d5e;
    ::ll::UntypedStorage<8, 8>  mUnkf053e4;
    ::ll::UntypedStorage<8, 16> mUnk32b9c5;
    ::ll::UntypedStorage<8, 8>  mUnk13b8b8;
    // NOLINTEND

public:
    // prevent constructor by default
    DataChannelController& operator=(DataChannelController const&);
    DataChannelController(DataChannelController const&);
    DataChannelController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataChannelController() /*override*/;

    virtual ::webrtc::RTCError SendData(
        ::webrtc::StreamId              sid,
        ::webrtc::SendDataParams const& params,
        ::rtc::CopyOnWriteBuffer const& payload
    ) /*override*/;

    virtual void AddSctpDataStream(::webrtc::StreamId sid) /*override*/;

    virtual void RemoveSctpDataStream(::webrtc::StreamId sid) /*override*/;

    virtual void OnChannelStateChanged(
        ::webrtc::SctpDataChannel*                channel,
        ::webrtc::DataChannelInterface::DataState state
    ) /*override*/;

    virtual uint64 buffered_amount(::webrtc::StreamId sid) const /*override*/;

    virtual uint64 buffered_amount_low_threshold(::webrtc::StreamId sid) const /*override*/;

    virtual void SetBufferedAmountLowThreshold(::webrtc::StreamId sid, uint64 bytes) /*override*/;

    virtual void
    OnDataReceived(int channel_id, ::webrtc::DataMessageType type, ::rtc::CopyOnWriteBuffer const& buffer) /*override*/;

    virtual void OnChannelClosing(int channel_id) /*override*/;

    virtual void OnChannelClosed(int channel_id) /*override*/;

    virtual void OnReadyToSend() /*override*/;

    virtual void OnTransportClosed(::webrtc::RTCError error) /*override*/;

    virtual void OnBufferedAmountLow(int channel_id) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AllocateSctpSids(::rtc::SSLRole role);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::SctpDataChannel>>
    CreateDataChannel(::std::string const& label, ::webrtc::InternalDataChannelInit& config);

    MCNAPI ::std::vector<::webrtc::DataChannelStats> GetDataChannelStats() const;

    MCNAPI bool
    HandleOpenMessage_n(int channel_id, ::webrtc::DataMessageType type, ::rtc::CopyOnWriteBuffer const& buffer);

    MCNAPI bool HasDataChannels() const;

    MCNAPI bool HasUsedDataChannels() const;

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>>
    InternalCreateDataChannelWithProxy(::std::string const& label, ::webrtc::InternalDataChannelInit const& config);

    MCNAPI void
    OnDataChannelOpenMessage(::webrtc::scoped_refptr<::webrtc::SctpDataChannel> channel, bool ready_to_send);

    MCNAPI void OnTransportChanged(::webrtc::DataChannelTransportInterface* new_data_channel_transport);

    MCNAPI void PrepareForShutdown();

    MCNAPI ::webrtc::RTCError
    ReserveOrAllocateSid(::std::optional<::webrtc::StreamId>& sid, ::std::optional<::rtc::SSLRole> fallback_ssl_role);

    MCNAPI void SetupDataChannelTransport_n(::webrtc::DataChannelTransportInterface* transport);

    MCNAPI void TeardownDataChannelTransport_n(::webrtc::RTCError error);

    MCNAPI void set_data_channel_transport(::webrtc::DataChannelTransportInterface* transport);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError
    $SendData(::webrtc::StreamId sid, ::webrtc::SendDataParams const& params, ::rtc::CopyOnWriteBuffer const& payload);

    MCNAPI void $AddSctpDataStream(::webrtc::StreamId sid);

    MCNAPI void $RemoveSctpDataStream(::webrtc::StreamId sid);

    MCNAPI void
    $OnChannelStateChanged(::webrtc::SctpDataChannel* channel, ::webrtc::DataChannelInterface::DataState state);

    MCNAPI uint64 $buffered_amount(::webrtc::StreamId sid) const;

    MCNAPI uint64 $buffered_amount_low_threshold(::webrtc::StreamId sid) const;

    MCNAPI void $SetBufferedAmountLowThreshold(::webrtc::StreamId sid, uint64 bytes);

    MCNAPI void $OnDataReceived(int channel_id, ::webrtc::DataMessageType type, ::rtc::CopyOnWriteBuffer const& buffer);

    MCNAPI void $OnChannelClosing(int channel_id);

    MCNAPI void $OnChannelClosed(int channel_id);

    MCNAPI void $OnReadyToSend();

    MCNAPI void $OnTransportClosed(::webrtc::RTCError error);

    MCNAPI void $OnBufferedAmountLow(int channel_id);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForDataChannelSink();

    MCNAPI static void** $vftableForSctpDataChannelControllerInterface();
    // NOLINTEND
};

} // namespace webrtc
