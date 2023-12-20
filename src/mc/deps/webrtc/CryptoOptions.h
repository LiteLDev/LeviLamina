#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CryptoOptions {
public:
    // prevent constructor by default
    CryptoOptions& operator=(CryptoOptions const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CryptoOptions@webrtc@@QEAA@XZ
    MCAPI CryptoOptions();

    // symbol: ??0CryptoOptions@webrtc@@QEAA@AEBU01@@Z
    MCAPI CryptoOptions(struct webrtc::CryptoOptions const&);

    // symbol: ?GetSupportedDtlsSrtpCryptoSuites@CryptoOptions@webrtc@@QEBA?AV?$vector@HV?$allocator@H@std@@@std@@XZ
    MCAPI std::vector<int> GetSupportedDtlsSrtpCryptoSuites() const;

    // symbol: ??9CryptoOptions@webrtc@@QEBA_NAEBU01@@Z
    MCAPI bool operator!=(struct webrtc::CryptoOptions const&) const;

    // symbol: ??8CryptoOptions@webrtc@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct webrtc::CryptoOptions const&) const;

    // symbol: ??1CryptoOptions@webrtc@@QEAA@XZ
    MCAPI ~CryptoOptions();

    // symbol: ?NoGcm@CryptoOptions@webrtc@@SA?AU12@XZ
    MCAPI static struct webrtc::CryptoOptions NoGcm();

    // NOLINTEND
};

}; // namespace webrtc
