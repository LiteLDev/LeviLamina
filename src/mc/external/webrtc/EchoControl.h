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
    // prevent constructor by default
    EchoControl& operator=(EchoControl const&);
    EchoControl(EchoControl const&);
    EchoControl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void AnalyzeRender(::webrtc::AudioBuffer*) = 0;

    // vIndex: 1
    virtual void AnalyzeCapture(::webrtc::AudioBuffer*) = 0;

    // vIndex: 3
    virtual void ProcessCapture(::webrtc::AudioBuffer*, bool) = 0;

    // vIndex: 2
    virtual void ProcessCapture(::webrtc::AudioBuffer*, ::webrtc::AudioBuffer*, bool) = 0;

    // vIndex: 4
    virtual ::webrtc::EchoControl::Metrics GetMetrics() const = 0;

    // vIndex: 5
    virtual void SetAudioBufferDelay(int) = 0;

    // vIndex: 6
    virtual void SetCaptureOutputUsage(bool);

    // vIndex: 7
    virtual bool ActiveProcessing() const = 0;

    // vIndex: 8
    virtual ~EchoControl() = default;
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
