#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/EncodedImageCallback.h"
#include "mc/external/webrtc/RtpSequenceNumberMap.h"
#include "mc/external/webrtc/RtpVideoSenderInterface.h"
#include "mc/external/webrtc/StreamFeedbackObserver.h"
#include "mc/external/webrtc/VCMProtectionCallback.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class EncodedImage; }
namespace webrtc { class FecController; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class Frequency; }
namespace webrtc { class RateLimiter; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class Transport; }
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc { struct BitrateAllocationUpdate; }
namespace webrtc { struct CodecSpecificInfo; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct RtpConfig; }
namespace webrtc { struct RtpPayloadState; }
namespace webrtc { struct RtpSenderObservers; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RtpVideoSender : public ::webrtc::RtpVideoSenderInterface,
                       public ::webrtc::VCMProtectionCallback,
                       public ::webrtc::StreamFeedbackObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk2fe374;
    ::ll::UntypedStorage<1, 1>   mUnkd26cd1;
    ::ll::UntypedStorage<1, 1>   mUnkcae22e;
    ::ll::UntypedStorage<1, 1>   mUnk1089b5;
    ::ll::UntypedStorage<8, 40>  mUnk42e501;
    ::ll::UntypedStorage<1, 1>   mUnk922b4d;
    ::ll::UntypedStorage<8, 8>   mUnk5fc539;
    ::ll::UntypedStorage<1, 1>   mUnk80a0fd;
    ::ll::UntypedStorage<8, 24>  mUnkb22d71;
    ::ll::UntypedStorage<8, 288> mUnk74c091;
    ::ll::UntypedStorage<4, 8>   mUnkce64ca;
    ::ll::UntypedStorage<8, 8>   mUnkff5ef2;
    ::ll::UntypedStorage<8, 8>   mUnk808d3a;
    ::ll::UntypedStorage<1, 1>   mUnk2f9f84;
    ::ll::UntypedStorage<8, 24>  mUnk8be589;
    ::ll::UntypedStorage<8, 8>   mUnk762d4c;
    ::ll::UntypedStorage<4, 4>   mUnk34e69a;
    ::ll::UntypedStorage<4, 4>   mUnk411a20;
    ::ll::UntypedStorage<8, 32>  mUnk238733;
    ::ll::UntypedStorage<8, 24>  mUnkce2df4;
    ::ll::UntypedStorage<8, 8>   mUnkc028fd;
    ::ll::UntypedStorage<8, 16>  mUnkaddf58;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpVideoSender& operator=(RtpVideoSender const&);
    RtpVideoSender(RtpVideoSender const&);
    RtpVideoSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~RtpVideoSender() /*override*/;

    // vIndex: 3
    virtual void SetSending(bool enabled) /*override*/;

    // vIndex: 4
    virtual bool IsActive() /*override*/;

    // vIndex: 5
    virtual void OnNetworkAvailability(bool network_available) /*override*/;

    // vIndex: 6
    virtual ::std::map<uint, ::webrtc::RtpState> GetRtpStates() const /*override*/;

    // vIndex: 7
    virtual ::std::map<uint, ::webrtc::RtpPayloadState> GetRtpPayloadStates() const /*override*/;

    // vIndex: 8
    virtual void DeliverRtcp(uchar const* packet, uint64 length) /*override*/;

    // vIndex: 0
    virtual int ProtectionRequest(
        ::webrtc::FecProtectionParams const* delta_params,
        ::webrtc::FecProtectionParams const* key_params,
        uint*                                sent_video_rate_bps,
        uint*                                sent_nack_rate_bps,
        uint*                                sent_fec_rate_bps
    ) /*override*/;

    // vIndex: 1
    virtual void SetRetransmissionMode(int retransmission_mode) /*override*/;

    // vIndex: 0
    virtual void SetFecAllowed(bool fec_allowed) /*override*/;

    // vIndex: 1
    virtual ::webrtc::EncodedImageCallback::Result OnEncodedImage(
        ::webrtc::EncodedImage const&      encoded_image,
        ::webrtc::CodecSpecificInfo const* codec_specific_info
    ) /*override*/;

    // vIndex: 9
    virtual void OnBitrateAllocationUpdated(::webrtc::VideoBitrateAllocation const& bitrate) /*override*/;

    // vIndex: 10
    virtual void OnVideoLayersAllocationUpdated(::webrtc::VideoLayersAllocation const& allocation) /*override*/;

    // vIndex: 12
    virtual void OnTransportOverheadChanged(uint64 transport_overhead_bytes_per_packet) /*override*/;

    // vIndex: 11
    virtual void OnBitrateUpdated(::webrtc::BitrateAllocationUpdate update, int framerate) /*override*/;

    // vIndex: 13
    virtual uint GetPayloadBitrateBps() const /*override*/;

    // vIndex: 14
    virtual uint GetProtectionBitrateBps() const /*override*/;

    // vIndex: 15
    virtual void SetEncodingData(uint64 width, uint64 height, uint64 num_temporal_layers) /*override*/;

    // vIndex: 16
    virtual ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
    GetSentRtpPacketInfos(uint ssrc, ::rtc::ArrayView<ushort const> sequence_numbers) const /*override*/;

    // vIndex: 1
    virtual void OnPacketFeedbackVector(
        ::std::vector<::webrtc::StreamFeedbackObserver::StreamPacketInfo> packet_feedback_vector
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::DataRate CalculateOverheadRate(
        ::webrtc::DataRate  data_rate,
        ::webrtc::DataSize  packet_size,
        ::webrtc::DataSize  overhead_per_packet,
        ::webrtc::Frequency framerate
    ) const;

    MCNAPI void ConfigureSsrcs(::std::map<uint, ::webrtc::RtpState> const& suspended_ssrcs);

    MCNAPI ::webrtc::DataRate GetPostEncodeOverhead() const;

    MCNAPI bool IsActiveLocked();

    MCNAPI bool NackEnabled() const;

    MCNAPI RtpVideoSender(
        ::webrtc::Clock*                                             clock,
        ::std::map<uint, ::webrtc::RtpState> const&                  suspended_ssrcs,
        ::std::map<uint, ::webrtc::RtpPayloadState> const&           states,
        ::webrtc::RtpConfig const&                                   rtp_config,
        int                                                          rtcp_report_interval_ms,
        ::webrtc::Transport*                                         send_transport,
        ::webrtc::RtpSenderObservers const&                          observers,
        ::webrtc::RtpTransportControllerSendInterface*               transport,
        ::webrtc::RtcEventLog*                                       event_log,
        ::webrtc::RateLimiter*                                       retransmission_limiter,
        ::std::unique_ptr<::webrtc::FecController>                   fec_controller,
        ::webrtc::FrameEncryptorInterface*                           frame_encryptor,
        ::webrtc::CryptoOptions const&                               crypto_options,
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer,
        ::webrtc::FieldTrialsView const&                             field_trials,
        ::webrtc::TaskQueueFactory*                                  task_queue_factory
    );

    MCNAPI void SetActiveModulesLocked(bool sending);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Clock*                                             clock,
        ::std::map<uint, ::webrtc::RtpState> const&                  suspended_ssrcs,
        ::std::map<uint, ::webrtc::RtpPayloadState> const&           states,
        ::webrtc::RtpConfig const&                                   rtp_config,
        int                                                          rtcp_report_interval_ms,
        ::webrtc::Transport*                                         send_transport,
        ::webrtc::RtpSenderObservers const&                          observers,
        ::webrtc::RtpTransportControllerSendInterface*               transport,
        ::webrtc::RtcEventLog*                                       event_log,
        ::webrtc::RateLimiter*                                       retransmission_limiter,
        ::std::unique_ptr<::webrtc::FecController>                   fec_controller,
        ::webrtc::FrameEncryptorInterface*                           frame_encryptor,
        ::webrtc::CryptoOptions const&                               crypto_options,
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer,
        ::webrtc::FieldTrialsView const&                             field_trials,
        ::webrtc::TaskQueueFactory*                                  task_queue_factory
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
    MCNAPI void $SetSending(bool enabled);

    MCNAPI bool $IsActive();

    MCNAPI void $OnNetworkAvailability(bool network_available);

    MCNAPI ::std::map<uint, ::webrtc::RtpState> $GetRtpStates() const;

    MCNAPI ::std::map<uint, ::webrtc::RtpPayloadState> $GetRtpPayloadStates() const;

    MCNAPI void $DeliverRtcp(uchar const* packet, uint64 length);

    MCNAPI int $ProtectionRequest(
        ::webrtc::FecProtectionParams const* delta_params,
        ::webrtc::FecProtectionParams const* key_params,
        uint*                                sent_video_rate_bps,
        uint*                                sent_nack_rate_bps,
        uint*                                sent_fec_rate_bps
    );

    MCNAPI void $SetRetransmissionMode(int retransmission_mode);

    MCNAPI void $SetFecAllowed(bool fec_allowed);

    MCNAPI ::webrtc::EncodedImageCallback::Result $OnEncodedImage(
        ::webrtc::EncodedImage const&      encoded_image,
        ::webrtc::CodecSpecificInfo const* codec_specific_info
    );

    MCNAPI void $OnBitrateAllocationUpdated(::webrtc::VideoBitrateAllocation const& bitrate);

    MCNAPI void $OnVideoLayersAllocationUpdated(::webrtc::VideoLayersAllocation const& allocation);

    MCNAPI void $OnTransportOverheadChanged(uint64 transport_overhead_bytes_per_packet);

    MCNAPI void $OnBitrateUpdated(::webrtc::BitrateAllocationUpdate update, int framerate);

    MCNAPI uint $GetPayloadBitrateBps() const;

    MCNAPI uint $GetProtectionBitrateBps() const;

    MCNAPI void $SetEncodingData(uint64 width, uint64 height, uint64 num_temporal_layers);

    MCNAPI ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
    $GetSentRtpPacketInfos(uint ssrc, ::rtc::ArrayView<ushort const> sequence_numbers) const;

    MCNAPI void
    $OnPacketFeedbackVector(::std::vector<::webrtc::StreamFeedbackObserver::StreamPacketInfo> packet_feedback_vector);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForStreamFeedbackObserver();

    MCNAPI static void** $vftableForEncodedImageCallback();

    MCNAPI static void** $vftableForVCMProtectionCallback();

    MCNAPI static void** $vftableForFecControllerOverride();
    // NOLINTEND
};

} // namespace webrtc
