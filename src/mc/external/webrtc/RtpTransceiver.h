#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/external/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ChannelInterface; }
namespace cricket { class MediaContentDescription; }
namespace cricket { struct AudioOptions; }
namespace cricket { struct MediaConfig; }
namespace cricket { struct VideoOptions; }
namespace webrtc { class Call; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class VideoBitrateAllocatorFactory; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct RtpHeaderExtensionCapability; }
// clang-format on

namespace webrtc {

class RtpTransceiver {
public:
    // prevent constructor by default
    RtpTransceiver& operator=(RtpTransceiver const&);
    RtpTransceiver(RtpTransceiver const&);
    RtpTransceiver();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
        AddReceiver(::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>);

    MCAPI void AddSender(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>);

    MCAPI void ClearChannel();

    MCAPI ::webrtc::RTCError
    CreateChannel(::std::string_view, ::webrtc::Call*, ::cricket::MediaConfig const&, bool, ::webrtc::CryptoOptions, ::cricket::AudioOptions const&, ::cricket::VideoOptions const&, ::webrtc::VideoBitrateAllocatorFactory*, ::std::function<::webrtc::RtpTransportInternal*(::std::string_view)>);

    MCAPI void OnFirstPacketReceived();

    MCAPI void OnNegotiationUpdate(::webrtc::SdpType, ::cricket::MediaContentDescription const*);

    MCAPI void PushNewMediaChannelAndDeleteChannel(::std::unique_ptr<::cricket::ChannelInterface>);

    MCAPI bool RemoveReceiver(::webrtc::RtpReceiverInterface*);

    MCAPI bool RemoveSender(::webrtc::RtpSenderInterface*);

    MCAPI RtpTransceiver(::cricket::MediaType, ::webrtc::ConnectionContext*);

    MCAPI
    RtpTransceiver(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>, ::webrtc::ConnectionContext*, ::std::vector<::webrtc::RtpHeaderExtensionCapability>, ::std::function<void()>);

    MCAPI void
        SetChannel(::std::unique_ptr<::cricket::ChannelInterface>, ::std::function<::webrtc::RtpTransportInternal*(::std::string const&)>);

    MCAPI void SetPeerConnectionClosed();

    MCAPI void StopSendingAndReceiving();

    MCAPI void StopTransceiverProcedure();

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> receiver_internal() const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> sender_internal() const;

    MCAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>>
    senders() const;

    MCAPI void set_current_direction(::webrtc::RtpTransceiverDirection);

    MCAPI void set_fired_direction(::std::optional<::webrtc::RtpTransceiverDirection>);

    MCAPI void set_mid(::std::optional<::std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::MediaType, ::webrtc::ConnectionContext*);

    MCAPI void* $ctor(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>, ::webrtc::ConnectionContext*, ::std::vector<::webrtc::RtpHeaderExtensionCapability>, ::std::function<void()>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
