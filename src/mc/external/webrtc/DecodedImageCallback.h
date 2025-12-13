#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrame; }
// clang-format on

namespace webrtc {

class DecodedImageCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DecodedImageCallback() = default;

    virtual int Decoded(::webrtc::VideoFrame&) = 0;

    virtual int Decoded(::webrtc::VideoFrame&, int64);

    virtual void Decoded(::webrtc::VideoFrame&, ::std::optional<int>, ::std::optional<uchar>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
