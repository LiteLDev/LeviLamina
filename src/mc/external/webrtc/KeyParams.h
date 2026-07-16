#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ECCurve.h"
#include "mc/external/webrtc/KeyType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RSAParams; }
// clang-format on

namespace webrtc {

class KeyParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2a00c9;
    ::ll::UntypedStorage<4, 8> mUnkda26a3;
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

    MCNAPI explicit KeyParams(::webrtc::KeyType key_type);

    MCNAPI ::webrtc::ECCurve ec_curve() const;

    MCNAPI ::webrtc::RSAParams rsa_params() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::KeyType key_type);
    // NOLINTEND
};

} // namespace webrtc
