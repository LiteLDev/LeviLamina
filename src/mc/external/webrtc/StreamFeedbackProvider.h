#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StreamFeedbackObserver; }
// clang-format on

namespace webrtc {

class StreamFeedbackProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void RegisterStreamFeedbackObserver(::std::vector<uint>, ::webrtc::StreamFeedbackObserver*) = 0;

    virtual void DeRegisterStreamFeedbackObserver(::webrtc::StreamFeedbackObserver*) = 0;

    virtual ~StreamFeedbackProvider() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
