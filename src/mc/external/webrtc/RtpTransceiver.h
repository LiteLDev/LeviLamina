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
    RtpTransceiver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
        AddReceiver(::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>);

    MCNAPI void AddSender(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>);

    MCNAPI void ClearChannel();

    MCNAPI ::webrtc::RTCError
    CreateChannel(::std::string_view, ::webrtc::Call*, ::cricket::MediaConfig const&, bool, ::webrtc::CryptoOptions, ::cricket::AudioOptions const&, ::cricket::VideoOptions const&, ::webrtc::VideoBitrateAllocatorFactory*, ::std::function<::webrtc::RtpTransportInternal*(::std::string_view)>);

    MCNAPI void OnFirstPacketReceived();

    MCNAPI void OnNegotiationUpdate(::webrtc::SdpType, ::cricket::MediaContentDescription const*);

    MCNAPI void PushNewMediaChannelAndDeleteChannel(::std::unique_ptr<::cricket::ChannelInterface>);

    MCNAPI bool RemoveReceiver(::webrtc::RtpReceiverInterface*);

    MCNAPI bool RemoveSender(::webrtc::RtpSenderInterface*);

    MCNAPI RtpTransceiver(::cricket::MediaType, ::webrtc::ConnectionContext*);

    MCNAPI
    RtpTransceiver(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>, ::webrtc::ConnectionContext*, ::std::vector<::webrtc::RtpHeaderExtensionCapability>, ::std::function<void()>);

    MCNAPI void
        SetChannel(::std::unique_ptr<::cricket::ChannelInterface>, ::std::function<::webrtc::RtpTransportInternal*(::std::string const&)>);

    MCNAPI void SetPeerConnectionClosed();

    MCNAPI void StopSendingAndReceiving();

    MCNAPI void StopTransceiverProcedure();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> receiver_internal() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> sender_internal() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>>
    senders() const;

    MCNAPI void set_current_direction(::webrtc::RtpTransceiverDirection);

    MCNAPI void set_fired_direction(::std::optional<::webrtc::RtpTransceiverDirection>);

    MCNAPI void set_mid(::std::optional<::std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::MediaType, ::webrtc::ConnectionContext*);

    MCNAPI void* $ctor(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>>, ::webrtc::ConnectionContext*, ::std::vector<::webrtc::RtpHeaderExtensionCapability>, ::std::function<void()>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
