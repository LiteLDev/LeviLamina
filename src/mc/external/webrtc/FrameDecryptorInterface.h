#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class FrameDecryptorInterface : public ::webrtc::RefCountInterface {
public:
    // FrameDecryptorInterface inner types declare
    // clang-format off
    struct Result;
    // clang-format on

    // FrameDecryptorInterface inner types define
    enum class Status : int {
        KOk              = 0,
        KRecoverable     = 1,
        KFailedToDecrypt = 2,
        KUnknown         = 3,
    };

    struct Result {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkfa122e;
        ::ll::UntypedStorage<8, 8> mUnk257a1b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);
        Result();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~FrameDecryptorInterface() /*override*/ = default;

    // vIndex: 3
    virtual ::webrtc::FrameDecryptorInterface::Result
    Decrypt(::cricket::MediaType, ::std::vector<uint> const&, ::rtc::ArrayView<uchar const>, ::rtc::ArrayView<uchar const>, ::rtc::ArrayView<uchar>) = 0;

    // vIndex: 4
    virtual uint64 GetMaxPlaintextByteSize(::cricket::MediaType, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
