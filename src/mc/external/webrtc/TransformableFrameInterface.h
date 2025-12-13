#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class TransformableFrameInterface {
public:
    // TransformableFrameInterface inner types define
    enum class Direction : int {
        KUnknown  = 0,
        KReceiver = 1,
        KSender   = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransformableFrameInterface() = default;

    virtual ::rtc::ArrayView<uchar const> GetData() const = 0;

    virtual void SetData(::rtc::ArrayView<uchar const>) = 0;

    virtual uchar GetPayloadType() const = 0;

    virtual uint GetSsrc() const = 0;

    virtual uint GetTimestamp() const = 0;

    virtual void SetRTPTimestamp(uint) = 0;

    virtual ::std::optional<::webrtc::Timestamp> GetCaptureTimeIdentifier() const;

    virtual ::webrtc::TransformableFrameInterface::Direction GetDirection() const;

    virtual ::std::string GetMimeType() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
