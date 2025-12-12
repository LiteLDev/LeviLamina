#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class I420BufferInterface; }
// clang-format on

namespace webrtc {

class VideoFrameBuffer : public ::webrtc::RefCountInterface {
public:
    // VideoFrameBuffer inner types define
    enum class Type : int {
        KNative = 0,
        KI420   = 1,
        KI420A  = 2,
        KI422   = 3,
        KI444   = 4,
        KI010   = 5,
        KI210   = 6,
        KI410   = 7,
        KNV12   = 8,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::VideoFrameBuffer::Type type() const = 0;

    virtual int width() const = 0;

    virtual int height() const = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::I420BufferInterface> ToI420() = 0;

    virtual ::webrtc::I420BufferInterface const* GetI420() const;

    virtual ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer>
    CropAndScale(int offset_x, int offset_y, int crop_width, int crop_height, int scaled_width, int scaled_height);

    virtual ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer>
    GetMappedFrameBuffer(::rtc::ArrayView<::webrtc::VideoFrameBuffer::Type> types);

    virtual ~VideoFrameBuffer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer>
    $CropAndScale(int offset_x, int offset_y, int crop_width, int crop_height, int scaled_width, int scaled_height);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer>
    $GetMappedFrameBuffer(::rtc::ArrayView<::webrtc::VideoFrameBuffer::Type> types);


    // NOLINTEND
};

} // namespace webrtc
