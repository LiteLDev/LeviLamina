#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoRotation.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ColorSpace; }
namespace webrtc { class RtpPacketInfos; }
namespace webrtc { class VideoFrameBuffer; }
// clang-format on

namespace webrtc {

class VideoFrame {
public:
    // VideoFrame inner types declare
    // clang-format off
    class Builder;
    struct RenderParameters;
    struct UpdateRect;
    // clang-format on

    // VideoFrame inner types define
    class Builder {
    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0Builder@VideoFrame@webrtc@@QEAA@XZ
        MCAPI Builder();

        // symbol: ?build@Builder@VideoFrame@webrtc@@QEAA?AV23@XZ
        MCAPI class webrtc::VideoFrame build();

        // symbol: ?set_id@Builder@VideoFrame@webrtc@@QEAAAEAV123@G@Z
        MCAPI class webrtc::VideoFrame::Builder& set_id(ushort);

        // symbol: ?set_rotation@Builder@VideoFrame@webrtc@@QEAAAEAV123@W4VideoRotation@3@@Z
        MCAPI class webrtc::VideoFrame::Builder& set_rotation(::webrtc::VideoRotation);

        // symbol: ?set_timestamp_us@Builder@VideoFrame@webrtc@@QEAAAEAV123@_J@Z
        MCAPI class webrtc::VideoFrame::Builder& set_timestamp_us(int64);

        // symbol:
        // ?set_video_frame_buffer@Builder@VideoFrame@webrtc@@QEAAAEAV123@AEBV?$scoped_refptr@VVideoFrameBuffer@webrtc@@@rtc@@@Z
        MCAPI class webrtc::VideoFrame::Builder&
        set_video_frame_buffer(class rtc::scoped_refptr<class webrtc::VideoFrameBuffer> const&);

        // symbol: ??1Builder@VideoFrame@webrtc@@QEAA@XZ
        MCAPI ~Builder();

        // NOLINTEND
    };

    struct RenderParameters {
    public:
        // prevent constructor by default
        RenderParameters& operator=(RenderParameters const&);
        RenderParameters(RenderParameters const&);
        RenderParameters();
    };

    struct UpdateRect {
    public:
        // prevent constructor by default
        UpdateRect& operator=(UpdateRect const&);
        UpdateRect(UpdateRect const&);
        UpdateRect();
    };

public:
    // prevent constructor by default
    VideoFrame& operator=(VideoFrame const&);
    VideoFrame();

public:
    // NOLINTBEGIN
    // symbol: ??0VideoFrame@webrtc@@QEAA@AEBV01@@Z
    MCAPI VideoFrame(class webrtc::VideoFrame const&);

    // symbol: ?height@VideoFrame@webrtc@@QEBAHXZ
    MCAPI int height() const;

    // symbol: ?width@VideoFrame@webrtc@@QEBAHXZ
    MCAPI int width() const;

    // symbol: ??1VideoFrame@webrtc@@QEAA@XZ
    MCAPI ~VideoFrame();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0VideoFrame@webrtc@@AEAA@GAEBV?$scoped_refptr@VVideoFrameBuffer@webrtc@@@rtc@@_JI1W4VideoRotation@1@AEBV?$optional@VColorSpace@webrtc@@@std@@AEBURenderParameters@01@AEBV?$optional@UUpdateRect@VideoFrame@webrtc@@@6@VRtpPacketInfos@1@@Z
    MCAPI VideoFrame(
        ushort,
        class rtc::scoped_refptr<class webrtc::VideoFrameBuffer> const&,
        int64,
        uint,
        int64,
        ::webrtc::VideoRotation,
        std::optional<class webrtc::ColorSpace> const&,
        struct webrtc::VideoFrame::RenderParameters const&,
        std::optional<struct webrtc::VideoFrame::UpdateRect> const&,
        class webrtc::RtpPacketInfos
    );

    // NOLINTEND
};

}; // namespace webrtc
