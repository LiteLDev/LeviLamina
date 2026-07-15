#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Priority.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PriorityValueTag; }
// clang-format on

namespace webrtc {

class PriorityValue : public ::webrtc::StrongAlias<::webrtc::PriorityValueTag, ushort> {
public:
    // prevent constructor by default
    PriorityValue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PriorityValue(::webrtc::Priority priority);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Priority priority);
    // NOLINTEND
};

} // namespace webrtc
