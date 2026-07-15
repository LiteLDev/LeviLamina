#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/TransformableFrameInterface.h"

namespace webrtc {

class TransformableAudioFrameInterface : public ::webrtc::TransformableFrameInterface {
public:
    // TransformableAudioFrameInterface inner types define
    enum class FrameType : int {
        KEmptyFrame       = 0,
        KAudioFrameSpeech = 1,
        KAudioFrameCN     = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransformableAudioFrameInterface() /*override*/ = default;

    virtual ::webrtc::ArrayView<uint const, 18446744073709546905> GetContributingSources() const = 0;

    virtual ::std::optional<ushort> const SequenceNumber() const = 0;

    virtual ::std::optional<uint64> AbsoluteCaptureTimestamp() const = 0;

    virtual ::webrtc::TransformableAudioFrameInterface::FrameType Type() const;

    virtual ::std::optional<uchar> AudioLevel() const = 0;

    virtual bool CanSetAudioLevel() const;

    virtual void SetAudioLevel(::std::optional<uchar>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
