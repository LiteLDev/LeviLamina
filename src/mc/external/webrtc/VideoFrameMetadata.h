#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DecodeTargetIndication.h"
#include "mc/external/webrtc/VideoCodecType.h"
#include "mc/external/webrtc/VideoContentType.h"
#include "mc/external/webrtc/VideoFrameType.h"
#include "mc/external/webrtc/VideoRotation.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RTPVideoHeaderH264; }
namespace webrtc { struct RTPVideoHeaderVP8; }
namespace webrtc { struct RTPVideoHeaderVP9; }
// clang-format on

namespace webrtc {

class VideoFrameMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>    mUnkff2514;
    ::ll::UntypedStorage<2, 2>    mUnk27790b;
    ::ll::UntypedStorage<2, 2>    mUnkc44e66;
    ::ll::UntypedStorage<4, 4>    mUnke4d394;
    ::ll::UntypedStorage<1, 1>    mUnkb5d5b6;
    ::ll::UntypedStorage<8, 16>   mUnkf2b551;
    ::ll::UntypedStorage<4, 4>    mUnk6330cf;
    ::ll::UntypedStorage<4, 4>    mUnkc14eee;
    ::ll::UntypedStorage<8, 48>   mUnka483dc;
    ::ll::UntypedStorage<8, 48>   mUnk430c4a;
    ::ll::UntypedStorage<1, 1>    mUnk861a48;
    ::ll::UntypedStorage<1, 1>    mUnkb071ed;
    ::ll::UntypedStorage<4, 4>    mUnk3f825f;
    ::ll::UntypedStorage<8, 1648> mUnk5b8abb;
    ::ll::UntypedStorage<4, 4>    mUnk377efc;
    ::ll::UntypedStorage<8, 24>   mUnk94dc87;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoFrameMetadata& operator=(VideoFrameMetadata const&);
    VideoFrameMetadata(VideoFrameMetadata const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::VideoCodecType GetCodec() const;

    MCNAPI ::webrtc::VideoContentType GetContentType() const;

    MCNAPI ::std::vector<uint> GetCsrcs() const;

    MCNAPI ::rtc::ArrayView<::webrtc::DecodeTargetIndication const> GetDecodeTargetIndications() const;

    MCNAPI ::rtc::ArrayView<int64 const> GetFrameDependencies() const;

    MCNAPI ::std::optional<int64> GetFrameId() const;

    MCNAPI ::webrtc::VideoFrameType GetFrameType() const;

    MCNAPI ushort GetHeight() const;

    MCNAPI bool GetIsLastFrameInPicture() const;

    MCNAPI ::std::variant<
        ::std::monostate,
        ::webrtc::RTPVideoHeaderVP8,
        ::webrtc::RTPVideoHeaderVP9,
        ::webrtc::RTPVideoHeaderH264> const&
    GetRTPVideoHeaderCodecSpecifics() const;

    MCNAPI ::webrtc::VideoRotation GetRotation() const;

    MCNAPI uchar GetSimulcastIdx() const;

    MCNAPI int GetSpatialIndex() const;

    MCNAPI uint GetSsrc() const;

    MCNAPI int GetTemporalIndex() const;

    MCNAPI ushort GetWidth() const;

    MCNAPI void SetCodec(::webrtc::VideoCodecType codec);

    MCNAPI void SetContentType(::webrtc::VideoContentType content_type);

    MCNAPI void SetCsrcs(::std::vector<uint> csrcs);

    MCNAPI void
    SetDecodeTargetIndications(::rtc::ArrayView<::webrtc::DecodeTargetIndication const> decode_target_indications);

    MCNAPI void SetFrameDependencies(::rtc::ArrayView<int64 const> frame_dependencies);

    MCNAPI void SetFrameId(::std::optional<int64> frame_id);

    MCNAPI void SetFrameType(::webrtc::VideoFrameType frame_type);

    MCNAPI void SetHeight(ushort height);

    MCNAPI void SetIsLastFrameInPicture(bool is_last_frame_in_picture);

    MCNAPI void SetRTPVideoHeaderCodecSpecifics(
        ::std::variant<
            ::std::monostate,
            ::webrtc::RTPVideoHeaderVP8,
            ::webrtc::RTPVideoHeaderVP9,
            ::webrtc::RTPVideoHeaderH264> codec_specifics
    );

    MCNAPI void SetRotation(::webrtc::VideoRotation rotation);

    MCNAPI void SetSimulcastIdx(uchar simulcast_idx);

    MCNAPI void SetSpatialIndex(int spatial_index);

    MCNAPI void SetSsrc(uint ssrc);

    MCNAPI void SetTemporalIndex(int temporal_index);

    MCNAPI void SetWidth(ushort width);

    MCNAPI VideoFrameMetadata();

    MCNAPI ~VideoFrameMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
