#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PlanarYuvBuffer.h"

namespace webrtc {

class PlanarYuv16BBuffer : public ::webrtc::PlanarYuvBuffer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ushort const* DataY() const = 0;

    virtual ushort const* DataU() const = 0;

    virtual ushort const* DataV() const = 0;

    virtual ~PlanarYuv16BBuffer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
