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
    // vIndex: 0
    virtual ~FecController() = default;

    // vIndex: 1
    virtual void SetProtectionCallback(::webrtc::VCMProtectionCallback*) = 0;

    // vIndex: 2
    virtual void SetProtectionMethod(bool, bool) = 0;

    // vIndex: 3
    virtual void SetEncodingData(uint64, uint64, uint64, uint64) = 0;

    // vIndex: 4
    virtual uint UpdateFecRates(uint, int, uchar, ::std::vector<bool>, int64) = 0;

    // vIndex: 5
    virtual void UpdateWithEncodedData(uint64, ::webrtc::VideoFrameType) = 0;

    // vIndex: 6
    virtual bool UseLossVectorMask() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
