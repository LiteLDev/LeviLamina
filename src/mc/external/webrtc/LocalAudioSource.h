#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct AudioOptions; }
// clang-format on

namespace webrtc {

class LocalAudioSource {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Initialize(::cricket::AudioOptions const*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::LocalAudioSource> Create(::cricket::AudioOptions const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRefCountInterface();

    MCNAPI static void** $vftableForNotifierInterface();
    // NOLINTEND
};

} // namespace webrtc
