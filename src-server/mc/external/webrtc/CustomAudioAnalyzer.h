#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioBuffer; }
// clang-format on

namespace webrtc {

class CustomAudioAnalyzer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void Initialize(int, int) = 0;

    // vIndex: 1
    virtual void Analyze(::webrtc::AudioBuffer const*) = 0;

    // vIndex: 2
    virtual ::std::string ToString() const = 0;

    // vIndex: 3
    virtual ~CustomAudioAnalyzer() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
