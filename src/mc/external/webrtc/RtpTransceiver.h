#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/external/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/RtpTransceiverInterface.h"
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
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpHeaderExtensionCapability; }
// clang-format on

namespace webrtc {

class RtpTransceiver : public ::webrtc::RtpTransceiverInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb3b0d4;
    ::ll::UntypedStorage<1, 1>  mUnk4e5aea;
    ::ll::UntypedStorage<4, 4>  mUnk4a1147;
    ::ll::UntypedStorage<8, 8>  mUnkc61ef0;
    ::ll::UntypedStorage<8, 24> mUnka2faf0;
    ::ll::UntypedStorage<8, 24> mUnk1139b7;
    ::ll::UntypedStorage<1, 1>  mUnkbefaf8;
    ::ll::UntypedStorage<1, 1>  mUnk1d970c;
    ::ll::UntypedStorage<1, 1>  mUnk4c7d32;
    ::ll::UntypedStorage<4, 4>  mUnk6ff740;
    ::ll::UntypedStorage<4, 8>  mUnk64689d;
    ::ll::UntypedStorage<4, 8>  mUnk1d60d3;
    ::ll::UntypedStorage<8, 40> mUnk18ca3c;
    ::ll::UntypedStorage<8, 16> mUnk713c90;
    ::ll::UntypedStorage<1, 1>  mUnk536c35;
    ::ll::UntypedStorage<1, 1>  mUnk225bd1;
    ::ll::UntypedStorage<1, 1>  mUnk3bde7d;
    ::ll::UntypedStorage<8, 8>  mUnk40057c;
    ::ll::UntypedStorage<8, 8>  mUnk986261;
    ::ll::UntypedStorage<8, 24> mUnk892afe;
    ::ll::UntypedStorage<8, 24> mUnka13df3;
    ::ll::UntypedStorage<8, 24> mUnk80fe36;
    ::ll::UntypedStorage<8, 64> mUnk2916ea;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpTransceiver& operator=(RtpTransceiver const&);
    RtpTransceiver(RtpTransceiver const&);
    RtpTransceiver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpTransceiver() /*override*/;

    virtual ::cricket::MediaType media_type() const /*override*/;

    virtual ::std::optional<::std::string> mid() const /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender() const /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> receiver() const /*override*/;

    virtual bool stopped() const /*override*/;

    virtual bool stopping() const /*override*/;

    virtual ::webrtc::RtpTransceiverDirection direction() const /*override*/;

    virtual ::webrtc::RTCError SetDirectionWithError(::webrtc::RtpTransceiverDirection new_direction) /*override*/;

    virtual ::std::optional<::webrtc::RtpTransceiverDirection> current_direction() const /*override*/;

    virtual ::std::optional<::webrtc::RtpTransceiverDirection> fired_direction() const /*override*/;

    virtual ::webrtc::RTCError StopStandard() /*override*/;

    virtual void StopInternal() /*override*/;

    virtual ::webrtc::RTCError
    SetCodecPreferences(::rtc::ArrayView<::webrtc::RtpCodecCapability> codec_capabilities) /*override*/;

    virtual ::std::vector<::webrtc::RtpCodecCapability> codec_preferences() const /*override*/;

    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetHeaderExtensionsToNegotiate() const /*override*/;

    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetNegotiatedHeaderExtensions() const /*override*/;

    virtual ::webrtc::RTCError SetHeaderExtensionsToNegotiate(
        ::rtc::ArrayView<::webrtc::RtpHeaderExtensionCapability const> header_extensions
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddReceiver(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> receiver
    );

    MCNAPI void
    AddSender(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> sender);

    MCNAPI void ClearChannel();

    MCNAPI ::webrtc::RTCError CreateChannel(
        ::std::string_view                                                   mid,
        ::webrtc::Call*                                                      call_ptr,
        ::cricket::MediaConfig const&                                        media_config,
        bool                                                                 srtp_required,
        ::webrtc::CryptoOptions                                              crypto_options,
        ::cricket::AudioOptions const&                                       audio_options,
        ::cricket::VideoOptions const&                                       video_options,
        ::webrtc::VideoBitrateAllocatorFactory*                              video_bitrate_allocator_factory,
        ::std::function<::webrtc::RtpTransportInternal*(::std::string_view)> transport_lookup
    );

    MCNAPI void OnNegotiationUpdate(::webrtc::SdpType sdp_type, ::cricket::MediaContentDescription const* content);

    MCNAPI void PushNewMediaChannelAndDeleteChannel(::std::unique_ptr<::cricket::ChannelInterface> channel_to_delete);

    MCNAPI bool RemoveReceiver(::webrtc::RtpReceiverInterface* receiver);

    MCNAPI bool RemoveSender(::webrtc::RtpSenderInterface* sender);

    MCNAPI RtpTransceiver(::cricket::MediaType media_type, ::webrtc::ConnectionContext* context);

    MCNAPI RtpTransceiver(
        ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>     sender,
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> receiver,
        ::webrtc::ConnectionContext*                                                                   context,
        ::std::vector<::webrtc::RtpHeaderExtensionCapability> header_extensions_to_negotiate,
        ::std::function<void()>                               on_negotiation_needed
    );

    MCNAPI void SetPeerConnectionClosed();

    MCNAPI void StopSendingAndReceiving();

    MCNAPI void StopTransceiverProcedure();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> receiver_internal() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> sender_internal() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>>
    senders() const;

    MCNAPI void set_current_direction(::webrtc::RtpTransceiverDirection direction);

    MCNAPI void set_fired_direction(::std::optional<::webrtc::RtpTransceiverDirection> direction);

    MCNAPI void set_mid(::std::optional<::std::string> const& mid);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::MediaType media_type, ::webrtc::ConnectionContext* context);

    MCNAPI void* $ctor(
        ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>     sender,
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> receiver,
        ::webrtc::ConnectionContext*                                                                   context,
        ::std::vector<::webrtc::RtpHeaderExtensionCapability> header_extensions_to_negotiate,
        ::std::function<void()>                               on_negotiation_needed
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::MediaType $media_type() const;

    MCNAPI ::std::optional<::std::string> $mid() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> $sender() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> $receiver() const;

    MCNAPI bool $stopped() const;

    MCNAPI bool $stopping() const;

    MCNAPI ::webrtc::RtpTransceiverDirection $direction() const;

    MCNAPI ::webrtc::RTCError $SetDirectionWithError(::webrtc::RtpTransceiverDirection new_direction);

    MCNAPI ::std::optional<::webrtc::RtpTransceiverDirection> $current_direction() const;

    MCNAPI ::std::optional<::webrtc::RtpTransceiverDirection> $fired_direction() const;

    MCNAPI ::webrtc::RTCError $StopStandard();

    MCNAPI void $StopInternal();

    MCNAPI ::webrtc::RTCError $SetCodecPreferences(::rtc::ArrayView<::webrtc::RtpCodecCapability> codec_capabilities);

    MCNAPI ::std::vector<::webrtc::RtpCodecCapability> $codec_preferences() const;

    MCNAPI ::std::vector<::webrtc::RtpHeaderExtensionCapability> $GetHeaderExtensionsToNegotiate() const;

    MCNAPI ::std::vector<::webrtc::RtpHeaderExtensionCapability> $GetNegotiatedHeaderExtensions() const;

    MCNAPI ::webrtc::RTCError
    $SetHeaderExtensionsToNegotiate(::rtc::ArrayView<::webrtc::RtpHeaderExtensionCapability const> header_extensions);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
