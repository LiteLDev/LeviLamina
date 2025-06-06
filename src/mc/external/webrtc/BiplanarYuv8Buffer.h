#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BiplanarYuvBuffer.h"

namespace webrtc {

class BiplanarYuv8Buffer : public ::webrtc::BiplanarYuvBuffer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 14
    virtual uchar const* DataY() const = 0;

    // vIndex: 15
    virtual uchar const* DataUV() const = 0;

    // vIndex: 2
    virtual ~BiplanarYuv8Buffer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
