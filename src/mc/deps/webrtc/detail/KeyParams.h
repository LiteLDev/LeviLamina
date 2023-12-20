#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ECCurve.h"
#include "mc/deps/webrtc/detail/KeyType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct RSAParams; }
// clang-format on

namespace rtc {

class KeyParams {
public:
    // prevent constructor by default
    KeyParams& operator=(KeyParams const&);
    KeyParams(KeyParams const&);
    KeyParams();

public:
    // NOLINTBEGIN
    // symbol: ?IsValid@KeyParams@rtc@@QEBA_NXZ
    MCAPI bool IsValid() const;

    // symbol: ??0KeyParams@rtc@@QEAA@W4KeyType@1@@Z
    MCAPI explicit KeyParams(::rtc::KeyType);

    // symbol: ?ec_curve@KeyParams@rtc@@QEBA?AW4ECCurve@2@XZ
    MCAPI ::rtc::ECCurve ec_curve() const;

    // symbol: ?rsa_params@KeyParams@rtc@@QEBA?AURSAParams@2@XZ
    MCAPI struct rtc::RSAParams rsa_params() const;

    // NOLINTEND
};

}; // namespace rtc
