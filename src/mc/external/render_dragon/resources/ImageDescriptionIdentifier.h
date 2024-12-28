#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct ImageDescriptionIdentifier {
public:
    // prevent constructor by default
    ImageDescriptionIdentifier& operator=(ImageDescriptionIdentifier const&);
    ImageDescriptionIdentifier(ImageDescriptionIdentifier const&);
    ImageDescriptionIdentifier();
};

} // namespace dragon
