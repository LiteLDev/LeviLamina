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
    // vIndex: 2
    virtual ~FrameEncryptorInterface() /*override*/ = default;

    // vIndex: 3
    virtual int
    Encrypt(::cricket::MediaType, uint, ::rtc::ArrayView<uchar const>, ::rtc::ArrayView<uchar const>, ::rtc::ArrayView<uchar>, uint64*) = 0;

    // vIndex: 4
    virtual uint64 GetMaxCiphertextByteSize(::cricket::MediaType, uint64) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
