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
    // member functions
    // NOLINTBEGIN
    MCNAPI void AllocateSctpSids(::rtc::SSLRole);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::SctpDataChannel>>
    CreateDataChannel(::std::string const&, ::webrtc::InternalDataChannelInit&);

    MCNAPI ::std::vector<::webrtc::DataChannelStats> GetDataChannelStats() const;

    MCNAPI bool HandleOpenMessage_n(int, ::webrtc::DataMessageType, ::rtc::CopyOnWriteBuffer const&);

    MCNAPI bool HasDataChannels() const;

    MCNAPI bool HasUsedDataChannels() const;

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>>
    InternalCreateDataChannelWithProxy(::std::string const&, ::webrtc::InternalDataChannelInit const&);

    MCNAPI void NotifyDataChannelsOfTransportCreated();

    MCNAPI void OnDataChannelOpenMessage(::webrtc::scoped_refptr<::webrtc::SctpDataChannel>, bool);

    MCNAPI void OnSctpDataChannelClosed(::webrtc::SctpDataChannel*);

    MCNAPI void OnTransportChanged(::webrtc::DataChannelTransportInterface*);

    MCNAPI void PrepareForShutdown();

    MCNAPI ::webrtc::RTCError
    ReserveOrAllocateSid(::std::optional<::webrtc::StreamId>&, ::std::optional<::rtc::SSLRole>);

    MCNAPI void SetupDataChannelTransport_n(::webrtc::DataChannelTransportInterface*);

    MCNAPI void TeardownDataChannelTransport_n(::webrtc::RTCError);

    MCNAPI ::rtc::Thread* network_thread() const;

    MCNAPI void set_data_channel_transport(::webrtc::DataChannelTransportInterface*);

    MCNAPI ::rtc::Thread* signaling_thread() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForDataChannelSink();

    MCNAPI static void** $vftableForSctpDataChannelControllerInterface();
    // NOLINTEND
};

} // namespace webrtc
