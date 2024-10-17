#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientRewind {

struct ApplyReplayStateTrackerRequestComponent {
public:
    // prevent constructor by default
    ApplyReplayStateTrackerRequestComponent& operator=(ApplyReplayStateTrackerRequestComponent const&);
    ApplyReplayStateTrackerRequestComponent(ApplyReplayStateTrackerRequestComponent const&);
    ApplyReplayStateTrackerRequestComponent();
};

}; // namespace ClientRewind
