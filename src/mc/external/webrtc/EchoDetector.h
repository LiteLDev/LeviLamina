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
    // prevent constructor by default
    EchoDetector& operator=(EchoDetector const&);
    EchoDetector(EchoDetector const&);
    EchoDetector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void Initialize(int, int, int, int) = 0;

    // vIndex: 4
    virtual void AnalyzeRenderAudio(::rtc::ArrayView<float const>) = 0;

    // vIndex: 5
    virtual void AnalyzeCaptureAudio(::rtc::ArrayView<float const>) = 0;

    // vIndex: 6
    virtual ::webrtc::EchoDetector::Metrics GetMetrics() const = 0;

    // vIndex: 2
    virtual ~EchoDetector() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
