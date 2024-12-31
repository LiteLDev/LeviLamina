#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StreamFeedbackObserver; }
// clang-format on

namespace webrtc {

class StreamFeedbackProvider {
public:
    // prevent constructor by default
    StreamFeedbackProvider& operator=(StreamFeedbackProvider const&);
    StreamFeedbackProvider(StreamFeedbackProvider const&);
    StreamFeedbackProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void RegisterStreamFeedbackObserver(::std::vector<uint>, ::webrtc::StreamFeedbackObserver*) = 0;

    // vIndex: 1
    virtual void DeRegisterStreamFeedbackObserver(::webrtc::StreamFeedbackObserver*) = 0;

    // vIndex: 2
    virtual ~StreamFeedbackProvider() = default;
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
