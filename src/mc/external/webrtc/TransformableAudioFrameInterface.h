#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // prevent constructor by default
    TransformableAudioFrameInterface& operator=(TransformableAudioFrameInterface const&);
    TransformableAudioFrameInterface(TransformableAudioFrameInterface const&);
    TransformableAudioFrameInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransformableAudioFrameInterface() /*override*/;

    // vIndex: 10
    virtual ::rtc::ArrayView<uint const> GetContributingSources() const = 0;

    // vIndex: 11
    virtual ::std::optional<ushort> const SequenceNumber() const = 0;

    // vIndex: 12
    virtual ::std::optional<uint64> AbsoluteCaptureTimestamp() const = 0;

    // vIndex: 13
    virtual ::webrtc::TransformableAudioFrameInterface::FrameType Type() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::webrtc::TransformableAudioFrameInterface::FrameType $Type() const;
    // NOLINTEND
};

} // namespace webrtc
