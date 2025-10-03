#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FrameDependencyTemplate.h"

namespace webrtc {

struct GenericFrameInfo : public ::webrtc::FrameDependencyTemplate {
public:
    // GenericFrameInfo inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // GenericFrameInfo inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 216> mUnk97ebcb;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk3e9aef;
    ::ll::UntypedStorage<8, 32> mUnk4cd2f4;
    ::ll::UntypedStorage<4, 4>  mUnkc7f760;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericFrameInfo& operator=(GenericFrameInfo const&);
    GenericFrameInfo(GenericFrameInfo const&);
    GenericFrameInfo();
};

} // namespace webrtc
