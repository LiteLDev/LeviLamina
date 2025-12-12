#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class EchoDetector : public ::webrtc::RefCountInterface {
public:
    // EchoDetector inner types declare
    // clang-format off
    struct Metrics;
    // clang-format on

    // EchoDetector inner types define
    struct Metrics {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk68868b;
        ::ll::UntypedStorage<8, 16> mUnkb34294;
        // NOLINTEND

    public:
        // prevent constructor by default
        Metrics& operator=(Metrics const&);
        Metrics(Metrics const&);
        Metrics();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Initialize(int, int, int, int) = 0;

    virtual void AnalyzeRenderAudio(::rtc::ArrayView<float const>) = 0;

    virtual void AnalyzeCaptureAudio(::rtc::ArrayView<float const>) = 0;

    virtual ::webrtc::EchoDetector::Metrics GetMetrics() const = 0;

    virtual ~EchoDetector() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
