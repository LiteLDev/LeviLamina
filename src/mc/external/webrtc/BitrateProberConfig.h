#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct BitrateProberConfig {
public:
    // prevent constructor by default
    BitrateProberConfig& operator=(BitrateProberConfig const&);
    BitrateProberConfig(BitrateProberConfig const&);
    BitrateProberConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BitrateProberConfig(::webrtc::FieldTrialsView const*);

    MCAPI ~BitrateProberConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
