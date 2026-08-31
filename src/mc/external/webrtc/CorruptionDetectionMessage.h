#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FrameInstrumentationData; }
// clang-format on

namespace webrtc {

class CorruptionDetectionMessage {
public:
    // CorruptionDetectionMessage inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // CorruptionDetectionMessage inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnk9d14ed;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Builder();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk7abd57;
    ::ll::UntypedStorage<1, 1>   mUnkd960f7;
    ::ll::UntypedStorage<8, 8>   mUnka84f96;
    ::ll::UntypedStorage<4, 4>   mUnkd24e22;
    ::ll::UntypedStorage<4, 4>   mUnka89ebe;
    ::ll::UntypedStorage<8, 112> mUnk84d9f4;
    // NOLINTEND

public:
    // prevent constructor by default
    CorruptionDetectionMessage& operator=(CorruptionDetectionMessage const&);
    CorruptionDetectionMessage(CorruptionDetectionMessage const&);
    CorruptionDetectionMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CorruptionDetectionMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::CorruptionDetectionMessage
    FromFrameInstrumentationData(::webrtc::FrameInstrumentationData const& frame_instrumentation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
