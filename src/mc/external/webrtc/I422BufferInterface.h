#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PlanarYuv8Buffer.h"
#include "mc/external/webrtc/VideoFrameBuffer.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrameBuffer; }
// clang-format on

namespace webrtc {

class I422BufferInterface : public ::webrtc::PlanarYuv8Buffer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::VideoFrameBuffer::Type type() const /*override*/;

    virtual int ChromaWidth() const /*override*/;

    virtual int ChromaHeight() const /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> CropAndScale(
        int offset_x,
        int offset_y,
        int crop_width,
        int crop_height,
        int scaled_width,
        int scaled_height
    ) /*override*/;

    virtual ~I422BufferInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
