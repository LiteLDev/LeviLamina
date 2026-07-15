#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/TransformableFrameInterface.h"
#include "mc/external/webrtc/TransformableVideoFrameInterface.h"
#include "mc/external/webrtc/VideoCodecType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EncodedImage; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class VideoFrameMetadata; }
namespace webrtc { struct RTPVideoHeader; }
// clang-format on

namespace webrtc {

class TransformableVideoSenderFrame : public ::webrtc::TransformableVideoFrameInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnk93a870;
    ::ll::UntypedStorage<8, 8>    mUnkf67935;
    ::ll::UntypedStorage<8, 2032> mUnk9b5844;
    ::ll::UntypedStorage<4, 4>    mUnk54cc76;
    ::ll::UntypedStorage<1, 1>    mUnkdc649c;
    ::ll::UntypedStorage<4, 8>    mUnk428102;
    ::ll::UntypedStorage<4, 4>    mUnk682ac3;
    ::ll::UntypedStorage<8, 8>    mUnk3b233b;
    ::ll::UntypedStorage<8, 16>   mUnk8e882c;
    ::ll::UntypedStorage<8, 8>    mUnkffbf2c;
    ::ll::UntypedStorage<4, 4>    mUnkdbbc06;
    ::ll::UntypedStorage<8, 24>   mUnk417d28;
    // NOLINTEND

public:
    // prevent constructor by default
    TransformableVideoSenderFrame& operator=(TransformableVideoSenderFrame const&);
    TransformableVideoSenderFrame(TransformableVideoSenderFrame const&);
    TransformableVideoSenderFrame();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransformableVideoSenderFrame() /*override*/ = default;

    virtual ::webrtc::ArrayView<uchar const, 18446744073709546905> GetData() const /*override*/;

    virtual void SetData(::webrtc::ArrayView<uchar const, 18446744073709546905> data) /*override*/;

    virtual uint GetTimestamp() const /*override*/;

    virtual void SetRTPTimestamp(uint timestamp) /*override*/;

    virtual uint GetSsrc() const /*override*/;

    virtual bool IsKeyFrame() const /*override*/;

    virtual ::webrtc::VideoFrameMetadata Metadata() const /*override*/;

    virtual void SetMetadata(::webrtc::VideoFrameMetadata const& metadata) /*override*/;

    virtual uchar GetPayloadType() const /*override*/;

    virtual ::std::optional<::webrtc::Timestamp> GetCaptureTimeIdentifier() const /*override*/;

    virtual ::std::optional<::webrtc::Timestamp> GetPresentationTimestamp() const /*override*/;

    virtual ::webrtc::TransformableFrameInterface::Direction GetDirection() const /*override*/;

    virtual ::std::string GetMimeType() const /*override*/;

    virtual ::std::optional<::webrtc::Timestamp> ReceiveTime() const /*override*/;

    virtual ::std::optional<::webrtc::Timestamp> CaptureTime() const /*override*/;

    virtual ::std::optional<::webrtc::TimeDelta> SenderCaptureTimeOffset() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransformableVideoSenderFrame(
        ::webrtc::EncodedImage const&             encoded_image,
        ::webrtc::RTPVideoHeader const&           video_header,
        int                                       payload_type,
        ::std::optional<::webrtc::VideoCodecType> codec_type,
        uint                                      rtp_timestamp,
        ::webrtc::TimeDelta                       expected_retransmission_time,
        uint                                      ssrc,
        ::std::vector<uint>                       csrcs
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::EncodedImage const&             encoded_image,
        ::webrtc::RTPVideoHeader const&           video_header,
        int                                       payload_type,
        ::std::optional<::webrtc::VideoCodecType> codec_type,
        uint                                      rtp_timestamp,
        ::webrtc::TimeDelta                       expected_retransmission_time,
        uint                                      ssrc,
        ::std::vector<uint>                       csrcs
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::ArrayView<uchar const, 18446744073709546905> $GetData() const;

    MCNAPI void $SetData(::webrtc::ArrayView<uchar const, 18446744073709546905> data);

    MCNAPI uint $GetTimestamp() const;

    MCNAPI void $SetRTPTimestamp(uint timestamp);

    MCNAPI uint $GetSsrc() const;

    MCNAPI bool $IsKeyFrame() const;

    MCNAPI ::webrtc::VideoFrameMetadata $Metadata() const;

    MCNAPI void $SetMetadata(::webrtc::VideoFrameMetadata const& metadata);

    MCNAPI uchar $GetPayloadType() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> $GetCaptureTimeIdentifier() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> $GetPresentationTimestamp() const;

    MCNAPI ::webrtc::TransformableFrameInterface::Direction $GetDirection() const;

    MCNAPI ::std::string $GetMimeType() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> $ReceiveTime() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> $CaptureTime() const;

    MCNAPI ::std::optional<::webrtc::TimeDelta> $SenderCaptureTimeOffset() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
