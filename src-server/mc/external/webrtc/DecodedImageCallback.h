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
    // vIndex: 0
    virtual ~DecodedImageCallback() = default;

    // vIndex: 3
    virtual int Decoded(::webrtc::VideoFrame&) = 0;

    // vIndex: 2
    virtual int Decoded(::webrtc::VideoFrame&, int64);

    // vIndex: 1
    virtual void Decoded(::webrtc::VideoFrame&, ::std::optional<int>, ::std::optional<uchar>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
