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
    MCAPI void Initialize(::cricket::AudioOptions const*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::LocalAudioSource> Create(::cricket::AudioOptions const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRefCountInterface();

    MCAPI static void** $vftableForNotifierInterface();
    // NOLINTEND
};

} // namespace webrtc
