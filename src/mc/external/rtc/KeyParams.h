#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/ECCurve.h"
#include "mc/external/rtc/KeyType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct RSAParams; }
// clang-format on

namespace rtc {

class KeyParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk28eb50;
    ::ll::UntypedStorage<4, 8> mUnkcaca56;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyParams& operator=(KeyParams const&);
    KeyParams(KeyParams const&);
    KeyParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool IsValid() const;

    MCNAPI explicit KeyParams(::rtc::KeyType);

    MCNAPI ::rtc::ECCurve ec_curve() const;

    MCNAPI ::rtc::RSAParams rsa_params() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::KeyType);
    // NOLINTEND
};

} // namespace rtc
