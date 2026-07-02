#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioBuffer; }
// clang-format on

namespace webrtc {

class EchoControl {
public:
    // EchoControl inner types declare
    // clang-format off
    struct Metrics;
    // clang-format on

    // EchoControl inner types define
    struct Metrics {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnke72249;
        ::ll::UntypedStorage<8, 8> mUnkcc7434;
        ::ll::UntypedStorage<4, 4> mUnk6aabad;
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
    virtual void AnalyzeRender(::webrtc::AudioBuffer*) = 0;

    virtual void AnalyzeCapture(::webrtc::AudioBuffer*) = 0;

    virtual void ProcessCapture(::webrtc::AudioBuffer*, bool) = 0;

    virtual void ProcessCapture(::webrtc::AudioBuffer*, ::webrtc::AudioBuffer*, bool) = 0;

    virtual ::webrtc::EchoControl::Metrics GetMetrics() const = 0;

    virtual void SetAudioBufferDelay(int) = 0;

    virtual void SetCaptureOutputUsage(bool);

    virtual bool ActiveProcessing() const = 0;

    virtual ~EchoControl() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
