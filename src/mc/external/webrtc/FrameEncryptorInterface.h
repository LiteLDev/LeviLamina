#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class FrameEncryptorInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrameEncryptorInterface() /*override*/ = default;

    virtual int Encrypt(
        ::cricket::MediaType,
        uint,
        ::rtc::ArrayView<uchar const>,
        ::rtc::ArrayView<uchar const>,
        ::rtc::ArrayView<uchar>,
        uint64*
    ) = 0;

    virtual uint64 GetMaxCiphertextByteSize(::cricket::MediaType, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
