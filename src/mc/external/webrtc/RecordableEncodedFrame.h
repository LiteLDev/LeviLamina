#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoCodecType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ColorSpace; }
namespace webrtc { class EncodedImageBufferInterface; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RecordableEncodedFrame {
public:
    // RecordableEncodedFrame inner types declare
    // clang-format off
    struct EncodedResolution;
    // clang-format on

    // RecordableEncodedFrame inner types define
    struct EncodedResolution {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf36f21;
        ::ll::UntypedStorage<4, 4> mUnk5fc684;
        // NOLINTEND

    public:
        // prevent constructor by default
        EncodedResolution& operator=(EncodedResolution const&);
        EncodedResolution(EncodedResolution const&);
        EncodedResolution();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecordableEncodedFrame() = default;

    virtual ::webrtc::scoped_refptr<::webrtc::EncodedImageBufferInterface const> encoded_buffer() const = 0;

    virtual ::std::optional<::webrtc::ColorSpace> color_space() const = 0;

    virtual ::webrtc::VideoCodecType codec() const = 0;

    virtual bool is_key_frame() const = 0;

    virtual ::webrtc::RecordableEncodedFrame::EncodedResolution resolution() const = 0;

    virtual ::webrtc::Timestamp render_time() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
