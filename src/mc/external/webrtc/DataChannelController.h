#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/DataMessageType.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class Thread; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpDataChannel; }
namespace webrtc { class StreamId; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct InternalDataChannelInit; }
// clang-format on

namespace webrtc {

class DataChannelController {
public:
    // prevent constructor by default
    DataChannelController& operator=(DataChannelController const&);
    DataChannelController(DataChannelController const&);
    DataChannelController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AllocateSctpSids(::rtc::SSLRole);

    MCAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::SctpDataChannel>>
    CreateDataChannel(::std::string const&, ::webrtc::InternalDataChannelInit&);

    MCAPI ::std::vector<::webrtc::DataChannelStats> GetDataChannelStats() const;

    MCAPI bool HandleOpenMessage_n(int, ::webrtc::DataMessageType, ::rtc::CopyOnWriteBuffer const&);

    MCAPI bool HasDataChannels() const;

    MCAPI bool HasUsedDataChannels() const;

    MCAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>>
    InternalCreateDataChannelWithProxy(::std::string const&, ::webrtc::InternalDataChannelInit const&);

    MCAPI void NotifyDataChannelsOfTransportCreated();

    MCAPI void OnDataChannelOpenMessage(::webrtc::scoped_refptr<::webrtc::SctpDataChannel>, bool);

    MCAPI void OnSctpDataChannelClosed(::webrtc::SctpDataChannel*);

    MCAPI void OnTransportChanged(::webrtc::DataChannelTransportInterface*);

    MCAPI void PrepareForShutdown();

    MCAPI ::webrtc::RTCError
    ReserveOrAllocateSid(::std::optional<::webrtc::StreamId>&, ::std::optional<::rtc::SSLRole>);

    MCAPI void SetupDataChannelTransport_n(::webrtc::DataChannelTransportInterface*);

    MCAPI void TeardownDataChannelTransport_n(::webrtc::RTCError);

    MCAPI ::rtc::Thread* network_thread() const;

    MCAPI void set_data_channel_transport(::webrtc::DataChannelTransportInterface*);

    MCAPI ::rtc::Thread* signaling_thread() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForDataChannelSink();

    MCAPI static void** $vftableForSctpDataChannelControllerInterface();
    // NOLINTEND
};

} // namespace webrtc
