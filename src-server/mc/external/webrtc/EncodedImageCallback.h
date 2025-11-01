#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EncodedImage; }
namespace webrtc { struct CodecSpecificInfo; }
// clang-format on

namespace webrtc {

class EncodedImageCallback {
public:
    // EncodedImageCallback inner types declare
    // clang-format off
    struct Result;
    // clang-format on

    // EncodedImageCallback inner types define
    struct Result {
    public:
        // Result inner types define
        enum class Error : int {
            Ok              = 0,
            ErrorSendFailed = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk6b5245;
        ::ll::UntypedStorage<4, 4> mUnk45aa4b;
        ::ll::UntypedStorage<1, 1> mUnk484c7c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);
        Result();
    };

    enum class DropReason : uchar {
        KDroppedByMediaOptimizations = 0,
        KDroppedByEncoder            = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EncodedImageCallback() = default;

    // vIndex: 1
    virtual ::webrtc::EncodedImageCallback::Result
    OnEncodedImage(::webrtc::EncodedImage const&, ::webrtc::CodecSpecificInfo const*) = 0;

    // vIndex: 2
    virtual void OnDroppedFrame(::webrtc::EncodedImageCallback::DropReason reason);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnDroppedFrame(::webrtc::EncodedImageCallback::DropReason reason);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
