#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class EncodedImageBufferInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uchar const* data() const = 0;

    virtual uint64 size() const = 0;

    virtual ~EncodedImageBufferInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
