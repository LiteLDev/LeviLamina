#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class EncodedImageCallback {
public:
    // EncodedImageCallback inner types declare
    // clang-format off
    struct Result;
    // clang-format on

    // EncodedImageCallback inner types define
    enum class DropReason {};

    struct Result {
    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);
        Result();
    };

public:
    // prevent constructor by default
    EncodedImageCallback& operator=(EncodedImageCallback const&);
    EncodedImageCallback(EncodedImageCallback const&);
    EncodedImageCallback();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EncodedImageCallback@webrtc@@UEAA@XZ
    virtual ~EncodedImageCallback() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: ?OnDroppedFrame@EncodedImageCallback@webrtc@@UEAAXW4DropReason@12@@Z
    virtual void OnDroppedFrame(::webrtc::EncodedImageCallback::DropReason);

    // NOLINTEND
};

}; // namespace webrtc
