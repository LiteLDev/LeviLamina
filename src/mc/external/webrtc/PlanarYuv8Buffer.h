#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PlanarYuvBuffer.h"

namespace webrtc {

class PlanarYuv8Buffer : public ::webrtc::PlanarYuvBuffer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uchar const* DataY() const = 0;

    virtual uchar const* DataU() const = 0;

    virtual uchar const* DataV() const = 0;

    virtual ~PlanarYuv8Buffer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
