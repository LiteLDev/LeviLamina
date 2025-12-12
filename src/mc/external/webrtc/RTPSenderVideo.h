#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTPVideoFrameSenderInterface.h"
#include "mc/external/webrtc/VideoCodecType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class EncodedImage; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RTPSenderVideo : public ::webrtc::RTPVideoFrameSenderInterface {
public:
    // RTPSenderVideo inner types declare
    // clang-format off
    struct Config;
    struct TemporalLayerStats;
    // clang-format on

    // RTPSenderVideo inner types define
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1b08bb;
        ::ll::UntypedStorage<8, 8> mUnk1339ea;
        ::ll::UntypedStorage<4, 8> mUnkd3806b;
        ::ll::UntypedStorage<8, 8> mUnkdb66f5;
        ::ll::UntypedStorage<8, 8> mUnk80ae9d;
        ::ll::UntypedStorage<1, 1> mUnkf02cdb;
        ::ll::UntypedStorage<1, 1> mUnk504672;
        ::ll::UntypedStorage<4, 8> mUnk83a346;
        ::ll::UntypedStorage<8, 8> mUnk43f151;
        ::ll::UntypedStorage<8, 8> mUnkab5022;
        ::ll::UntypedStorage<8, 8> mUnk3b8af3;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Config();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct TemporalLayerStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88> mUnke7c3fd;
        ::ll::UntypedStorage<8, 8>  mUnkeb79b4;
        // NOLINTEND

    public:
        // prevent constructor by default
        TemporalLayerStats& operator=(TemporalLayerStats const&);
        TemporalLayerStats(TemporalLayerStats const&);
        TemporalLayerStats();
    };

    enum class SendVideoLayersAllocation : int {
        KSendWithResolution    = 0,
        KSendWithoutResolution = 1,
        KDontSend              = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnke273bd;
    ::ll::UntypedStorage<8, 8>   mUnka3b120;
    ::ll::UntypedStorage<4, 8>   mUnke0e624;
    ::ll::UntypedStorage<4, 4>   mUnk1208b5;
    ::ll::UntypedStorage<4, 4>   mUnk757e7f;
    ::ll::UntypedStorage<4, 72>  mUnkf2ff94;
    ::ll::UntypedStorage<1, 1>   mUnk8af92a;
    ::ll::UntypedStorage<8, 8>   mUnkf265ce;
    ::ll::UntypedStorage<8, 248> mUnkec5bb9;
    ::ll::UntypedStorage<4, 4>   mUnk26e529;
    ::ll::UntypedStorage<8, 248> mUnk218bd3;
    ::ll::UntypedStorage<8, 24>  mUnk7d2a94;
    ::ll::UntypedStorage<1, 1>   mUnkaed8f0;
    ::ll::UntypedStorage<8, 24>  mUnkaa88e3;
    ::ll::UntypedStorage<8, 40>  mUnkd07395;
    ::ll::UntypedStorage<4, 8>   mUnk6359a8;
    ::ll::UntypedStorage<4, 8>   mUnk3846cb;
    ::ll::UntypedStorage<8, 8>   mUnkdb7a89;
    ::ll::UntypedStorage<8, 40>  mUnk50cb76;
    ::ll::UntypedStorage<8, 88>  mUnkd68b81;
    ::ll::UntypedStorage<8, 16>  mUnkb472a4;
    ::ll::UntypedStorage<8, 48>  mUnk8d25a4;
    ::ll::UntypedStorage<8, 8>   mUnk7fef67;
    ::ll::UntypedStorage<1, 1>   mUnk769b48;
    ::ll::UntypedStorage<1, 1>   mUnkbde12f;
    ::ll::UntypedStorage<8, 56>  mUnk90a691;
    ::ll::UntypedStorage<8, 24>  mUnkdea71f;
    ::ll::UntypedStorage<8, 8>   mUnke6aab3;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPSenderVideo& operator=(RTPSenderVideo const&);
    RTPSenderVideo(RTPSenderVideo const&);
    RTPSenderVideo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ~RTPSenderVideo() /*override*/;

    // vIndex: 0
    virtual bool SendVideo(
        int                                       payload_type,
        ::std::optional<::webrtc::VideoCodecType> codec_type,
        uint                                      rtp_timestamp,
        ::webrtc::Timestamp                       capture_time,
        ::rtc::ArrayView<uchar const>             payload,
        uint64                                    encoder_output_size,
        ::webrtc::RTPVideoHeader                  video_header,
        ::webrtc::TimeDelta                       expected_retransmission_time,
        ::std::vector<uint>                       csrcs
    ) /*override*/;

    // vIndex: 1
    virtual void
    SetVideoStructureAfterTransformation(::webrtc::FrameDependencyStructure const* video_structure) /*override*/;

    // vIndex: 2
    virtual void SetVideoLayersAllocationAfterTransformation(::webrtc::VideoLayersAllocation allocation) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRtpHeaderExtensions(
        ::webrtc::RTPVideoHeader const& video_header,
        bool                            first_packet,
        bool                            last_packet,
        ::webrtc::RtpPacketToSend*      packet
    ) const;

    MCNAPI bool AllowRetransmission(
        uchar               temporal_id,
        int                 retransmission_settings,
        ::webrtc::TimeDelta expected_retransmission_time
    );

    MCNAPI uint64 FecPacketOverhead() const;

    MCNAPI void LogAndSendToNetwork(
        ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> packets,
        uint64                                                      encoder_output_size
    );

    MCNAPI void MaybeUpdateCurrentPlayoutDelay(::webrtc::RTPVideoHeader const& header);

    MCNAPI ::webrtc::DataRate PostEncodeOverhead() const;

    MCNAPI explicit RTPSenderVideo(::webrtc::RTPSenderVideo::Config const& config);

    MCNAPI bool SendEncodedImage(
        int                                       payload_type,
        ::std::optional<::webrtc::VideoCodecType> codec_type,
        uint                                      rtp_timestamp,
        ::webrtc::EncodedImage const&             encoded_image,
        ::webrtc::RTPVideoHeader                  video_header,
        ::webrtc::TimeDelta                       expected_retransmission_time
    );

    MCNAPI void SetRetransmissionSetting(int retransmission_settings);

    MCNAPI void SetVideoLayersAllocation(::webrtc::VideoLayersAllocation allocation);

    MCNAPI void SetVideoLayersAllocationInternal(::webrtc::VideoLayersAllocation allocation);

    MCNAPI void SetVideoStructure(::webrtc::FrameDependencyStructure const* video_structure);

    MCNAPI void SetVideoStructureInternal(::webrtc::FrameDependencyStructure const* video_structure);

    MCNAPI bool UpdateConditionalRetransmit(uchar temporal_id, ::webrtc::TimeDelta expected_retransmission_time);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar GetTemporalId(::webrtc::RTPVideoHeader const& header);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::webrtc::TimeDelta const& kTLRateWindowSize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTPSenderVideo::Config const& config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $SendVideo(
        int                                       payload_type,
        ::std::optional<::webrtc::VideoCodecType> codec_type,
        uint                                      rtp_timestamp,
        ::webrtc::Timestamp                       capture_time,
        ::rtc::ArrayView<uchar const>             payload,
        uint64                                    encoder_output_size,
        ::webrtc::RTPVideoHeader                  video_header,
        ::webrtc::TimeDelta                       expected_retransmission_time,
        ::std::vector<uint>                       csrcs
    );

    MCNAPI void $SetVideoStructureAfterTransformation(::webrtc::FrameDependencyStructure const* video_structure);

    MCNAPI void $SetVideoLayersAllocationAfterTransformation(::webrtc::VideoLayersAllocation allocation);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
