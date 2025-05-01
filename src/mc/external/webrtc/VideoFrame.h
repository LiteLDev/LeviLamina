#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoRotation.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ColorSpace; }
namespace webrtc { class RtpPacketInfos; }
namespace webrtc { class Timestamp; }
namespace webrtc { class VideoFrameBuffer; }
// clang-format on

namespace webrtc {

class VideoFrame {
public:
    // VideoFrame inner types declare
    // clang-format off
    class Builder;
    struct ProcessingTime;
    struct RenderParameters;
    struct UpdateRect;
    // clang-format on

    // VideoFrame inner types define
    struct UpdateRect {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk313848;
        ::ll::UntypedStorage<4, 4> mUnk7afa9a;
        ::ll::UntypedStorage<4, 4> mUnka6df84;
        ::ll::UntypedStorage<4, 4> mUnk98638b;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateRect& operator=(UpdateRect const&);
        UpdateRect(UpdateRect const&);
        UpdateRect();
    };

    struct ProcessingTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkc961e2;
        ::ll::UntypedStorage<8, 8> mUnk382f7b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProcessingTime& operator=(ProcessingTime const&);
        ProcessingTime(ProcessingTime const&);
        ProcessingTime();
    };

    struct RenderParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk216f21;
        ::ll::UntypedStorage<4, 8> mUnkeb0288;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderParameters& operator=(RenderParameters const&);
        RenderParameters(RenderParameters const&);
        RenderParameters();
    };

    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2>  mUnkde362d;
        ::ll::UntypedStorage<8, 8>  mUnkfda812;
        ::ll::UntypedStorage<8, 8>  mUnkd91313;
        ::ll::UntypedStorage<8, 16> mUnk2883cd;
        ::ll::UntypedStorage<8, 16> mUnk9794f0;
        ::ll::UntypedStorage<4, 4>  mUnk7b24ef;
        ::ll::UntypedStorage<8, 8>  mUnk49f1d6;
        ::ll::UntypedStorage<4, 4>  mUnkaa5af4;
        ::ll::UntypedStorage<4, 72> mUnk614555;
        ::ll::UntypedStorage<4, 12> mUnk803cf8;
        ::ll::UntypedStorage<4, 20> mUnk2004f2;
        ::ll::UntypedStorage<8, 8>  mUnk8652cb;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Builder();

        MCNAPI ::webrtc::VideoFrame build();

        MCNAPI ::webrtc::VideoFrame::Builder& set_id(ushort);

        MCNAPI ::webrtc::VideoFrame::Builder& set_rotation(::webrtc::VideoRotation);

        MCNAPI ::webrtc::VideoFrame::Builder& set_timestamp_us(int64);

        MCNAPI ::webrtc::VideoFrame::Builder&
        set_video_frame_buffer(::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const&);

        MCNAPI ~Builder();
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkf3d324;
    ::ll::UntypedStorage<8, 8>  mUnk791bd0;
    ::ll::UntypedStorage<4, 4>  mUnka9200e;
    ::ll::UntypedStorage<8, 8>  mUnkaa81ff;
    ::ll::UntypedStorage<8, 8>  mUnka9c451;
    ::ll::UntypedStorage<8, 16> mUnk5d9d59;
    ::ll::UntypedStorage<8, 16> mUnk141411;
    ::ll::UntypedStorage<4, 4>  mUnkc7dbef;
    ::ll::UntypedStorage<4, 72> mUnk5419c1;
    ::ll::UntypedStorage<4, 12> mUnk40181e;
    ::ll::UntypedStorage<4, 20> mUnk5885bc;
    ::ll::UntypedStorage<8, 8>  mUnka252ff;
    ::ll::UntypedStorage<8, 24> mUnkc15a14;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoFrame& operator=(VideoFrame const&);
    VideoFrame();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoFrame(::webrtc::VideoFrame const&);

    MCNAPI VideoFrame(
        ushort,
        ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const&,
        int64,
        ::std::optional<::webrtc::Timestamp> const&,
        ::std::optional<::webrtc::Timestamp> const&,
        uint,
        int64,
        ::webrtc::VideoRotation,
        ::std::optional<::webrtc::ColorSpace> const&,
        ::webrtc::VideoFrame::RenderParameters const&,
        ::std::optional<::webrtc::VideoFrame::UpdateRect> const&,
        ::webrtc::RtpPacketInfos
    );

    MCNAPI int height() const;

    MCNAPI int width() const;

    MCNAPI ~VideoFrame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::VideoFrame const&);

    MCNAPI void* $ctor(
        ushort,
        ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const&,
        int64,
        ::std::optional<::webrtc::Timestamp> const&,
        ::std::optional<::webrtc::Timestamp> const&,
        uint,
        int64,
        ::webrtc::VideoRotation,
        ::std::optional<::webrtc::ColorSpace> const&,
        ::webrtc::VideoFrame::RenderParameters const&,
        ::std::optional<::webrtc::VideoFrame::UpdateRect> const&,
        ::webrtc::RtpPacketInfos
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
