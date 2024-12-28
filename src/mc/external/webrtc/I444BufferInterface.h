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

class I444BufferInterface : public ::webrtc::PlanarYuv8Buffer {
public:
    // prevent constructor by default
    I444BufferInterface& operator=(I444BufferInterface const&);
    I444BufferInterface(I444BufferInterface const&);
    I444BufferInterface();

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
    virtual ~I444BufferInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::webrtc::VideoFrameBuffer::Type $type() const;

    MCAPI int $ChromaWidth() const;

    MCAPI int $ChromaHeight() const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> $CropAndScale(int, int, int, int, int, int);
    // NOLINTEND
};

} // namespace webrtc
