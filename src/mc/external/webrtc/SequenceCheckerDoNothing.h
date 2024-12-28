#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::webrtc_sequence_checker_internal {

class SequenceCheckerDoNothing {
public:
    // prevent constructor by default
    SequenceCheckerDoNothing& operator=(SequenceCheckerDoNothing const&);
    SequenceCheckerDoNothing(SequenceCheckerDoNothing const&);
    SequenceCheckerDoNothing();
};

} // namespace webrtc::webrtc_sequence_checker_internal
