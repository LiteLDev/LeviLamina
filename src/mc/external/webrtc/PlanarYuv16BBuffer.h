#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PlanarYuvBuffer.h"

namespace webrtc {

class PlanarYuv16BBuffer : public ::webrtc::PlanarYuvBuffer {
public:
    // prevent constructor by default
    PlanarYuv16BBuffer& operator=(PlanarYuv16BBuffer const&);
    PlanarYuv16BBuffer(PlanarYuv16BBuffer const&);
    PlanarYuv16BBuffer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 15
    virtual ushort const* DataY() const = 0;

    // vIndex: 16
    virtual ushort const* DataU() const = 0;

    // vIndex: 17
    virtual ushort const* DataV() const = 0;

    // vIndex: 2
    virtual ~PlanarYuv16BBuffer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
