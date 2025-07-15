#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTPVideoHeader.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EncodedImage; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { struct CodecSpecificInfo; }
namespace webrtc { struct CodecSpecificInfoH264; }
namespace webrtc { struct CodecSpecificInfoVP8; }
namespace webrtc { struct CodecSpecificInfoVP9; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct GenericFrameInfo; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct RtpPayloadState; }
// clang-format on

namespace webrtc {

class RtpPayloadParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 232> mUnkc44b72;
    ::ll::UntypedStorage<8, 72>  mUnkffe723;
    ::ll::UntypedStorage<8, 512> mUnk47cd44;
    ::ll::UntypedStorage<8, 24>  mUnkd94a99;
    ::ll::UntypedStorage<8, 64>  mUnkfd2f60;
    ::ll::UntypedStorage<8, 24>  mUnk74e0be;
    ::ll::UntypedStorage<1, 2>   mUnkb8925e;
    ::ll::UntypedStorage<4, 4>   mUnkc57cec;
    ::ll::UntypedStorage<8, 24>  mUnkf69696;
    ::ll::UntypedStorage<1, 1>   mUnk94f364;
    ::ll::UntypedStorage<1, 1>   mUnk442466;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPayloadParams& operator=(RtpPayloadParams const&);
    RtpPayloadParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTPVideoHeader::GenericDescriptorInfo
    GenericDescriptorFromFrameInfo(::webrtc::GenericFrameInfo const& frame_info, int64 frame_id);

    MCNAPI ::std::optional<::webrtc::FrameDependencyStructure>
    GenericStructure(::webrtc::CodecSpecificInfo const* codec_specific_info);

    MCNAPI void GenericToGeneric(int64 frame_id, bool is_keyframe, ::webrtc::RTPVideoHeader* rtp_video_header);

    MCNAPI ::webrtc::RTPVideoHeader GetRtpVideoHeader(
        ::webrtc::EncodedImage const&      image,
        ::webrtc::CodecSpecificInfo const* codec_specific_info,
        ::std::optional<int64>             shared_frame_id
    );

    MCNAPI void H264ToGeneric(
        ::webrtc::CodecSpecificInfoH264 const& h264_info,
        int64                                  frame_id,
        bool                                   is_keyframe,
        ::webrtc::RTPVideoHeader*              rtp_video_header
    );

    MCNAPI RtpPayloadParams(::webrtc::RtpPayloadParams const&);

    MCNAPI RtpPayloadParams(uint ssrc, ::webrtc::RtpPayloadState const* state, ::webrtc::FieldTrialsView const& trials);

    MCNAPI void SetCodecSpecific(::webrtc::RTPVideoHeader* rtp_video_header, bool first_frame_in_picture);

    MCNAPI void SetDependenciesVp8Deprecated(
        ::webrtc::CodecSpecificInfoVP8 const&            vp8_info,
        int64                                            frame_id,
        bool                                             is_keyframe,
        int                                              spatial_index,
        int                                              temporal_index,
        bool                                             layer_sync,
        ::webrtc::RTPVideoHeader::GenericDescriptorInfo* generic
    );

    MCNAPI void SetDependenciesVp8New(
        ::webrtc::CodecSpecificInfoVP8 const&            vp8_info,
        int64                                            frame_id,
        bool                                             is_keyframe,
        bool                                             layer_sync,
        ::webrtc::RTPVideoHeader::GenericDescriptorInfo* generic
    );

    MCNAPI void SetGeneric(
        ::webrtc::CodecSpecificInfo const* codec_specific_info,
        int64                              frame_id,
        bool                               is_keyframe,
        ::webrtc::RTPVideoHeader*          rtp_video_header
    );

    MCNAPI void Vp8ToGeneric(
        ::webrtc::CodecSpecificInfoVP8 const& vp8_info,
        int64                                 frame_id,
        bool                                  is_keyframe,
        ::webrtc::RTPVideoHeader*             rtp_video_header
    );

    MCNAPI void Vp9ToGeneric(
        ::webrtc::CodecSpecificInfoVP9 const& vp9_info,
        int64                                 frame_id,
        ::webrtc::RTPVideoHeader&             rtp_video_header
    );

    MCNAPI uint ssrc() const;

    MCNAPI ::webrtc::RtpPayloadState state() const;

    MCNAPI ~RtpPayloadParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpPayloadParams const&);

    MCNAPI void* $ctor(uint ssrc, ::webrtc::RtpPayloadState const* state, ::webrtc::FieldTrialsView const& trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
