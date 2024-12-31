#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BiplanarYuv8Buffer.h"
#include "mc/external/webrtc/VideoFrameBuffer.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrameBuffer; }
// clang-format on

namespace webrtc {

class NV12BufferInterface : public ::webrtc::BiplanarYuv8Buffer {
public:
    // prevent constructor by default
    NV12BufferInterface& operator=(NV12BufferInterface const&);
    NV12BufferInterface(NV12BufferInterface const&);
    NV12BufferInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::VideoFrameBuffer::Type type() const /*override*/;

    // vIndex: 10
    virtual int ChromaWidth() const /*override*/;

    // vIndex: 11
    virtual int ChromaHeight() const /*override*/;

    // vIndex: 8
    virtual ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> CropAndScale(int, int, int, int, int, int) /*override*/;

    // vIndex: 2
    virtual ~NV12BufferInterface() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
