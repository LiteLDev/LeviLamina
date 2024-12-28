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
    MCAPI ::webrtc::VideoCodecType GetCodec() const;

    MCAPI ::webrtc::VideoContentType GetContentType() const;

    MCAPI ::std::vector<uint> GetCsrcs() const;

    MCAPI ::rtc::ArrayView<::webrtc::DecodeTargetIndication const> GetDecodeTargetIndications() const;

    MCAPI ::rtc::ArrayView<int64 const> GetFrameDependencies() const;

    MCAPI ::std::optional<int64> GetFrameId() const;

    MCAPI ::webrtc::VideoFrameType GetFrameType() const;

    MCAPI ushort GetHeight() const;

    MCAPI bool GetIsLastFrameInPicture() const;

    MCAPI ::std::variant<
        ::std::monostate,
        ::webrtc::RTPVideoHeaderVP8,
        ::webrtc::RTPVideoHeaderVP9,
        ::webrtc::RTPVideoHeaderH264> const&
    GetRTPVideoHeaderCodecSpecifics() const;

    MCAPI ::webrtc::VideoRotation GetRotation() const;

    MCAPI uchar GetSimulcastIdx() const;

    MCAPI int GetSpatialIndex() const;

    MCAPI uint GetSsrc() const;

    MCAPI int GetTemporalIndex() const;

    MCAPI ushort GetWidth() const;

    MCAPI void SetCodec(::webrtc::VideoCodecType);

    MCAPI void SetContentType(::webrtc::VideoContentType);

    MCAPI void SetCsrcs(::std::vector<uint>);

    MCAPI void SetDecodeTargetIndications(::rtc::ArrayView<::webrtc::DecodeTargetIndication const>);

    MCAPI void SetFrameDependencies(::rtc::ArrayView<int64 const>);

    MCAPI void SetFrameId(::std::optional<int64>);

    MCAPI void SetFrameType(::webrtc::VideoFrameType);

    MCAPI void SetHeight(ushort);

    MCAPI void SetIsLastFrameInPicture(bool);

    MCAPI void SetRTPVideoHeaderCodecSpecifics(::std::variant<
                                               ::std::monostate,
                                               ::webrtc::RTPVideoHeaderVP8,
                                               ::webrtc::RTPVideoHeaderVP9,
                                               ::webrtc::RTPVideoHeaderH264>);

    MCAPI void SetRotation(::webrtc::VideoRotation);

    MCAPI void SetSimulcastIdx(uchar);

    MCAPI void SetSpatialIndex(int);

    MCAPI void SetSsrc(uint);

    MCAPI void SetTemporalIndex(int);

    MCAPI void SetWidth(ushort);

    MCAPI VideoFrameMetadata();

    MCAPI ~VideoFrameMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
