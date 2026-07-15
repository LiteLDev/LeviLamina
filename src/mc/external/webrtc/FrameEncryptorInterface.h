#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class FrameEncryptorInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrameEncryptorInterface() /*override*/ = default;

    virtual int Encrypt(
        ::webrtc::MediaType,
        uint,
        ::webrtc::ArrayView<uchar const, 18446744073709546905>,
        ::webrtc::ArrayView<uchar const, 18446744073709546905>,
        ::webrtc::ArrayView<uchar, 18446744073709546905>,
        uint64*
    ) = 0;

    virtual uint64 GetMaxCiphertextByteSize(::webrtc::MediaType, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
