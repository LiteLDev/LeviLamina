#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/external/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/RtpTransceiverInterface.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Call; }
namespace webrtc { class ChannelInterface; }
namespace webrtc { class CodecLookupHelper; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class Environment; }
namespace webrtc { class MediaContentDescription; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class VideoBitrateAllocatorFactory; }
namespace webrtc { struct AudioOptions; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct MediaConfig; }
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpHeaderExtensionCapability; }
namespace webrtc { struct VideoOptions; }
// clang-format on

namespace webrtc {

class RtpTransceiver : public ::webrtc::RtpTransceiverInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk6797d8;
    ::ll::UntypedStorage<8, 8>  mUnkb3b0d4;
    ::ll::UntypedStorage<1, 1>  mUnk4e5aea;
    ::ll::UntypedStorage<4, 4>  mUnk798b05;
    ::ll::UntypedStorage<8, 8>  mUnkc61ef0;
    ::ll::UntypedStorage<8, 24> mUnk171f4d;
    ::ll::UntypedStorage<8, 24> mUnke105d1;
    ::ll::UntypedStorage<1, 1>  mUnkbefaf8;
    ::ll::UntypedStorage<1, 1>  mUnk1d970c;
    ::ll::UntypedStorage<1, 1>  mUnk4c7d32;
    ::ll::UntypedStorage<4, 4>  mUnk6ff740;
    ::ll::UntypedStorage<4, 8>  mUnk64689d;
    ::ll::UntypedStorage<4, 8>  mUnk1d60d3;
    ::ll::UntypedStorage<8, 40> mUnkbda1a1;
    ::ll::UntypedStorage<8, 16> mUnk713c90;
    ::ll::UntypedStorage<1, 1>  mUnk536c35;
    ::ll::UntypedStorage<1, 1>  mUnk225bd1;
    ::ll::UntypedStorage<1, 1>  mUnk3bde7d;
    ::ll::UntypedStorage<8, 8>  mUnk203fe7;
    ::ll::UntypedStorage<8, 8>  mUnk986261;
    ::ll::UntypedStorage<8, 8>  mUnk679c2e;
    ::ll::UntypedStorage<8, 24> mUnkec8200;
    ::ll::UntypedStorage<8, 24> mUnk961572;
    ::ll::UntypedStorage<8, 24> mUnk8ab6da;
    ::ll::UntypedStorage<8, 24> mUnk49e034;
    ::ll::UntypedStorage<8, 24> mUnkcb0ebf;
    ::ll::UntypedStorage<8, 24> mUnkb60afa;
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

    virtual ::webrtc::MediaType media_type() const /*override*/;

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

    virtual ::webrtc::RTCError SetCodecPreferences(
        ::webrtc::ArrayView<::webrtc::RtpCodecCapability, 18446744073709546905> codec_capabilities
    ) /*override*/;

    virtual ::std::vector<::webrtc::RtpCodecCapability> codec_preferences() const /*override*/;

    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetHeaderExtensionsToNegotiate() const /*override*/;

    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetNegotiatedHeaderExtensions() const /*override*/;

    virtual ::webrtc::RTCError SetHeaderExtensionsToNegotiate(
        ::webrtc::ArrayView<::webrtc::RtpHeaderExtensionCapability const, 18446744073709546905> header_extensions
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
        ::webrtc::MediaConfig const&                                         media_config,
        bool                                                                 srtp_required,
        ::webrtc::CryptoOptions                                              crypto_options,
        ::webrtc::AudioOptions const&                                        audio_options,
        ::webrtc::VideoOptions const&                                        video_options,
        ::webrtc::VideoBitrateAllocatorFactory*                              video_bitrate_allocator_factory,
        ::std::function<::webrtc::RtpTransportInternal*(::std::string_view)> transport_lookup
    );

    MCNAPI void OnNegotiationUpdate(::webrtc::SdpType sdp_type, ::webrtc::MediaContentDescription const* content);

    MCNAPI bool RemoveReceiver(::webrtc::RtpReceiverInterface* receiver);

    MCNAPI bool RemoveSender(::webrtc::RtpSenderInterface* sender);

    MCNAPI RtpTransceiver(
        ::webrtc::Environment const& env,
        ::webrtc::MediaType          media_type,
        ::webrtc::ConnectionContext* context,
        ::webrtc::CodecLookupHelper* codec_lookup_helper
    );

    MCNAPI RtpTransceiver(
        ::webrtc::Environment const&                                                                   env,
        ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>     sender,
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> receiver,
        ::webrtc::ConnectionContext*                                                                   context,
        ::webrtc::CodecLookupHelper*                          codec_lookup_helper,
        ::std::vector<::webrtc::RtpHeaderExtensionCapability> header_extensions_to_negotiate,
        ::std::function<void()>                               on_negotiation_needed
    );

    MCNAPI void SetChannel(
        ::std::unique_ptr<::webrtc::ChannelInterface>                          channel,
        ::std::function<::webrtc::RtpTransportInternal*(::std::string const&)> transport_lookup
    );

    MCNAPI void SetPeerConnectionClosed();

    MCNAPI void StopSendingAndReceiving();

    MCNAPI void StopTransceiverProcedure();

    MCNAPI ::webrtc::RTCError UpdateCodecPreferencesCaches(::std::vector<::webrtc::RtpCodecCapability> const& codecs);

    MCNAPI ::std::vector<::webrtc::RtpCodecCapability> filtered_codec_preferences() const;

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
    MCNAPI void* $ctor(
        ::webrtc::Environment const& env,
        ::webrtc::MediaType          media_type,
        ::webrtc::ConnectionContext* context,
        ::webrtc::CodecLookupHelper* codec_lookup_helper
    );

    MCNAPI void* $ctor(
        ::webrtc::Environment const&                                                                   env,
        ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>>     sender,
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> receiver,
        ::webrtc::ConnectionContext*                                                                   context,
        ::webrtc::CodecLookupHelper*                          codec_lookup_helper,
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
    MCNAPI ::webrtc::MediaType $media_type() const;

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

    MCNAPI ::webrtc::RTCError
    $SetCodecPreferences(::webrtc::ArrayView<::webrtc::RtpCodecCapability, 18446744073709546905> codec_capabilities);

    MCNAPI ::std::vector<::webrtc::RtpCodecCapability> $codec_preferences() const;

    MCNAPI ::std::vector<::webrtc::RtpHeaderExtensionCapability> $GetHeaderExtensionsToNegotiate() const;

    MCNAPI ::std::vector<::webrtc::RtpHeaderExtensionCapability> $GetNegotiatedHeaderExtensions() const;

    MCNAPI ::webrtc::RTCError $SetHeaderExtensionsToNegotiate(
        ::webrtc::ArrayView<::webrtc::RtpHeaderExtensionCapability const, 18446744073709546905> header_extensions
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
