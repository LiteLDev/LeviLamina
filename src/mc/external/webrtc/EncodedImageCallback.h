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
    // prevent constructor by default
    EncodedImageCallback& operator=(EncodedImageCallback const&);
    EncodedImageCallback(EncodedImageCallback const&);
    EncodedImageCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EncodedImageCallback();

    // vIndex: 1
    virtual ::webrtc::EncodedImageCallback::Result
    OnEncodedImage(::webrtc::EncodedImage const&, ::webrtc::CodecSpecificInfo const*) = 0;

    // vIndex: 2
    virtual void OnDroppedFrame(::webrtc::EncodedImageCallback::DropReason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnDroppedFrame(::webrtc::EncodedImageCallback::DropReason);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
