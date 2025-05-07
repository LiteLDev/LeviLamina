#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class EncodedImageBufferInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual uchar const* data() const = 0;

    // vIndex: 3
    virtual uchar* data() = 0;

    // vIndex: 5
    virtual uint64 size() const = 0;

    // vIndex: 2
    virtual ~EncodedImageBufferInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
