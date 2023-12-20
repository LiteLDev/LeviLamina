#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/RefCountInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class VideoFrameBuffer : public ::rtc::RefCountInterface {
public:
    // VideoFrameBuffer inner types define
    enum class Type {};

public:
    // prevent constructor by default
    VideoFrameBuffer& operator=(VideoFrameBuffer const&);
    VideoFrameBuffer(VideoFrameBuffer const&);
    VideoFrameBuffer();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: __gen_??1VideoFrameBuffer@webrtc@@UEAA@XZ
    virtual ~VideoFrameBuffer() = default;

    // symbol: ?CropAndScale@VideoFrameBuffer@webrtc@@UEAA?AV?$scoped_refptr@VVideoFrameBuffer@webrtc@@@rtc@@HHHHHH@Z
    MCVAPI class rtc::scoped_refptr<class webrtc::VideoFrameBuffer> CropAndScale(int, int, int, int, int, int);

    // symbol:
    // ?GetMappedFrameBuffer@VideoFrameBuffer@webrtc@@UEAA?AV?$scoped_refptr@VVideoFrameBuffer@webrtc@@@rtc@@V?$ArrayView@W4Type@VideoFrameBuffer@webrtc@@$0?BCGH@@4@@Z
    MCVAPI class rtc::scoped_refptr<class webrtc::VideoFrameBuffer>
        GetMappedFrameBuffer(class rtc::ArrayView<::webrtc::VideoFrameBuffer::Type, -4711>);

    // NOLINTEND
};

}; // namespace webrtc
