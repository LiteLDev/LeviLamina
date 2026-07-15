#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class TransformableFrameInterface {
public:
    // TransformableFrameInterface inner types declare
    // clang-format off
    class Passkey;
    // clang-format on

    // TransformableFrameInterface inner types define
    enum class Direction : int {
        KUnknown  = 0,
        KReceiver = 1,
        KSender   = 2,
    };

    class Passkey {};

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransformableFrameInterface() = default;

    virtual ::webrtc::ArrayView<uchar const, 18446744073709546905> GetData() const = 0;

    virtual void SetData(::webrtc::ArrayView<uchar const, 18446744073709546905> data) = 0;

    virtual uchar GetPayloadType() const = 0;

    virtual bool CanSetPayloadType() const;

    virtual void SetPayloadType(uchar payload_type);

    virtual uint GetSsrc() const = 0;

    virtual uint GetTimestamp() const = 0;

    virtual void SetRTPTimestamp(uint timestamp) = 0;

    virtual ::std::optional<::webrtc::Timestamp> GetCaptureTimeIdentifier() const;

    virtual ::std::optional<::webrtc::Timestamp> GetPresentationTimestamp() const;

    virtual ::webrtc::TransformableFrameInterface::Direction GetDirection() const;

    virtual ::std::string GetMimeType() const = 0;

    virtual ::std::optional<::webrtc::Timestamp> ReceiveTime() const = 0;

    virtual ::std::optional<::webrtc::Timestamp> CaptureTime() const = 0;

    virtual bool CanSetCaptureTime() const;

    virtual void SetCaptureTime(::std::optional<::webrtc::Timestamp> capture_time);

    virtual ::std::optional<::webrtc::TimeDelta> SenderCaptureTimeOffset() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $CanSetPayloadType() const;

    MCNAPI void $SetPayloadType(uchar payload_type);

    MCNAPI ::std::optional<::webrtc::Timestamp> $GetCaptureTimeIdentifier() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> $GetPresentationTimestamp() const;

    MCNAPI ::webrtc::TransformableFrameInterface::Direction $GetDirection() const;

    MCNAPI bool $CanSetCaptureTime() const;

    MCNAPI void $SetCaptureTime(::std::optional<::webrtc::Timestamp> capture_time);


    // NOLINTEND
};

} // namespace webrtc
