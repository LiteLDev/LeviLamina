#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoFrameType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VCMProtectionCallback; }
// clang-format on

namespace webrtc {

class FecController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FecController() = default;

    virtual void SetProtectionCallback(::webrtc::VCMProtectionCallback*) = 0;

    virtual void SetProtectionMethod(bool, bool) = 0;

    virtual void SetEncodingData(uint64, uint64, uint64, uint64) = 0;

    virtual uint UpdateFecRates(uint, int, uchar, ::std::vector<bool>, int64) = 0;

    virtual void UpdateWithEncodedData(uint64, ::webrtc::VideoFrameType) = 0;

    virtual bool UseLossVectorMask() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
